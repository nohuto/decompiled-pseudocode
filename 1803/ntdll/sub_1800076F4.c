/*
 * XREFs of sub_1800076F4 @ 0x1800076F4
 * Callers:
 *     sub_180007480 @ 0x180007480 (sub_180007480.c)
 *     EtwEventWriteString @ 0x180106680 (EtwEventWriteString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800076F4(int a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  unsigned int *v4; // r10
  __int64 result; // rax

  v2 = 0;
  while ( v2 < *(_DWORD *)(a2 + 128) )
  {
    v3 = 32LL * v2;
    v4 = *(unsigned int **)(v3 + a2);
    if ( a1 )
      **(_DWORD **)(v3 + a2 + 8) = v4[12] | **(_DWORD **)(v3 + a2 + 8) & v4[13];
    ++v2;
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v3 + a2 + 16) + 12LL));
    result = qword_18015A420;
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v4[5] + 8));
  }
  return result;
}
