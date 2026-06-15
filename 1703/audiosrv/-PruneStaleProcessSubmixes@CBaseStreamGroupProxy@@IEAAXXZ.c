/*
 * XREFs of ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x18007A060
 * Callers:
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A5BB0 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18007CD58 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     std::_Remove_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800A4A20 (std--_Remove_if_unchecked_Microsoft--WRL--WeakRef_____ptr64__lambda_6721409c6d8d6be39a12e154768b.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneStaleProcessSubmixes(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF
  char v4; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 144, (__int64)&lpCriticalSection);
  v2 = std::_Remove_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_6721409c6d8d6be39a12e154768b61d2___(
         *((_QWORD *)this + 23),
         *((_QWORD *)this + 24));
  std::vector<Microsoft::WRL::WeakRef>::erase((char *)this + 184, &v4, v2, *((_QWORD *)this + 24));
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
