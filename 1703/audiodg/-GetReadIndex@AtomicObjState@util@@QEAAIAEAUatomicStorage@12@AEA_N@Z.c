/*
 * XREFs of ?GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z @ 0x14005C2DC
 * Callers:
 *     ?_AcquireRead@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@IEAAJAEAPEBUClockingSection@CSpatialCrossProcessBaseEndpoint@@AEA_N@Z @ 0x14005D130 (-_AcquireRead@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicObj@UC.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 */

__int64 __fastcall util::AtomicObjState::GetReadIndex(
        util::AtomicObjState *this,
        struct util::AtomicObjState::atomicStorage *a2,
        bool *a3)
{
  signed __int32 v4; // r10d
  bool v5; // r9
  signed __int32 v6; // edx
  bool v7; // zf
  signed __int32 v8; // eax
  int v10; // [rsp+0h] [rbp-18h]
  __int16 v11; // [rsp+4h] [rbp-14h]

  v4 = _InterlockedCompareExchange((volatile signed __int32 *)a2, 0, 0);
  v5 = v4 != *(_DWORD *)this;
  *a3 = v5;
  if ( v5 )
  {
    v10 = 83887106;
    v11 = 769;
    do
    {
      v6 = *((unsigned __int8 *)&v10 + (v4 & 0xFFFFFFF7));
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)a2, v6, v4);
      v7 = v4 == v8;
      v4 = v8;
    }
    while ( !v7 );
    *(_DWORD *)this = v6;
  }
  return *(_DWORD *)this >> 1;
}
