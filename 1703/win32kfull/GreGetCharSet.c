/*
 * XREFs of GreGetCharSet @ 0x1C00E09EC
 * Callers:
 *     NtGdiGetCharSet @ 0x1C00E0850 (NtGdiGetCharSet.c)
 *     GreGetTextCharsetInfo @ 0x1C00E08F4 (GreGetTextCharsetInfo.c)
 * Callees:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0031E20 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0089D10 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  DC *v1; // rdx
  unsigned int v2; // ebx
  struct LFONT *v4; // rbx
  struct LFONT *v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h] BYREF
  struct _POINTL v7; // [rsp+40h] [rbp-20h] BYREF
  DC *v8; // [rsp+48h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]
  unsigned int v11; // [rsp+78h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  XDCOBJ::vLock(&v8, a1);
  v1 = v8;
  if ( v8 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v8 + 10) + 8LL) & 0x10) == 0 )
    {
LABEL_3:
      v2 = *(_DWORD *)(*((_QWORD *)v1 + 10) + 64LL);
      goto LABEL_4;
    }
    v13 = *((_QWORD *)v8 + 6);
    if ( (*(_DWORD *)(v13 + 32) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v13);
      v1 = v8;
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v5, *(struct HLFONT__ **)(*((_QWORD *)v1 + 10) + 176LL), (struct PDEVOBJ *)&v13);
    v4 = v5;
    if ( v5 )
    {
      if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v6 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v5, (struct XDCOBJ *)&v8, &v12, (__int64)&v7, &v11, 0);
        SEMOBJ::vUnlock((SEMOBJ *)&v6);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v4);
        v1 = v8;
        goto LABEL_3;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v4);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  v1 = v8;
  v2 = 0x10000;
LABEL_4:
  if ( v1 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v8);
    _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
  }
  return v2;
}
