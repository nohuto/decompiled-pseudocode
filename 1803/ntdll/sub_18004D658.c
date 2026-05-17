/*
 * XREFs of sub_18004D658 @ 0x18004D658
 * Callers:
 *     RtlAddAtomToAtomTable_0 @ 0x18004D0E8 (RtlAddAtomToAtomTable_0.c)
 * Callees:
 *     RtlAllocateHandle @ 0x18004D6F0 (RtlAllocateHandle.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

char __fastcall sub_18004D658(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  __int16 v5; // ax
  char result; // al
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 16;
  v4 = (_QWORD *)RtlAllocateHandle(a1 + 16, &v7);
  if ( v4 )
  {
    v5 = v7;
    if ( v7 <= 0xFFFF && v7 + 49152 >= v7 && v7 + 49152 <= 0xFFFF )
    {
      *(_WORD *)(a2 + 8) = v7;
      *(_WORD *)(a2 + 10) = v5 - 0x4000;
      result = 1;
      v4[1] = a2;
      *(_DWORD *)v4 = 1;
      return result;
    }
    memset(v4, 0, *(unsigned int *)(v2 + 4));
    *v4 = *(_QWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 16) = v4;
  }
  return 0;
}
