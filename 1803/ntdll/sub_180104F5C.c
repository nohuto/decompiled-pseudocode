/*
 * XREFs of sub_180104F5C @ 0x180104F5C
 * Callers:
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 * Callees:
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     sub_1801044E0 @ 0x1801044E0 (sub_1801044E0.c)
 *     sub_1801050FC @ 0x1801050FC (sub_1801050FC.c)
 *     sub_18010537C @ 0x18010537C (sub_18010537C.c)
 */

__int64 __fastcall sub_180104F5C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v5; // r15
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // r13d
  unsigned __int16 HeapData_high; // si
  __int64 v12; // rbp
  __int16 v13; // ax
  __int16 v14; // ax
  int v15; // eax
  int v16; // esi
  unsigned int v17; // ebp
  int v18; // eax
  __int64 v19; // r10
  unsigned __int64 v21[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+20h]

  v5 = NtCurrentTeb();
  v21[0] = 2 * (unsigned int)*(unsigned __int16 *)(a3 + 34);
  v21[1] = a3 + 48;
  v22 = byte_180123370[*(unsigned __int8 *)(a2 + 1)];
  v8 = *(_DWORD *)(a3 + 40) ^ ((unsigned int)a3 >> 12);
  v9 = (unsigned __int16)(qword_18015A448 ^ v8);
  v10 = ((unsigned int)qword_18015A448 ^ v8) >> 16;
  HeapData_high = (unsigned __int8)HIWORD(v5->HeapData);
  v12 = a4 < v9 ? 3LL : 1LL;
  if ( HeapData_high == HIBYTE(HIWORD(v5->HeapData)) )
  {
    v13 = sub_18001EBF0();
    v14 = (v13 << 8) | (unsigned __int8)(v13 + 1);
  }
  else
  {
    v14 = (unsigned __int8)(HIWORD(v5->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v5->HeapData);
  }
  HIWORD(v5->HeapData) = v14;
  v15 = sub_1801044E0(v21, *(unsigned __int16 *)(a3 + 36), byte_18015A460[HeapData_high], v22, v12);
  *(_WORD *)(a3 + 36) = v15;
  v16 = v15;
  v17 = v10 + v15 * v9;
  if ( *(_BYTE *)(a3 + 45) <= 1u || (v18 = sub_1801050FC(a1, a3, v17), v19 = 0LL, v18 >= 0) )
  {
    v19 = a3 + v17;
    if ( a4 < v9 )
      sub_18010537C(a3, a3 + v17, v9 - a4);
    v16 = -1;
  }
  if ( v16 != -1 )
    _InterlockedAnd64(
      (volatile signed __int64 *)(a3 + 8 * ((unsigned __int64)(unsigned int)(2 * v16) >> 6) + 48),
      ~(3LL << ((2 * v16) & 0x3F)));
  return v19;
}
