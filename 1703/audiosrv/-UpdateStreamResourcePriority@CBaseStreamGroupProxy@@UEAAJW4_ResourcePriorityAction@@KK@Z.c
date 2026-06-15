/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000A420
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800195A0 (-SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A150 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x1800090A0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x180009140 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009600 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // si
  unsigned int v10; // r12d
  __int64 *v11; // rax
  __int64 *v12; // r8
  __int64 *v13; // rcx
  int v15; // edi
  int v16; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 (__fastcall *v20)(__int64, int, unsigned int, unsigned int); // rax
  __int64 *v21; // [rsp+30h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v9 = 0;
  v10 = *(_DWORD *)(v4 + 56);
  Microsoft::WRL::Wrappers::CriticalSection::Lock(v4, &lpCriticalSection);
  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    v11 = *(__int64 **)(v4 + 40);
    v12 = v11;
    v13 = (__int64 *)v11[1];
    while ( !*((_BYTE *)v13 + 25) )
    {
      if ( *((_DWORD *)v13 + 7) < a4 )
      {
        v13 = (__int64 *)v13[2];
      }
      else
      {
        v12 = v13;
        v13 = (__int64 *)*v13;
      }
    }
    if ( v12 == v11 || a4 < *((_DWORD *)v12 + 7) )
      v12 = *(__int64 **)(v4 + 40);
    if ( (*((_DWORD *)v12 + 8))-- == 1 )
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        (_QWORD *)(v4 + 40),
        &v21,
        v12);
  }
  if ( a2 && (v15 = 0, a2 != 1)
    || (v15 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v15 >= 0) )
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v9 = 0;
      v16 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v16 != *(_DWORD *)(v4 + 56) )
      {
        v9 = 1;
        *(_DWORD *)(v4 + 56) = v16;
      }
      v15 = 0;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v15 < 0 )
    return (unsigned int)v15;
  if ( !v9 )
    return (unsigned int)v15;
  v18 = *(_QWORD *)(a1 + 80);
  v19 = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 56LL);
  if ( !v18 )
    return (unsigned int)v15;
  v20 = *(__int64 (__fastcall **)(__int64, int, unsigned int, unsigned int))(*(_QWORD *)v18 + 72LL);
  if ( v20 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
    return CSaDeviceProxy::UpdateStreamGroupResourcePriority(v18, 1, v19, v10);
  else
    return v20(v18, 1, v19, v10);
}
