/*
 * XREFs of sub_18010A0AC @ 0x18010A0AC
 * Callers:
 *     sub_1800FEF2C @ 0x1800FEF2C (sub_1800FEF2C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010A0AC(__int64 a1, __int64 (__fastcall *a2)(_DWORD *, __int64, __int64), __int64 a3)
{
  int v6; // esi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  _BYTE *i; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  _BYTE *j; // rdx
  _QWORD *v14; // rax
  _DWORD v16[4]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-40h]
  _QWORD *v18; // [rsp+38h] [rbp-38h]
  _QWORD *v19; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-28h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+50h] [rbp-20h]
  _DWORD v22[4]; // [rsp+58h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  SRWLock = (PRTL_SRWLOCK)(a1 + 40);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v22[0] = *(_DWORD *)a1;
  v22[1] = *(_DWORD *)(a1 + 16);
  v22[2] = 524289;
  v6 = a2(v22, 12LL, a3);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v18 = v7;
    v8 = v7;
    v17 = v7;
    if ( !v7 )
      goto LABEL_7;
    if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v7 = v18;
      v8 = v17;
    }
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
LABEL_7:
      for ( i = v7 + 1; ; i += 8 )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
          goto LABEL_11;
        if ( (*i & 1) == 0 )
          break;
      }
LABEL_31:
      v8 = *(_QWORD **)i;
      v7 = i;
      v18 = i;
    }
    else
    {
      v8 = (_QWORD *)*v7;
    }
    v17 = v8;
    v10 = v8;
    while ( v10 )
    {
      v19 = v10;
      v16[0] = *((_DWORD *)v10 + 4);
      v6 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _QWORD))a2)(v16, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_40;
      v6 = a2(&v19, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_40;
      v6 = a2((_DWORD *)v19 + 6, 8LL * *((unsigned __int8 *)v19 + 19), a3);
      if ( v6 < 0 )
        goto LABEL_40;
      if ( !v8 )
        goto LABEL_26;
      if ( (*v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v7 = v18;
        v8 = v17;
      }
      v10 = (_QWORD *)*v8;
      if ( (*v8 & 1) != 0 )
      {
LABEL_26:
        for ( i = v7 + 1;
              (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              i += 8 )
        {
          if ( (*i & 1) == 0 )
            goto LABEL_31;
        }
LABEL_11:
        v10 = 0LL;
      }
      else
      {
        v8 = (_QWORD *)*v8;
        v17 = v10;
      }
    }
    v11 = *(_QWORD **)(a1 + 24);
    v18 = v11;
    v12 = v11;
    v17 = v11;
    if ( !v11 )
      goto LABEL_33;
    if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v11 = v18;
      v12 = v17;
    }
    if ( (*(_BYTE *)v11 & 1) != 0 )
    {
LABEL_33:
      for ( j = v11 + 1; ; j += 8 )
      {
        if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
          goto LABEL_37;
        if ( (*j & 1) == 0 )
          break;
      }
LABEL_54:
      v12 = *(_QWORD **)j;
      v11 = j;
      v18 = j;
    }
    else
    {
      v12 = (_QWORD *)*v11;
    }
    v17 = v12;
    v14 = v12;
    while ( v14 )
    {
      v20 = v14;
      v16[0] = *((_DWORD *)v14 + 4);
      v6 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _QWORD))a2)(v16, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_40;
      v6 = a2(&v20, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_40;
      v6 = a2((_DWORD *)v20 + 6, (HIBYTE(v16[0]) + 7) & 0xFFFFFFF8, a3);
      if ( v6 < 0 )
        goto LABEL_40;
      if ( !v12 )
        goto LABEL_49;
      if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v11 = v18;
        v12 = v17;
      }
      v14 = (_QWORD *)*v12;
      if ( (*v12 & 1) != 0 )
      {
LABEL_49:
        for ( j = v11 + 1;
              (unsigned __int64)j < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              j += 8 )
        {
          if ( (*j & 1) == 0 )
            goto LABEL_54;
        }
LABEL_37:
        v14 = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v12;
        v17 = v14;
      }
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_40:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  RtlReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v6;
}
