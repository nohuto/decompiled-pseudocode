/*
 * XREFs of GreGetRealizationInfo @ 0x1C0144A44
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C0030D10 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C00366C0 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  DC *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FD_XFORM *v10; // [rsp+50h] [rbp+18h] BYREF

  RealizationInfo = 0;
  v9[1] = 0LL;
  XDCOBJ::vLock(v9, a1);
  if ( v9[0] )
  {
    v10 = 0LL;
    v4 = RFONTOBJ::bInit(&v10, (struct XDCOBJ *)v9, 0, 2u);
    v5 = v10;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v10[33].eXX);
    if ( v5 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v10, a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10, v6, v7);
  }
  return RealizationInfo;
}
