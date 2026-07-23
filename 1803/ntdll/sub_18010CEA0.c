/*
 * XREFs of sub_18010CEA0 @ 0x18010CEA0
 * Callers:
 *     sub_1800FD780 @ 0x1800FD780 (sub_1800FD780.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010CEA0(__int64 a1, __int64 (__fastcall *a2)(_DWORD *, __int64, __int64), __int64 a3)
{
  int v6; // ebx
  _QWORD *v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rcx
  _BYTE *i; // rdx
  _QWORD *v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rcx
  _BYTE *j; // rdx
  unsigned int v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-28h]
  _DWORD v20[4]; // [rsp+40h] [rbp-20h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  SRWLock = (PRTL_SRWLOCK)(a1 + 40);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v20[0] = *(_DWORD *)a1;
  v20[1] = *(_DWORD *)(a1 + 16);
  v20[2] = 524289;
  v6 = a2(v20, 12LL, a3);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v8 = v7;
    if ( v7 )
    {
      v9 = *v7;
      if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v9 = *v7;
      if ( (v9 & 1) == 0 )
        goto LABEL_24;
    }
    for ( i = v7 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
      {
LABEL_10:
        v9 = 0LL;
        goto LABEL_11;
      }
      if ( (*i & 1) == 0 )
        break;
    }
LABEL_30:
    v8 = *(__int64 **)i;
    v7 = i;
    v9 = *(_QWORD *)i;
LABEL_11:
    while ( v9 )
    {
      v17 = v9;
      v16 = *(_DWORD *)(v9 + 16);
      v6 = ((__int64 (__fastcall *)(unsigned int *, __int64, __int64, _QWORD))a2)(&v16, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_37;
      v6 = a2(&v17, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_37;
      v6 = a2((_DWORD *)(v17 + 24), 8 * (unsigned int)*(unsigned __int8 *)(v17 + 19), a3);
      if ( v6 < 0 )
        goto LABEL_37;
      if ( !v8 )
        goto LABEL_25;
      v9 = *v8;
      if ( (*v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v9 = *v8;
      if ( (v9 & 1) != 0 )
      {
LABEL_25:
        for ( i = v7 + 1;
              (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              i += 8 )
        {
          if ( (*i & 1) == 0 )
            goto LABEL_30;
        }
        goto LABEL_10;
      }
LABEL_24:
      v8 = (__int64 *)v9;
    }
    v11 = *(_QWORD **)(a1 + 24);
    v12 = v11;
    if ( v11 )
    {
      v13 = *v11;
      if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v13 = *v11;
      if ( (v13 & 1) == 0 )
        goto LABEL_45;
    }
    for ( j = v11 + 1; ; j += 8 )
    {
      if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
      {
LABEL_34:
        v13 = 0LL;
        goto LABEL_35;
      }
      if ( (*j & 1) == 0 )
        break;
    }
LABEL_51:
    v12 = *(__int64 **)j;
    v11 = j;
    v13 = *(_QWORD *)j;
LABEL_35:
    while ( v13 )
    {
      v18 = v13;
      v16 = *(_DWORD *)(v13 + 16);
      v6 = ((__int64 (__fastcall *)(unsigned int *, __int64, __int64, _QWORD))a2)(&v16, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_37;
      v6 = a2(&v18, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_37;
      v6 = a2((_DWORD *)(v18 + 24), (HIBYTE(v16) + 7) & 0xFFFFFFF8, a3);
      if ( v6 < 0 )
        goto LABEL_37;
      if ( !v12 )
        goto LABEL_46;
      v13 = *v12;
      if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v13 = *v12;
      if ( (v13 & 1) != 0 )
      {
LABEL_46:
        for ( j = v11 + 1;
              (unsigned __int64)j < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              j += 8 )
        {
          if ( (*j & 1) == 0 )
            goto LABEL_51;
        }
        goto LABEL_34;
      }
LABEL_45:
      v12 = (__int64 *)v13;
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_37:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  RtlReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v6;
}
