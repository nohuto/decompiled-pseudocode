/*
 * XREFs of ?GetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180012590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  _DWORD *v5; // rbp
  RTL_SRWLOCK *v6; // rdi
  unsigned int v9; // r14d
  bool v10; // cf
  int v11; // esi

  v3 = 0;
  v4 = a2;
  v5 = (_DWORD *)(a1 + 104);
  *a3 = 0LL;
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
  v10 = (unsigned int)v4 < v9;
  if ( (unsigned int)v4 >= v9 )
  {
    RoOriginateError(2147483659LL, 0LL);
    v10 = (unsigned int)v4 < v9;
  }
  v11 = v10 ? 0 : 0x8000000B;
  if ( (unsigned int)v4 < v9 )
  {
    WindowsDeleteString(*a3);
    *a3 = 0LL;
    v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8 * v4), a3);
  }
  if ( v5 )
  {
    if ( *v5 == 1 )
      --LODWORD(v6->Ptr);
    else
      ReleaseSRWLockShared(v6);
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v3;
}
