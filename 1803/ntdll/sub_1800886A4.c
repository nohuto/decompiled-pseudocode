/*
 * XREFs of sub_1800886A4 @ 0x1800886A4
 * Callers:
 *     sub_18007A164 @ 0x18007A164 (sub_18007A164.c)
 *     sub_18007A318 @ 0x18007A318 (sub_18007A318.c)
 *     sub_18007D594 @ 0x18007D594 (sub_18007D594.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 *     sub_1800CC088 @ 0x1800CC088 (sub_1800CC088.c)
 *     sub_1800CC2EC @ 0x1800CC2EC (sub_1800CC2EC.c)
 *     sub_1801022B8 @ 0x1801022B8 (sub_1801022B8.c)
 *     sub_18010230C @ 0x18010230C (sub_18010230C.c)
 *     sub_180102360 @ 0x180102360 (sub_180102360.c)
 *     sub_180102438 @ 0x180102438 (sub_180102438.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x180007440 (EtwEventWriteTransfer.c)
 */

__int64 __fastcall sub_1800886A4(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v7; // ecx
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = ((_DWORD)a2 - (unsigned int)&unk_1801236D0) | (*a2 << 24);
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v10 = *(_QWORD *)(a2 + 3);
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  v7 = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = a2 + 11;
  *(_DWORD *)(a6 + 8) = v7;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *(unsigned __int16 *)(a2 + 11);
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), (int)v9, 0LL, 0LL, a5, a6);
}
