/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x1404A05A0
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1406F09E4 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1406F0CB4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1406F2EB8 (CmpKeyNodeNeedsAccessBitUpdate.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 24) + 8LL))(
         *(_QWORD *)(a1 + 24),
         *(unsigned int *)(a1 + 32),
         a2);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = v6;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(v7, v6, *(unsigned int *)(a1 + 32));
  }
  else if ( (unsigned __int8)CmpKeyNodeNeedsAccessBitUpdate(v7, v6) )
  {
    (*(void (__fastcall **)(__int64, __int64))(v10 + 16))(v10, a2);
    ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 24) + 72LL, 0LL);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 24) + 8LL))(
           *(_QWORD *)(a1 + 24),
           *(unsigned int *)(a1 + 32),
           a2);
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 24), v8, *(unsigned int *)(a1 + 32));
    v11 = *(_QWORD *)(a1 + 24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v11 + 72));
    KeAbPostRelease(v11 + 72);
  }
  return v8;
}
