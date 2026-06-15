/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000B900
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007920 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x18000B5E0 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??$emplace@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@AEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002C854 (--$emplace@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(
        CDeviceGraphObjectsStore *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  v4 = 0;
  CDeviceGraphObjectsStore::RemoveStaleObjects(this);
  try
  {
    std::vector<Microsoft::WRL::WeakRef>::emplace<Microsoft::WRL::WeakRef const &>(
      (char *)this + 56,
      &v6,
      *((_QWORD *)this + 7),
      a2,
      -2LL);
  }
  catch ( std::bad_alloc )
  {
    v6 = -2147024882;
    v4 = -2147024882;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
