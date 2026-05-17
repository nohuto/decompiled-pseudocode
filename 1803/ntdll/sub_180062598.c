/*
 * XREFs of sub_180062598 @ 0x180062598
 * Callers:
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005E81C @ 0x18005E81C (sub_18005E81C.c)
 *     sub_18005E9A0 @ 0x18005E9A0 (sub_18005E9A0.c)
 *     sub_1800626D0 @ 0x1800626D0 (sub_1800626D0.c)
 *     sub_180063040 @ 0x180063040 (sub_180063040.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180105C3C @ 0x180105C3C (sub_180105C3C.c)
 */

signed __int64 __fastcall sub_180062598(__int64 a1, void **a2, size_t *a3)
{
  size_t v6; // rdi
  _BYTE *v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  bool v13; // cl
  __int64 v14; // rax
  size_t v15; // rax
  unsigned __int64 v16; // rdi
  signed __int64 result; // rax
  __int64 v18; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)sub_1800626D0(a1 + 16, ((unsigned __int64)*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = (unsigned __int64)v7;
  if ( !v7 )
  {
    v18 = sub_180105C3C(
            a1 + 16,
            ((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
            ~(((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    result = ZwFreeVirtualMemory(-1LL, a2, a3, 0x8000LL);
    *(_QWORD *)(v18 + 24) -= *a3 >> 20;
    return result;
  }
  v9 = 48LL * (unsigned __int8)v7[1] + a1 + 112;
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
    return sub_180063040(v9, v8);
  }
  if ( (*(_BYTE *)(v9 + 46) & 6u) >= 4 )
    memset(*a2, 0, *a3);
  else
    ZwFreeVirtualMemory(-1LL, a2, a3, 0x4000LL);
  LOBYTE(v10) = *(_BYTE *)v8;
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    v16 = v8;
    do
      v8 -= 32LL;
    while ( (*(_BYTE *)v8 & 2) != 0 );
  }
  else
  {
    v13 = (v10 & 4) != 0;
    LOBYTE(v10) = (*(_BYTE *)(v9 + 46) >> 4) & ~((unsigned __int8)v10 >> 2);
    if ( (v10 & 1) == 0 )
    {
      v14 = v13 ? *(_QWORD *)(v8 + 24) : *(unsigned __int16 *)(v8 + 24);
      if ( v6 != v14 )
        __int2c();
    }
    if ( v13 )
      v15 = *(_QWORD *)(v8 + 24);
    else
      v15 = *(unsigned __int16 *)(v8 + 24);
    if ( v6 < v15 )
      v16 = v8 + 32 * v6;
    else
      v16 = 0LL;
  }
  RtlAcquireSRWLockExclusive(v9, v10, v11, v12);
  if ( v16 )
    sub_18005E9A0(v9, v8, (__int64)(v16 - v8) >> 5);
  v8 = sub_18005E81C(v9);
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v9);
  if ( v8 )
    return sub_180063040(v9, v8);
  return result;
}
