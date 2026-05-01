/*
 * XREFs of ?GetAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@@Z @ 0x18002D500
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
  __int64 v3; // r15
  _DWORD *v4; // rbp
  unsigned int v5; // ebx
  RTL_SRWLOCK *v6; // rdi
  unsigned int v9; // r14d
  bool v10; // cf
  signed int v11; // esi

  v3 = a2;
  *a3 = 0LL;
  v4 = (_DWORD *)(a1 + 104);
  v5 = 0;
  a3[1] = 0LL;
  v6 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v6->Ptr) >= 0 )
      ++LODWORD(v6->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  v9 = *(_DWORD *)(a1 + 72);
  v10 = (unsigned int)v3 < v9;
  if ( (unsigned int)v3 >= v9 )
  {
    RoOriginateError(2147483659LL, 0LL);
    v10 = (unsigned int)v3 < v9;
  }
  v11 = v10 ? 0 : 0x8000000B;
  if ( (unsigned int)v3 < v9 )
  {
    v11 = 0;
    *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v3);
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      --LODWORD(v6->Ptr);
    else
      ReleaseSRWLockShared(v6);
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v5;
}
