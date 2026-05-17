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
        __int64 (__fastcall *a2)(_DWORD *, __int64, unsigned __int64 *),
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  int v10; // edi
  _QWORD **v11; // rsi
  _QWORD *v12; // rbx
  _BYTE *i; // rdx
  _QWORD *v14; // rax
  _QWORD **v15; // rsi
  _QWORD *v16; // rbx
  _BYTE *j; // rdx
  _QWORD *v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v23; // [rsp+38h] [rbp-28h]
  _DWORD v24[4]; // [rsp+40h] [rbp-20h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 32, (unsigned __int64)a2, a3, a4);
  v23 = (volatile signed __int64 *)(a1 + 40);
  RtlAcquireSRWLockExclusive(a1 + 40, v7, v8, v9);
  v24[0] = *(_DWORD *)a1;
  v24[1] = *(_DWORD *)(a1 + 16);
  v24[2] = 524289;
  v10 = a2(v24, 12LL, a3);
  if ( v10 >= 0 )
  {
    v11 = *(_QWORD ***)(a1 + 8);
    v12 = v11;
    if ( !v11 || (*(_BYTE *)v11 & 1) != 0 )
    {
      for ( i = v11 + 1; ; i += 8 )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
          goto LABEL_9;
        if ( (*i & 1) == 0 )
          break;
      }
LABEL_25:
      v12 = *(_QWORD **)i;
      v11 = (_QWORD **)i;
    }
    else
    {
      v12 = *v11;
    }
    v14 = v12;
    while ( v14 )
    {
      v21 = v14;
      v20 = *((_DWORD *)v14 + 4);
      v10 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned __int64 *, _QWORD))a2)(&v20, 4LL, a3, 0LL);
      if ( v10 < 0 )
        goto LABEL_34;
      v10 = a2(&v21, 8LL, a3);
      if ( v10 < 0 )
        goto LABEL_34;
      v10 = a2((_DWORD *)v21 + 6, 8 * (unsigned int)*((unsigned __int8 *)v21 + 19), a3);
      if ( v10 < 0 )
        goto LABEL_34;
      if ( !v12 || (v14 = (_QWORD *)*v12, (*v12 & 1) != 0) )
      {
        for ( i = v11 + 1;
              (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              i += 8 )
        {
          if ( (*i & 1) == 0 )
            goto LABEL_25;
        }
LABEL_9:
        v14 = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v12;
      }
    }
    v15 = *(_QWORD ***)(a1 + 24);
    v16 = v15;
    if ( !v15 || (*(_BYTE *)v15 & 1) != 0 )
    {
      for ( j = v15 + 1; ; j += 8 )
      {
        if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
          goto LABEL_31;
        if ( (*j & 1) == 0 )
          break;
      }
LABEL_46:
      v16 = *(_QWORD **)j;
      v15 = (_QWORD **)j;
    }
    else
    {
      v16 = *v15;
    }
    v18 = v16;
    while ( v18 )
    {
      v22 = v18;
      v20 = *((_DWORD *)v18 + 4);
      v10 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned __int64 *, _QWORD))a2)(&v20, 4LL, a3, 0LL);
      if ( v10 < 0 )
        goto LABEL_34;
      v10 = a2(&v22, 8LL, a3);
      if ( v10 < 0 )
        goto LABEL_34;
      v10 = a2((_DWORD *)v22 + 6, (HIBYTE(v20) + 7) & 0xFFFFFFF8, a3);
      if ( v10 < 0 )
        goto LABEL_34;
      if ( !v16 || (v18 = (_QWORD *)*v16, (*v16 & 1) != 0) )
      {
        for ( j = v15 + 1;
              (unsigned __int64)j < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              j += 8 )
        {
          if ( (*j & 1) == 0 )
            goto LABEL_46;
        }
LABEL_31:
        v18 = 0LL;
      }
      else
      {
        v16 = (_QWORD *)*v16;
      }
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_34:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  RtlReleaseSRWLockExclusive(v23);
  return (unsigned int)v10;
}
