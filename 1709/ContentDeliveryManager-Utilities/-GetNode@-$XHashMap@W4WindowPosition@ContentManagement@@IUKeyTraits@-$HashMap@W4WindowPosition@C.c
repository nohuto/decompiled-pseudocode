/*
 * XREFs of ?GetNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEBAJAEBW4WindowPosition@ContentManagement@@AEAI1AEAPEAVCNode@12@PEAPEAV512@@Z @ 0x18007D9A0
 * Callers:
 *     ?Lookup@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@PEAPEAVCPair@12@@Z @ 0x18007C454 (-Lookup@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Co.c)
 *     ?SetAt@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@IPEAPEAUTXPOSITION@2@@Z @ 0x18007C490 (-SetAt@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Con.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::GetNode(
        __int64 a1,
        int *a2,
        _DWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v6; // r11d
  unsigned __int64 v8; // rdx
  unsigned int v9; // r10d
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v18; // [rsp+8h] [rbp+8h]

  v6 = *a2;
  v18 = *a2;
  v8 = 0LL;
  v9 = -2128831035;
  do
  {
    v10 = *((unsigned __int8 *)&v18 + v8++);
    v9 = 16777619 * (v9 ^ v10);
  }
  while ( v8 < 4 );
  v11 = *(_QWORD *)(a1 + 8);
  *a4 = v9;
  v12 = v9 % *(_DWORD *)(a1 + 24);
  *a3 = v12;
  if ( v11 )
  {
    v13 = a5;
    v14 = 0LL;
    v15 = *(_QWORD *)(v11 + 8 * v12);
    *a5 = 0LL;
    while ( v15 )
    {
      if ( *(_DWORD *)(v15 + 16) == v9 && *(_DWORD *)v15 == v6 )
      {
        v16 = a6;
        *v13 = v14;
        *v16 = v15;
        return 0LL;
      }
      v14 = v15;
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
