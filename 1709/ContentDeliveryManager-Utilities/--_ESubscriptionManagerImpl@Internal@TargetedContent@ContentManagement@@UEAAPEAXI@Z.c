/*
 * XREFs of ??_ESubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAPEAXI@Z @ 0x1800446C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAppInstallInfoRecord@ContentManagement@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180013C30 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVAppInstal.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@PEAX@2@@Z @ 0x180043460 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::`vector deleting destructor'(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        char a2)
{
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rbx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx

  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 12);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 12) + 8LL) = *((_QWORD *)this + 12);
  *((_QWORD *)this + 13) = 0LL;
  if ( v6 != *((_QWORD **)this + 12) )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      std::_List_buy<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>::_Freenode(
        (__int64)v4,
        (__int64)v6);
      v6 = v7;
    }
    while ( v7 != *((_QWORD **)this + 12) );
  }
  operator delete(*((void **)this + 12));
  v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  if ( v8 )
    (**v8)(v8, 1LL);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
