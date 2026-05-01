/*
 * XREFs of ?get_Size@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x18002CC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  char v3; // bl
  __int64 result; // rax
  int *v6; // rbx

  *a2 = 0;
  v3 = *(_BYTE *)(a1 + 184);
  if ( !v3 )
    RoOriginateError(2147549183LL, 0LL);
  result = v3 == 0 ? 0x8000FFFF : 0;
  if ( v3 )
  {
    v6 = (int *)(a1 + 168);
    if ( *(_DWORD *)(a1 + 160) == 1 )
    {
      if ( *v6 >= 0 )
        ++*v6;
    }
    else
    {
      AcquireSRWLockShared((PSRWLOCK)(a1 + 168));
    }
    *a2 = *(_DWORD *)(a1 + 88);
    result = 0LL;
    if ( a1 != -160 )
    {
      if ( *(_DWORD *)(a1 + 160) == 1 )
      {
        --*v6;
      }
      else
      {
        ReleaseSRWLockShared((PSRWLOCK)(a1 + 168));
        return 0LL;
      }
    }
  }
  return result;
}
