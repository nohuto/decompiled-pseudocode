/*
 * XREFs of sub_18000E614 @ 0x18000E614
 * Callers:
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001C5E0 @ 0x18001C5E0 (sub_18001C5E0.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180089248 @ 0x180089248 (sub_180089248.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     sub_18000E97C @ 0x18000E97C (sub_18000E97C.c)
 */

__int64 __fastcall sub_18000E614(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
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
  if ( !v12 || (LOBYTE(a4) = a3, result = sub_18000E97C(a1, v12, a6, a4), (int)result <= 0) )
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
