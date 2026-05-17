/*
 * XREFs of sub_1800F6FC4 @ 0x1800F6FC4
 * Callers:
 *     sub_1800F6A30 @ 0x1800F6A30 (sub_1800F6A30.c)
 * Callees:
 *     RtlCompareMemory @ 0x18009F080 (RtlCompareMemory.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800F6EE0 @ 0x1800F6EE0 (sub_1800F6EE0.c)
 *     sub_1800F6F90 @ 0x1800F6F90 (sub_1800F6F90.c)
 *     sub_1800F6FAC @ 0x1800F6FAC (sub_1800F6FAC.c)
 */

__int64 __fastcall sub_1800F6FC4(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v6; // edx
  SIZE_T v7; // rbp
  unsigned int v8; // r15d
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 i; // rbx
  __int64 v13; // rax
  __int16 v14; // cx
  __int64 v15; // rcx
  __int16 v16; // cx

  v4 = *(unsigned __int16 *)(a2 + 14);
  v6 = (unsigned int)a3 % *(_DWORD *)(a1 + 720);
  v7 = 8 * v4;
  v8 = (unsigned int)a3;
  v10 = 2LL * v6;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v11 = a1 + 16LL * v6;
  sub_1800F6F90(v11 + 736, v6, a3, a4);
  for ( i = *(_QWORD *)(a1 + 8 * v10 + 728); i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v7) == v7 )
    {
      goto LABEL_8;
    }
  }
  v13 = sub_1800F6EE0(a1, *(_WORD *)(a2 + 14));
  i = v13;
  if ( !v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_11;
  }
  memmove((void *)(v13 + 16), (const void *)(a2 + 16), v7);
  v14 = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  *(_WORD *)(i + 14) = v14;
  v15 = 16LL * (v8 % *(_DWORD *)(a1 + 720));
  *(_QWORD *)i = *(_QWORD *)(v15 + a1 + 728);
  *(_QWORD *)(v15 + a1 + 728) = i;
LABEL_8:
  v16 = *(_WORD *)(i + 8);
  if ( (v16 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v16 ^ (v16 ^ (v16 + 1)) & 0x7FF;
LABEL_11:
  sub_1800F6FAC((volatile signed __int64 *)(v11 + 736));
  return i;
}
