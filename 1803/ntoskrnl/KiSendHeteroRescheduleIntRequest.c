/*
 * XREFs of KiSendHeteroRescheduleIntRequest @ 0x1402487EC
 * Callers:
 *     KiIdleSchedule @ 0x1400605A0 (KiIdleSchedule.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KeTransitionProcessorParkState @ 0x14024BF2C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402488A8 (KiSendHeteroRescheduleIntRequestHelper.c)
 */

__int64 __fastcall KiSendHeteroRescheduleIntRequest(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int64 *)a1[24];
  result = a1[3115];
  if ( (result & v2[1]) != 0 )
  {
    v6 = 0LL;
    v5 = -1;
    v4 = a1[25];
    result = *v2;
    if ( (*v2 & v4) != 0 && (v2[26] & v4) != 0 )
    {
      result = KiSendHeteroRescheduleIntRequestHelper(v2[10] & ~v2[2] & v2[32], &v6, &v5, a1);
      if ( (_BYTE)result )
      {
        result = KiSendHeteroRescheduleIntRequestHelper(1LL << v5, 0LL, 0LL, a1);
        if ( !(_BYTE)result )
          return KiSendHeteroRescheduleIntRequestHelper(v6 ^ (1LL << v5), 0LL, 0LL, a1);
      }
    }
  }
  return result;
}
