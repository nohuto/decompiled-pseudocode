/*
 * XREFs of ?GetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x1800D5AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800D6E98 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  __int64 v3; // rbp
  HRESULT v6; // ebx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  *a3 = 0LL;
  XWinRT::SerializingLockPolicy::Read(v8, a1 + 96, &v9);
  v6 = v9;
  if ( v9 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      WindowsDeleteString(*a3);
      *a3 = 0LL;
      v6 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 80) + 8 * v3), a3);
    }
  }
  if ( v8[0] )
  {
    if ( *(_DWORD *)v8[0] == 1 )
      --*(_DWORD *)(v8[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v8[0] + 8LL));
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
