/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C00384F8
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C00388A0 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C0038764 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C0039574 (cjIFIMetricsToOTMW.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C003E690 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00AF3B4 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00AF470 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B0C98 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, _DWORD *a4)
{
  unsigned int v4; // r14d
  size_t v5; // rsi
  DC *v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // eax
  int v15; // esi
  struct LFONT *v17; // rbx
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19[2]; // [rsp+38h] [rbp-C8h] BYREF
  DC *v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h]
  int v22; // [rsp+4Ch] [rbp-B4h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  struct LFONT *v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v26; // [rsp+68h] [rbp-98h] BYREF
  _BYTE Src[240]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  XDCOBJ::vLock(&v20, a1);
  v8 = v20;
  if ( !v20 )
  {
    EngSetLastError(6u);
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v20 + 10) + 8LL) & 0x10) == 0 )
    goto LABEL_5;
  v23 = *((_QWORD *)v20 + 6);
  if ( (*(_DWORD *)(v23 + 32) & 0x40) == 0 )
  {
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v23);
    v8 = v20;
  }
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v24, *(struct HLFONT__ **)(*((_QWORD *)v8 + 10) + 176LL), (struct PDEVOBJ *)&v23);
  v17 = v24;
  if ( !v24 )
  {
LABEL_32:
    LODWORD(v5) = 0;
    goto LABEL_17;
  }
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v17);
    goto LABEL_32;
  }
  v25 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v24, (struct XDCOBJ *)&v20, v19, &v26, &v18, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v17);
LABEL_5:
  *(_QWORD *)v19 = 0LL;
  v9 = RFONTOBJ::bInit((struct _FD_XFORM **)v19, (struct XDCOBJ *)&v20, 0, 2u);
  v12 = *(_QWORD *)v19;
  if ( v9 )
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v19 + 528LL));
  if ( !v12 || (v13 = *(_QWORD *)(v12 + 112)) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_28;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 80) + 3096LL) )
  {
    *a4 = cjOTMAWSize(*(struct _IFIMETRICS **)(v13 + 32), &v18);
    if ( a3 )
    {
      v11 = 232LL;
      if ( (unsigned int)v5 > 0xE8 )
      {
        if ( (unsigned int)v5 >= v18 )
        {
          v14 = cjIFIMetricsToOTMW(a4, a3, v19, &v20, *(_QWORD *)(v13 + 32), 1);
          v15 = v5 - v14;
          v4 = v14;
          if ( v15 > 0 )
            memset(&a3[v14], 0, v15);
        }
        goto LABEL_15;
      }
      memset(Src, 0, 0xE8uLL);
      if ( (unsigned int)cjIFIMetricsToOTMW(a4, Src, v19, &v20, *(_QWORD *)(v13 + 32), 0) )
      {
        memmove(a3, Src, v5);
        goto LABEL_16;
      }
LABEL_28:
      LODWORD(v5) = 0;
      goto LABEL_16;
    }
    v4 = v18;
  }
LABEL_15:
  LODWORD(v5) = v4;
LABEL_16:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v19, v10, v11);
LABEL_17:
  if ( v20 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v20);
  return (unsigned int)v5;
}
