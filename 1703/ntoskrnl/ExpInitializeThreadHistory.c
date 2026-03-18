/*
 * XREFs of ExpInitializeThreadHistory @ 0x14012A664
 * Callers:
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitializeThreadHistory(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 152) &= 0xFFFFFFF8;
  result = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  return result;
}
