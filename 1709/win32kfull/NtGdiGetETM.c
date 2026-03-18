/*
 * XREFs of NtGdiGetETM @ 0x1C013A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C003BD8C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C013A44C (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C013A690 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02997CC (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, _BYTE *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  struct _FONTOBJ *v5; // r8
  ULONG_PTR iTTUniq; // rbx
  __int64 v7; // r8
  __int64 v8; // r10
  _BYTE *v9; // r9
  struct _SURFOBJ *v11; // rdx
  struct _FONTOBJ *v12; // [rsp+50h] [rbp-D8h] BYREF
  int v13; // [rsp+58h] [rbp-D0h]
  _QWORD v14[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v15[2]; // [rsp+70h] [rbp-B8h] BYREF
  PVOID v16[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v17[10]; // [rsp+90h] [rbp-98h] BYREF
  _BYTE Src[56]; // [rsp+E0h] [rbp-48h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( a2 && v14[0] )
  {
    v12 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((struct _FD_XFORM **)&v12, (struct XDCOBJ *)v14, 0, 2u) )
      GreAcquireSemaphore(v12[8].iTTUniq);
    v5 = v12;
    if ( v12 )
    {
      iTTUniq = v12[1].iTTUniq;
      v15[1] = iTTUniq;
      if ( *(_QWORD *)(iTTUniq + 3080) )
      {
        v13 = 256;
        v7 = 0LL;
        if ( (*(_DWORD *)(iTTUniq + 32) & 0x8000) != 0 )
          v7 = *(_QWORD *)(iTTUniq + 1816);
        if ( (unsigned int)GetETMFontManagement(&v12, iTTUniq, v7) )
        {
          v11 = (struct _SURFOBJ *)((*(_QWORD *)(iTTUniq + 2568) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(iTTUniq + 2568) >> 64));
          if ( !v11 )
          {
            memset(v17, 0, sizeof(v17));
            v17[2] = *(_QWORD *)&v12[1].ulStyleSize;
            v17[3] = v12[1].sizLogResPpi;
            WORD2(v17[9]) = 1;
            v11 = (struct _SURFOBJ *)v17;
          }
          v16[0] = v12[1].pvProducer;
          v3 = PFFOBJ::FontManagement((PFFOBJ *)v16, v11, v12, 0x100u, 0, 0LL, 0x34u, Src);
        }
      }
      if ( !v3 )
      {
        v15[0] = v12[1].pvConsumer;
        if ( v15[0] )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)v15) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)Src,
              (struct RFONTOBJ *)&v12,
              (struct DCOBJ *)v14,
              *(struct _IFIMETRICS **)(v8 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12, v4, (__int64)v5);
  }
  if ( v3 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[51] = v9[51];
    memmove(a2, Src, 0x34uLL);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v3;
}
