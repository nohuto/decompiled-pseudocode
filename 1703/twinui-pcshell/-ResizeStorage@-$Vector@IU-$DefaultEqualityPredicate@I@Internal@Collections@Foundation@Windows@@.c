/*
 * XREFs of ?ResizeStorage@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18017C13C
 * Callers:
 *     ?InsertAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJII_N@Z @ 0x18017B5F8 (-InsertAtInternal@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Window.c)
 *     ?RemoveAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18017B798 (-RemoveAtInternal@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Window.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ResizeStorage(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  void *v6; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    v5 = (void *)_o_realloc(v4, 4LL * a2);
  else
    v5 = malloc(4LL * a2);
  v6 = v5;
  result = v5 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 56) = v6;
    *(_DWORD *)(a1 + 44) = a2;
  }
  return result;
}
