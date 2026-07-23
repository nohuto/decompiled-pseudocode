/*
 * XREFs of sub_1800F94C0 @ 0x1800F94C0
 * Callers:
 *     sub_1800F8F30 @ 0x1800F8F30 (sub_1800F8F30.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800F93DC @ 0x1800F93DC (sub_1800F93DC.c)
 *     sub_1800F948C @ 0x1800F948C (sub_1800F948C.c)
 *     sub_1800F94A8 @ 0x1800F94A8 (sub_1800F94A8.c)
 */

__int64 __fastcall sub_1800F94C0(__int64 a1, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // rbp
  __int64 v7; // rbx
  _RTL_SRWLOCK *v8; // r14
  __int64 i; // rbx
  __int64 v10; // rax
  __int16 v11; // cx
  __int64 v12; // rcx
  __int16 v13; // cx

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v7 = 2LL * (a3 % *(_DWORD *)(a1 + 720));
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v8 = (_RTL_SRWLOCK *)(a1 + 8 * v7);
  sub_1800F948C(v8 + 92);
  for ( i = *(_QWORD *)(a1 + 8 * v7 + 728); i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v4) == v4 )
    {
      goto LABEL_8;
    }
  }
  v10 = sub_1800F93DC(a1, *(_WORD *)(a2 + 14));
  i = v10;
  if ( !v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_11;
  }
  memmove((void *)(v10 + 16), (const void *)(a2 + 16), v4);
  v11 = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  *(_WORD *)(i + 14) = v11;
  v12 = 16LL * (a3 % *(_DWORD *)(a1 + 720));
  *(_QWORD *)i = *(_QWORD *)(v12 + a1 + 728);
  *(_QWORD *)(v12 + a1 + 728) = i;
LABEL_8:
  v13 = *(_WORD *)(i + 8);
  if ( (v13 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v13 ^ (v13 ^ (v13 + 1)) & 0x7FF;
LABEL_11:
  sub_1800F94A8(v8 + 92);
  return i;
}
