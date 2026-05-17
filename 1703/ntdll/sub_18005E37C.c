/*
 * XREFs of sub_18005E37C @ 0x18005E37C
 * Callers:
 *     sub_18005E120 @ 0x18005E120 (sub_18005E120.c)
 *     EtwEventWriteTransfer @ 0x18005F4F0 (EtwEventWriteTransfer.c)
 *     EtwEventWriteString @ 0x180104440 (EtwEventWriteString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E37C(int a1, __int64 a2)
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
    result = qword_1801593C0;
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v4[5] + 8));
  }
  return result;
}
