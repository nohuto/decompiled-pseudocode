/*
 * XREFs of ??_ETargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x180051800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180012938 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificati.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x180043250 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vector deleting destructor'(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        char a2)
{
  _QWORD *v2; // rbx
  void *v5; // rcx
  volatile signed __int32 *v6; // rbx

  v2 = (_QWORD *)((char *)this + 96);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
    (__int64)this + 96,
    *(__int64 **)(*((_QWORD *)this + 12) + 8LL));
  *(_QWORD *)(*v2 + 8LL) = *v2;
  *(_QWORD *)*v2 = *v2;
  *(_QWORD *)(*v2 + 16LL) = *v2;
  v5 = (void *)*v2;
  v2[1] = 0LL;
  operator delete(v5);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 11);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
