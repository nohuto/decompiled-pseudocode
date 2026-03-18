/*
 * XREFs of RtlpHpVaMgrStart @ 0x140297520
 * Callers:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1402968EC (RtlpHpVaMgrCtxAllocatorReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrStart(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  int v5; // r11d
  char v7; // al
  char v8; // cl
  char v9; // cl
  __int64 result; // rax

  v5 = *(_DWORD *)(a3 + 4);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a3 + 16);
  *(_BYTE *)(a1 + 44) = a5;
  *(_BYTE *)(a1 + 45) = *(_BYTE *)(a3 + 8);
  v7 = *(_BYTE *)(a1 + 46) & 0xFE;
  *(_WORD *)(a1 + 40) = a4 >> 20;
  *(_WORD *)(a1 + 42) = 1;
  v8 = *(_BYTE *)(a3 + 12) & 1;
  *(_QWORD *)(a1 + 24) = a2;
  v9 = (v5 != 0) | v7 & 0xF1 | (2 * (v5 & 3 | (4 * v8)));
  result = 0LL;
  *(_BYTE *)(a1 + 46) = v9;
  return result;
}
