/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C002D170
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C002D030 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C002D3E4 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C002D514 (cjIFIMetricsToOTMW.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0031E20 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0089D10 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, _DWORD *a4)
{
  unsigned int v4; // r14d
  size_t v5; // rsi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // esi
  struct LFONT *v15; // rbx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+3Ch] [rbp-C4h]
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  struct LFONT *v22; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v24; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE Src[240]; // [rsp+80h] [rbp-80h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v16, a1);
  v8 = v16;
  if ( !v16 )
  {
    EngSetLastError(6u);
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v16 + 80) + 8LL) & 0x10) == 0 )
    goto LABEL_5;
  v21 = *(_QWORD *)(v16 + 48);
  if ( (*(_DWORD *)(v21 + 32) & 0x40) == 0 )
  {
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v21);
    v8 = v16;
  }
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v22, *(struct HLFONT__ **)(*(_QWORD *)(v8 + 80) + 176LL), (struct PDEVOBJ *)&v21);
  v15 = v22;
  if ( !v22 )
  {
LABEL_32:
    LODWORD(v5) = 0;
    goto LABEL_17;
  }
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v15);
    goto LABEL_32;
  }
  v25 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v22, (struct XDCOBJ *)&v16, &v24, &v26, &v23, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v15);
LABEL_5:
  v20 = 0LL;
  v9 = RFONTOBJ::bInit((RFONTOBJ *)&v20, (struct XDCOBJ *)&v16, 0, 2u);
  v10 = v20;
  if ( v9 )
    GreAcquireSemaphore(*(_QWORD *)(v20 + 528));
  if ( !v10 || (v11 = *(_QWORD *)(v10 + 112)) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_28;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v10 + 80) + 3096LL) )
  {
    *a4 = cjOTMAWSize(*(struct _IFIMETRICS **)(v11 + 32), &v19);
    if ( a3 )
    {
      if ( (unsigned int)v5 > 0xE8 )
      {
        if ( (unsigned int)v5 >= v19 )
        {
          v12 = cjIFIMetricsToOTMW(a4, a3, &v20, &v16, *(_QWORD *)(v11 + 32), 1);
          v13 = v5 - v12;
          v4 = v12;
          if ( v13 > 0 )
            memset(&a3[v12], 0, v13);
        }
        goto LABEL_15;
      }
      memset(Src, 0, 0xE8uLL);
      if ( (unsigned int)cjIFIMetricsToOTMW(a4, Src, &v20, &v16, *(_QWORD *)(v11 + 32), 0) )
      {
        memmove(a3, Src, v5);
        goto LABEL_16;
      }
LABEL_28:
      LODWORD(v5) = 0;
      goto LABEL_16;
    }
    v4 = v19;
  }
LABEL_15:
  LODWORD(v5) = v4;
LABEL_16:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
LABEL_17:
  if ( v16 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v16);
    _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
  }
  return (unsigned int)v5;
}
