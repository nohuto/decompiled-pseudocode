/*
 * XREFs of PopHiberPeekRangeTable @ 0x1404860E4
 * Callers:
 *     ConsumerPeekAndConsumeBuffer @ 0x140473D5C (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     PopReadProducerConsumerBuffer @ 0x140486494 (PopReadProducerConsumerBuffer.c)
 */

__int64 __fastcall PopHiberPeekRangeTable(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rax
  char v5; // [rsp+28h] [rbp-10h]
  char v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v3 = (_DWORD *)PopReadProducerConsumerBuffer(a1, a2, &v6, qword_1403AA218, a3, v5);
  return ((*v3 >> 8) & 0x3FFFFF) + 8 * (unsigned int)(unsigned __int8)*v3 + 4;
}
