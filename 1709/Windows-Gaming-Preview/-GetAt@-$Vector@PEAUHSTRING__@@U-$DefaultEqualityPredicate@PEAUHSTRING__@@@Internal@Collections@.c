/*
 * XREFs of ?GetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180012190
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
  unsigned int v3; // edi
  __int64 v4; // rbp
  RTL_SRWLOCK *v5; // rbx
  HRESULT v8; // ebp

  v3 = 0;
  v4 = a2;
  *a3 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  }
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 80) )
  {
    WindowsDeleteString(*a3);
    *a3 = 0LL;
    v8 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 96) + 8 * v4), a3);
  }
  else
  {
    v8 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 112) == 1 )
    --LODWORD(v5->Ptr);
  else
    ReleaseSRWLockShared(v5);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
