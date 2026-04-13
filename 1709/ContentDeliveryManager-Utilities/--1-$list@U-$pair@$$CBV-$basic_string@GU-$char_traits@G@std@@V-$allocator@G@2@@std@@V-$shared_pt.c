/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18004499C
 * Callers:
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionManagerImpl_::_1_::dtor$4 @ 0x1800B710C (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--Subscriptio_ea_1800B710C.c)
 * Callees:
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@PEAX@2@@Z @ 0x180043460 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>::~list<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>(
        void **a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_List_buy<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>::_Freenode(
        (__int64)a1,
        (__int64)v2);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  operator delete(*a1);
}
