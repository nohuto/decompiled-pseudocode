/*
 * XREFs of ?IndexOf@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAIPEAE@Z @ 0x18002C900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::IndexOf(
        __int64 a1,
        unsigned __int64 i,
        unsigned int *a3,
        _BYTE *a4)
{
  RTL_SRWLOCK *v4; // rsi
  _OWORD *v5; // r14
  unsigned int v6; // ebp
  unsigned __int64 v9; // r13
  int v11; // edi
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax

  *a3 = 0;
  v4 = (RTL_SRWLOCK *)(a1 + 120);
  v5 = 0LL;
  *a4 = 0;
  v6 = 0;
  v9 = i;
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( SLODWORD(v4->Ptr) >= 0 )
      ++LODWORD(v4->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 88) )
  {
    v13 = 16LL * *(unsigned int *)(a1 + 80);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 80), 0x10uLL) )
      v13 = -1LL;
    v5 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); v5[v14] = *(_OWORD *)(*(_QWORD *)(a1 + 96) + 16 * v14) )
      {
        ++v6;
        v14 = (unsigned int)i;
        i = (unsigned int)(i + 1);
      }
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v12 = 0;
    if ( *(_DWORD *)(a1 + 80) )
    {
      i = *(_QWORD *)(v9 + 8);
      while ( *(_OWORD *)v9 != *(_OWORD *)(*(_QWORD *)(a1 + 96) + 16LL * v12) )
      {
        if ( ++v12 >= *(_DWORD *)(a1 + 80) )
          goto LABEL_18;
      }
      *a4 = 1;
      *a3 = v12;
    }
  }
LABEL_18:
  if ( *(_DWORD *)(a1 + 112) == 1 )
    --LODWORD(v4->Ptr);
  else
    ReleaseSRWLockShared(v4);
  if ( v11 >= 0 && v6 )
  {
    v15 = 0;
    i = *(_QWORD *)(v9 + 8);
    while ( *(_OWORD *)v9 != v5[v15] )
    {
      if ( ++v15 >= v6 )
        goto LABEL_27;
    }
    *a4 = 1;
    *a3 = v15;
LABEL_27:
    v11 = 0;
  }
  operator delete(v5, i);
  return (unsigned int)v11;
}
