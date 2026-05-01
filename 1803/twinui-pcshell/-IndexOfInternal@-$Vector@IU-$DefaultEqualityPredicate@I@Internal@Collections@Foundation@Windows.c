/*
 * XREFs of ?IndexOfInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJPEAIII0PEAE@Z @ 0x180301348
 * Callers:
 *     ?IndexOf@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAIPEAE@Z @ 0x180301220 (-IndexOf@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$Def.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::IndexOfInternal(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        int a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // ecx

  v6 = 0;
  if ( a3 )
  {
    while ( a4 != *a2 )
    {
      ++v6;
      ++a2;
      if ( v6 >= a3 )
        return 0LL;
    }
    *a6 = 1;
    *a5 = v6;
  }
  return 0LL;
}
