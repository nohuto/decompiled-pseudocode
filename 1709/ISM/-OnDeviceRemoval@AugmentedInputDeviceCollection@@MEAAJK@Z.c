/*
 * XREFs of ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18008C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@@Z @ 0x18001E5B8 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180067A9C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x18008C5A4 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceRemoval(
        AugmentedInputDeviceCollection *this,
        unsigned int a2)
{
  unsigned int v4; // edx
  __int64 *v5; // rax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v9; // [rsp+40h] [rbp-B48h] BYREF
  int v10; // [rsp+48h] [rbp-B40h]
  _BYTE v11[2848]; // [rsp+50h] [rbp-B38h] BYREF

  memset(v11, 0, sizeof(v11));
  v9 = 0LL;
  v10 = 0;
  if ( (int)AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
              this,
              a2,
              (struct AugmentedInputCacheState *)&v9) >= 0
    && (int)MPCInputInfoHelper::PopulateAugmentedInput(5LL, v4, (int)v9, SHIWORD(v9), v10, SHIWORD(v10), (__int64)v11) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v11);
  }
  v5 = (__int64 *)*((_QWORD *)this + 345);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( *((_DWORD *)v7 + 7) >= a2 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v6 == v5 || a2 < *((_DWORD *)v6 + 7) )
    v6 = (__int64 *)*((_QWORD *)this + 345);
  if ( v6 != v5 )
    std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
      (_QWORD *)this + 345,
      &v9,
      v6);
  return 0LL;
}
