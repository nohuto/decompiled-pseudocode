/*
 * XREFs of ?GetCopyIndexes@AtomicObjState@util@@QEAA_NAEAUatomicStorage@12@AEAI1@Z @ 0x14005BA94
 * Callers:
 *     ?_AcquireReadWrite@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@IEAAJAEAPEAUClockingSection@CSpatialCrossProcessBaseEndpoint@@@Z @ 0x14005D18C (-_AcquireReadWrite@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 */

char __fastcall util::AtomicObjState::GetCopyIndexes(
        util::AtomicObjState *this,
        struct util::AtomicObjState::atomicStorage *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned __int32 v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // ecx
  int v8; // [rsp+0h] [rbp-20h]
  __int16 v9; // [rsp+4h] [rbp-1Ch]
  int v10; // [rsp+8h] [rbp-18h]
  __int16 v11; // [rsp+Ch] [rbp-14h]

  v8 = 131330;
  v9 = 1;
  v10 = 33554945;
  v11 = 256;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)a2, 0, 0);
  v5 = v4 & 0xFFFFFFF7;
  *a3 = *((unsigned __int8 *)&v8 + v5);
  if ( (v4 & 8) != 0 )
    v6 = *((unsigned __int8 *)&v10 + (unsigned int)v5);
  else
    v6 = v4 >> 1;
  *a4 = v6;
  return 1;
}
