/*
 * XREFs of ?GetAt@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x1801C7A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  RTL_SRWLOCK *v5; // rbx
  int v8; // ebp
  int v9; // ecx

  v3 = a2;
  v4 = 0;
  *a3 = 0;
  v5 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 40) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v3);
    v8 = 0;
    *a3 = v9;
  }
  else
  {
    v8 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 72) == 1 )
    --LODWORD(v5->Ptr);
  else
    ReleaseSRWLockShared(v5);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v4;
}
