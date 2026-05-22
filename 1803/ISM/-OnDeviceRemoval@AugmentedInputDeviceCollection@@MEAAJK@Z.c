/*
 * XREFs of ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18006CF30
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@@Z @ 0x180046E00 (-erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x18005EE60 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x18006D38C (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceRemoval(
        AugmentedInputDeviceCollection *this,
        unsigned int a2)
{
  unsigned int v4; // edx
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 *v7; // rax
  unsigned int v8; // edx
  __int64 *v9; // r10
  __int64 *v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h]
  _BYTE v13[24]; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]

  memset_0(v13, 0, 0x6C8uLL);
  v14 = 1736;
  v11 = 0LL;
  v12 = 0;
  if ( (int)AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
              this,
              a2,
              (struct AugmentedInputCacheState *)&v11) >= 0
    && (int)MPCInputInfoHelper::PopulateAugmentedInput(5LL, v4, (int)v11, SHIWORD(v11), v12, SHIWORD(v12), (__int64)v13) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v13);
  }
  v5 = (__int64 *)*((_QWORD *)this + 345);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_13;
  do
  {
    v8 = *((_DWORD *)v7 + 7);
    v9 = v7;
    if ( v8 >= a2 )
      v7 = (__int64 *)*v7;
    else
      v7 = (__int64 *)v7[2];
    if ( v8 >= a2 )
      v6 = v9;
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == v5 || a2 < *((_DWORD *)v6 + 7) )
LABEL_13:
    v6 = (__int64 *)*((_QWORD *)this + 345);
  if ( v6 != v5 )
    std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
      (_QWORD *)this + 345,
      &v11,
      v6);
  return 0LL;
}
