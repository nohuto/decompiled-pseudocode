/*
 * XREFs of KiSendHeteroRescheduleIntRequest @ 0x1402043D4
 * Callers:
 *     KiIdleSchedule @ 0x140042E90 (KiIdleSchedule.c)
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140204470 (KiSendHeteroRescheduleIntRequestHelper.c)
 */

__int64 __fastcall KiSendHeteroRescheduleIntRequest(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_QWORD *)a1[24];
  result = a1[3147];
  if ( (result & v1[1]) != 0 )
  {
    v6 = 0LL;
    v5 = -1;
    v3 = a1[25];
    if ( (v3 & *v1) != 0 && (v3 & v1[26]) != 0 )
    {
      result = KiSendHeteroRescheduleIntRequestHelper(v1[10] & v1[32] & ~v1[2], &v6, &v5);
      if ( (_BYTE)result )
      {
        result = KiSendHeteroRescheduleIntRequestHelper(1LL << v5, 0LL, 0LL);
        if ( !(_BYTE)result )
        {
          v4 = v6;
          _bittestandcomplement64(&v4, v5);
          return KiSendHeteroRescheduleIntRequestHelper(v4, 0LL, 0LL);
        }
      }
    }
  }
  return result;
}
