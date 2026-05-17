/*
 * XREFs of sub_1800905E4 @ 0x1800905E4
 * Callers:
 *     sub_18005032C @ 0x18005032C (sub_18005032C.c)
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 *     sub_180089798 @ 0x180089798 (sub_180089798.c)
 *     sub_1800D65C8 @ 0x1800D65C8 (sub_1800D65C8.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18005F4F0 (EtwEventWriteTransfer.c)
 */

__int64 __fastcall sub_1800905E4(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v7; // ecx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v9) = ((_DWORD)a2 - (unsigned int)&unk_1801240B0) | (*a2 << 24);
  DWORD1(v9) = *(unsigned __int16 *)(a2 + 1);
  *((_QWORD *)&v9 + 1) = *(_QWORD *)(a2 + 3);
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  v7 = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = a2 + 11;
  *(_DWORD *)(a6 + 8) = v7;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *(unsigned __int16 *)(a2 + 11);
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), &v9, 0LL, 0LL, a5, a6);
}
