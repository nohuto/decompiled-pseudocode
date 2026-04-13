/*
 * XREFs of ?Split@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@0@Z @ 0x180087A30
 * Callers:
 *     ?Split@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@PEAPEAU6345@1@Z @ 0x180087DA8 (-Split@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPred_ea_180087DA8.c)
 * Callees:
 *     ?Force@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800884AC (-Force@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Split(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char v5; // bl
  signed int v7; // edi
  __int64 v8; // rbp
  int v9; // ebx
  char v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbx

  *a2 = 0LL;
  *a3 = 0LL;
  v5 = *(_BYTE *)(a1 + 109);
  if ( !v5 )
    RoOriginateError(2147549183LL, 0LL);
  v7 = v5 == 0 ? 0x8000FFFF : 0;
  if ( v5 )
    v7 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Force(a1);
  if ( v7 >= 0 )
  {
    v7 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 72LL) + 12LL) )
    {
      v8 = *(_QWORD *)(a1 + 88);
      v9 = 0;
      if ( v8 )
      {
        v10 = *(_BYTE *)(v8 + 109);
        if ( !v10 )
          RoOriginateError(2147549183LL, 0LL);
        v7 = v10 == 0 ? 0x8000FFFF : 0;
        if ( v10 )
          v9 = *(_DWORD *)(v8 + 104);
      }
      if ( v7 >= 0 && v9 )
      {
        v11 = *(_QWORD *)(a1 + 80);
        if ( v11 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 80));
        *a2 = v11;
        v12 = *(_QWORD *)(a1 + 88);
        if ( v12 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*(_QWORD *)(a1 + 88));
        *a3 = v12;
      }
    }
  }
  return (unsigned int)v7;
}
