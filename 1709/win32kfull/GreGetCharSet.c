/*
 * XREFs of GreGetCharSet @ 0x1C00B0B68
 * Callers:
 *     GreGetTextCharsetInfo @ 0x1C00B0A64 (GreGetTextCharsetInfo.c)
 *     NtGdiGetCharSet @ 0x1C00B0DD0 (NtGdiGetCharSet.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C003E690 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00AF3B4 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00AF470 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B0C98 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  DC *v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rdi
  struct LFONT *v5; // rbx
  struct LFONT *v6; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTL v7; // [rsp+38h] [rbp-18h] BYREF
  DC *v8; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+48h] [rbp-8h]
  unsigned int v10; // [rsp+4Ch] [rbp-4h]
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+38h] BYREF

  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  XDCOBJ::vLock(&v8, a1);
  v1 = v8;
  if ( !v8 )
  {
    EngSetLastError(6u);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v8 + 10) + 8LL) & 0x10) != 0 )
  {
    v11 = *((_QWORD *)v8 + 6);
    if ( (*(_DWORD *)(v11 + 32) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v11);
      v1 = v8;
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, *(struct HLFONT__ **)(*((_QWORD *)v1 + 10) + 176LL), (struct PDEVOBJ *)&v11);
    v5 = v6;
    if ( v6 )
    {
      if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v6, (struct XDCOBJ *)&v8, &v13, &v7, &v12, 0);
        if ( ghsemPublicPFT )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
          GreReleaseSemaphoreInternal(ghsemPublicPFT);
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v5);
        v1 = v8;
        goto LABEL_3;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v5);
    }
LABEL_17:
    v1 = v8;
    v2 = 0x10000;
    goto LABEL_4;
  }
LABEL_3:
  v2 = *(_DWORD *)(*((_QWORD *)v1 + 10) + 64LL);
LABEL_4:
  if ( v1 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v8);
    LODWORD(v11) = 0;
    v3 = *(_QWORD *)v8;
    HmgDecrementExclusiveReferenceCountEx(v8, v10, &v11);
    if ( (_DWORD)v11 )
      bDeleteDCInternalEx(v3, 0LL);
  }
  return v2;
}
