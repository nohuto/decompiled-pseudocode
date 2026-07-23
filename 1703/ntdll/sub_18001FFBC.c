/*
 * XREFs of sub_18001FFBC @ 0x18001FFBC
 * Callers:
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 * Callees:
 *     sub_18001FA18 @ 0x18001FA18 (sub_18001FA18.c)
 *     sub_18001FC1C @ 0x18001FC1C (sub_18001FC1C.c)
 *     sub_1800200FC @ 0x1800200FC (sub_1800200FC.c)
 */

__int64 __fastcall sub_18001FFBC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v5; // rcx
  __int64 v8; // rax
  __int64 HeapData_high; // rdx
  int v10; // r9d
  unsigned int v11; // edi
  int v12; // r8d
  int v13; // esi
  unsigned int v14; // ebp
  int v15; // eax
  __int64 v16; // r10
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+88h] [rbp+20h]

  v5 = NtCurrentTeb();
  v18[0] = 2LL * *(unsigned __int16 *)(a3 + 34);
  v18[1] = a3 + 48;
  v8 = *(unsigned __int8 *)(a2 + 1);
  HeapData_high = HIWORD(v5->HeapData);
  v10 = byte_180123520[v8];
  v11 = (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(a3 + 40) ^ ((unsigned int)a3 >> 12));
  v19 = qword_18015BFE8 ^ *(_DWORD *)(a3 + 40) ^ ((unsigned int)a3 >> 12);
  v12 = *((unsigned __int8 *)qword_180159900 + HeapData_high);
  HIWORD(v5->HeapData) = (unsigned __int8)(HeapData_high + 1);
  v13 = sub_1800200FC((unsigned int)v18, *(unsigned __int16 *)(a3 + 36), v12, v10, a4 < v11 ? 3LL : 1LL);
  *(_WORD *)(a3 + 36) = v13;
  v14 = HIWORD(v19) + v13 * v11;
  if ( *(_BYTE *)(a3 + 45) <= 1u || (v15 = sub_18001FA18(a1, a3, v14), v16 = 0LL, v15 >= 0) )
  {
    v16 = a3 + v14;
    if ( a4 < v11 )
      sub_18001FC1C(a3, a3 + v14, v11 - a4);
    v13 = -1;
  }
  if ( v13 != -1 )
    _InterlockedAnd64(
      (volatile signed __int64 *)(a3 + 8 * ((unsigned __int64)(unsigned int)(2 * v13) >> 6) + 48),
      ~(3LL << ((2 * v13) & 0x3F)));
  return v16;
}
