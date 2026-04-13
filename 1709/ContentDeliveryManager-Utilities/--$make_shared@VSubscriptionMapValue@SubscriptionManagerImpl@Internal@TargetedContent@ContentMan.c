/*
 * XREFs of ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x180043B08
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x1800402F0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ??0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@PEBGU_FILETIME@@@Z @ 0x18003FE1C (--0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue,unsigned short const *,_FILETIME>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        struct _FILETIME *a3)
{
  _DWORD *v6; // rbx

  v6 = operator new(0x38uLL);
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::`vftable';
    if ( v6 != (_DWORD *)-16LL )
      ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::SubscriptionMapValue(
        (ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *)(v6 + 4),
        *a2,
        *a3);
  }
  else
  {
    v6 = 0LL;
  }
  a1[1] = v6;
  *a1 = v6 + 4;
  return a1;
}
