/*
 * XREFs of sub_18005C190 @ 0x18005C190
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18002AC78 @ 0x18002AC78 (sub_18002AC78.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_1800830C4 @ 0x1800830C4 (sub_1800830C4.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 * Callees:
 *     sub_18005C2AC @ 0x18005C2AC (sub_18005C2AC.c)
 */

__int64 __fastcall sub_18005C190(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 result; // rax

  v6 = a4;
  v7 = a5 - *(_DWORD *)(a2 + 24);
  v9 = 2 * v7;
  if ( !*(_DWORD *)(a2 + 12) )
    v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = v9;
  v11 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( a5 == *(_DWORD *)(a2 + 8) - 1 )
    ++*(_DWORD *)(a2 + 20);
  if ( !v12 || (LOBYTE(a4) = a3, result = sub_18005C2AC(a1, v12, a6, a4), (int)result <= 0) )
  {
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(result + 8 * v10) = v6;
  }
  if ( !v12 )
  {
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4 * ((unsigned __int64)v7 >> 5)) |= 1 << (v7 & 0x1F);
  }
  return result;
}
