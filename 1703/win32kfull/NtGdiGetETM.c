/*
 * XREFs of NtGdiGetETM @ 0x1C012A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C002FFD0 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0129E8C (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C012A274 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C029D050 (-FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  ULONG_PTR iTTUniq; // rdx
  __int64 v5; // r8
  __int64 v6; // r10
  _BYTE *v7; // r9
  struct _SURFOBJ *v9; // rdx
  struct _FONTOBJ *v10; // [rsp+50h] [rbp-C8h] BYREF
  int v11; // [rsp+58h] [rbp-C0h]
  ULONG_PTR v12; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v13[2]; // [rsp+68h] [rbp-B0h] BYREF
  PVOID pvConsumer; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v15[10]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE Src[56]; // [rsp+D0h] [rbp-48h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( a2 && v13[0] )
  {
    v10 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((struct _FD_XFORM **)&v10, (struct XDCOBJ *)v13, 0, 2u) )
      GreAcquireSemaphore(v10[8].iTTUniq);
    if ( v10 )
    {
      iTTUniq = v10[1].iTTUniq;
      v12 = iTTUniq;
      if ( *(_QWORD *)(iTTUniq + 3080) )
      {
        v11 = 256;
        v5 = 0LL;
        if ( (*(_DWORD *)(iTTUniq + 32) & 0x8000) != 0 )
          v5 = *(_QWORD *)(iTTUniq + 1816);
        if ( (unsigned int)GetETMFontManagement(&v10, iTTUniq, v5) )
        {
          v9 = (struct _SURFOBJ *)((*(_QWORD *)(v12 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v12 + 2568) != 0LL));
          if ( !v9 )
          {
            memset(v15, 0, sizeof(v15));
            v15[2] = *(_QWORD *)&v10[1].ulStyleSize;
            v15[3] = v10[1].sizLogResPpi;
            WORD2(v15[9]) = 1;
            v9 = (struct _SURFOBJ *)v15;
          }
          v3 = PDEVOBJ::FontManagement((PDEVOBJ *)&v12, v9, v10, 0x100u, 0, 0LL, 0x34u, Src);
        }
      }
      if ( !v3 )
      {
        pvConsumer = v10[1].pvConsumer;
        if ( pvConsumer )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)&pvConsumer) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)Src,
              (struct RFONTOBJ *)&v10,
              (struct DCOBJ *)v13,
              *(struct _IFIMETRICS **)(v6 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  }
  if ( v3 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v7 = (_BYTE *)W32UserProbeAddress;
    *v7 = *v7;
    v7[51] = v7[51];
    memmove(a2, Src, 0x34uLL);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v3;
}
