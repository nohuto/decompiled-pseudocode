/*
 * XREFs of ?First@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@345@@Z @ 0x18007AC20
 * Callers:
 *     <none>
 * Callees:
 *     ??0Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@PEAV12345@@Z @ 0x18007CA60 (--0Iterator@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@Conte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::First(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v5; // rdi
  void *v6; // rax
  __int64 v7; // rax

  v2 = 0;
  *a2 = 0LL;
  if ( *(_BYTE *)(a1 + 176) )
  {
    v5 = (RTL_SRWLOCK *)(a1 + 160);
    if ( *(_DWORD *)(a1 + 152) == 1 )
    {
      if ( SLODWORD(v5->Ptr) >= 0 )
        ++LODWORD(v5->Ptr);
    }
    else
    {
      AcquireSRWLockShared((PSRWLOCK)(a1 + 160));
    }
    v6 = operator new(0x60uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v6
      && (v7 = Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::Iterator(
                 v6,
                 a1 - 16)) != 0 )
    {
      *a2 = v7;
    }
    else
    {
      v2 = -2147024882;
    }
    if ( *(_DWORD *)(a1 + 152) == 1 )
      --LODWORD(v5->Ptr);
    else
      ReleaseSRWLockShared(v5);
  }
  else
  {
    v2 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v2;
}
