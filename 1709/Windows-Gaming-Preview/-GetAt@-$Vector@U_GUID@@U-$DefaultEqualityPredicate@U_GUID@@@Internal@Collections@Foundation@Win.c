/*
 * XREFs of ?GetAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@@Z @ 0x18002C7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v3; // rbp
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // edi
  int v8; // ebp
  __int64 v9; // rcx

  v3 = a2;
  *a3 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 120);
  v5 = 0;
  a3[1] = 0LL;
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( SLODWORD(v4->Ptr) >= 0 )
      ++LODWORD(v4->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  }
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 80) )
  {
    v9 = 2 * v3;
    v8 = 0;
    *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(a1 + 96) + 8 * v9);
  }
  else
  {
    v8 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 112) == 1 )
    --LODWORD(v4->Ptr);
  else
    ReleaseSRWLockShared(v4);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v5;
}
