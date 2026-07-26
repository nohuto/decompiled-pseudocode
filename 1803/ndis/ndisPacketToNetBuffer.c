/*
 * XREFs of ndisPacketToNetBuffer @ 0x1C004E014
 * Callers:
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E1FC (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004EB14 (ndisXlateSendPacketArrayToNetBufferLists.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall ndisPacketToNetBuffer(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 **result; // rax
  int v5; // r9d
  __int64 *i; // r8

  v2 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 40) = 0;
  *(_QWORD *)(a2 + 32) = v2;
  v3 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 8) = v3;
  result = *(__int64 ***)(a1 + 8);
  v5 = *((_DWORD *)result + 10);
  for ( i = *result; i; i = (__int64 *)*i )
    v5 += *((_DWORD *)i + 10);
  *(_DWORD *)(a2 + 24) = v5;
  *(_DWORD *)(a1 + 4) = v5;
  return result;
}
