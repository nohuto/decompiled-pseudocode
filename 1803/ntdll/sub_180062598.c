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

void __fastcall sub_180062598(__int64 a1, PVOID *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int8 v10; // dl
  __int64 v11; // rax
  ULONG_PTR v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)sub_1800626D0(a1 + 16, ((unsigned __int64)*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    v14 = sub_180105C3C(
            a1 + 16,
            ((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
            ~(((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, 0x8000u);
    *(_QWORD *)(v14 + 24) -= *a3 >> 20;
    return;
  }
  v9 = 48LL * (unsigned __int8)v7[1] + a1 + 112;
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
LABEL_20:
    sub_180063040(v9, v8);
    return;
  }
  if ( (*(_BYTE *)(v9 + 46) & 6u) >= 4 )
    memset(*a2, 0, *a3);
  else
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, 0x4000u);
  v10 = *(_BYTE *)v8;
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    v13 = v8;
    do
      v8 -= 32LL;
    while ( (*(_BYTE *)v8 & 2) != 0 );
  }
  else
  {
    if ( ((*(_BYTE *)(v9 + 46) >> 4) & (unsigned __int8)~(v10 >> 2) & 1) == 0 )
    {
      v11 = (v10 & 4) != 0 ? *(_QWORD *)(v8 + 24) : *(unsigned __int16 *)(v8 + 24);
      if ( v6 != v11 )
        __int2c();
    }
    if ( (v10 & 4) != 0 )
      v12 = *(_QWORD *)(v8 + 24);
    else
      v12 = *(unsigned __int16 *)(v8 + 24);
    if ( v6 < v12 )
      v13 = v8 + 32 * v6;
    else
      v13 = 0LL;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v9);
  if ( v13 )
    sub_18005E9A0(v9, v8, (v13 - v8) >> 5);
  v8 = sub_18005E81C(v9);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v9);
  if ( v8 )
    goto LABEL_20;
}
