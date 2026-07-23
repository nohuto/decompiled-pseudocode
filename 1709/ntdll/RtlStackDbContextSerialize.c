/*
 * XREFs of RtlStackDbContextSerialize @ 0x18010CF2C
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x180100AE0 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(_DWORD *, __int64, __int64),
        __int64 a3)
{
  int v6; // edi
  _QWORD **v7; // rsi
  _QWORD *v8; // rbx
  _BYTE *i; // rdx
  _QWORD *v10; // rax
  _QWORD **v11; // rsi
  _QWORD *v12; // rbx
  _BYTE *j; // rdx
  _QWORD *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v18; // [rsp+30h] [rbp-30h] BYREF
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
    v7 = *(_QWORD ***)(a1 + 8);
    v8 = v7;
    if ( !v7 || (*(_BYTE *)v7 & 1) != 0 )
    {
      for ( i = v7 + 1; ; i += 8 )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
          goto LABEL_9;
        if ( (*i & 1) == 0 )
          break;
      }
LABEL_25:
      v8 = *(_QWORD **)i;
      v7 = (_QWORD **)i;
    }
    else
    {
      v8 = *v7;
    }
    v10 = v8;
    while ( v10 )
    {
      v17 = v10;
      v16 = *((_DWORD *)v10 + 4);
      v6 = ((__int64 (__fastcall *)(unsigned int *, __int64, __int64, _QWORD))a2)(&v16, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_34;
      v6 = a2(&v17, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_34;
      v6 = a2((_DWORD *)v17 + 6, 8 * (unsigned int)*((unsigned __int8 *)v17 + 19), a3);
      if ( v6 < 0 )
        goto LABEL_34;
      if ( !v8 || (v10 = (_QWORD *)*v8, (*v8 & 1) != 0) )
      {
        for ( i = v7 + 1;
              (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              i += 8 )
        {
          if ( (*i & 1) == 0 )
            goto LABEL_25;
        }
LABEL_9:
        v10 = 0LL;
      }
      else
      {
        v8 = (_QWORD *)*v8;
      }
    }
    v11 = *(_QWORD ***)(a1 + 24);
    v12 = v11;
    if ( !v11 || (*(_BYTE *)v11 & 1) != 0 )
    {
      for ( j = v11 + 1; ; j += 8 )
      {
        if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
          goto LABEL_31;
        if ( (*j & 1) == 0 )
          break;
      }
LABEL_46:
      v12 = *(_QWORD **)j;
      v11 = (_QWORD **)j;
    }
    else
    {
      v12 = *v11;
    }
    v14 = v12;
    while ( v14 )
    {
      v18 = v14;
      v16 = *((_DWORD *)v14 + 4);
      v6 = ((__int64 (__fastcall *)(unsigned int *, __int64, __int64, _QWORD))a2)(&v16, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_34;
      v6 = a2(&v18, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_34;
      v6 = a2((_DWORD *)v18 + 6, (HIBYTE(v16) + 7) & 0xFFFFFFF8, a3);
      if ( v6 < 0 )
        goto LABEL_34;
      if ( !v12 || (v14 = (_QWORD *)*v12, (*v12 & 1) != 0) )
      {
        for ( j = v11 + 1;
              (unsigned __int64)j < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              j += 8 )
        {
          if ( (*j & 1) == 0 )
            goto LABEL_46;
        }
LABEL_31:
        v14 = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v12;
      }
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_34:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  RtlReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v6;
}
