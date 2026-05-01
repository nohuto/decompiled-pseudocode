/*
 * XREFs of ?IndexOf@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAIPEAE@Z @ 0x18002D680
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::IndexOf(
        __int64 a1,
        _OWORD *a2,
        unsigned int *a3,
        _BYTE *a4)
{
  _DWORD *v4; // rbp
  _OWORD *v5; // r14
  unsigned int v6; // r15d
  RTL_SRWLOCK *v7; // rsi
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  int i; // ebx
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int128 v24; // [rsp+20h] [rbp-38h]
  __int128 v25; // [rsp+20h] [rbp-38h]
  _OWORD *v26; // [rsp+68h] [rbp+10h]

  v26 = a2;
  *a3 = 0;
  v4 = (_DWORD *)(a1 + 104);
  v5 = 0LL;
  *a4 = 0;
  v6 = 0;
  v7 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v7->Ptr) >= 0 )
      ++LODWORD(v7->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
    a2 = v26;
  }
  if ( *(_DWORD *)(a1 + 80) )
  {
    v17 = 16LL * *(unsigned int *)(a1 + 72);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 72), 0x10uLL) )
      v17 = -1LL;
    v5 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v18 = 0;
      for ( i = 0; v18 < *(_DWORD *)(a1 + 72); v5[v19] = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v19) )
      {
        ++v6;
        v19 = v18++;
      }
    }
    else
    {
      i = -2147024882;
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 72);
    v12 = 0;
    v13 = *(_QWORD *)(a1 + 88);
    v24 = *a2;
    if ( v11 )
    {
      while ( 1 )
      {
        v14 = 16LL * v12;
        v15 = v24 - *(_QWORD *)(v14 + v13);
        if ( (_QWORD)v24 == *(_QWORD *)(v14 + v13) )
          v15 = *((_QWORD *)&v24 + 1) - *(_QWORD *)(v14 + v13 + 8);
        if ( !v15 )
          break;
        if ( ++v12 >= v11 )
          goto LABEL_13;
      }
      *a4 = 1;
      *a3 = v12;
    }
LABEL_13:
    i = 0;
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  if ( i >= 0 && v6 )
  {
    v20 = 0;
    v25 = *v26;
    while ( 1 )
    {
      v21 = v20;
      v22 = v25 - *(_QWORD *)&v5[v21];
      if ( (_QWORD)v25 == *(_QWORD *)&v5[v21] )
        v22 = *((_QWORD *)&v25 + 1) - *((_QWORD *)&v5[v21] + 1);
      if ( !v22 )
        break;
      if ( ++v20 >= v6 )
        goto LABEL_33;
    }
    *a4 = 1;
    *a3 = v20;
LABEL_33:
    i = 0;
  }
  operator delete(v5);
  return (unsigned int)i;
}
