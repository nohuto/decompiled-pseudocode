/*
 * XREFs of GreGetRealizationInfo @ 0x1C013EABC
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C008A5F0 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C008ACCC (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  DC *v7[2]; // [rsp+20h] [rbp-10h] BYREF
  struct _FD_XFORM *v8; // [rsp+50h] [rbp+20h] BYREF

  RealizationInfo = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock(v7, a1);
  if ( v7[0] )
  {
    v8 = 0LL;
    v4 = RFONTOBJ::bInit(&v8, (struct XDCOBJ *)v7, 0, 2u);
    v5 = v8;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v8[33].eXX);
    if ( v5 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v8, a2);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v7);
    _InterlockedDecrement((volatile signed __int32 *)v7[0] + 3);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  return RealizationInfo;
}
