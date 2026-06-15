/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009600
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180009D70 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000A420 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18002B990 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 * Callees:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x1800090A0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x180009140 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // bp
  __int64 *v10; // rax
  __int64 *v11; // r8
  __int64 *v12; // rcx
  int v14; // edi
  int v15; // ecx
  __int64 *v17; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(v4, &lpCriticalSection);
  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    v10 = *(__int64 **)(v4 + 40);
    v11 = v10;
    v12 = (__int64 *)v10[1];
    while ( !*((_BYTE *)v12 + 25) )
    {
      if ( *((_DWORD *)v12 + 7) < a4 )
      {
        v12 = (__int64 *)v12[2];
      }
      else
      {
        v11 = v12;
        v12 = (__int64 *)*v12;
      }
    }
    if ( v11 == v10 || a4 < *((_DWORD *)v11 + 7) )
      v11 = *(__int64 **)(v4 + 40);
    if ( (*((_DWORD *)v11 + 8))-- == 1 )
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        (_QWORD *)(v4 + 40),
        &v17,
        v11);
  }
  if ( a2 && (v14 = 0, a2 != 1)
    || (v14 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v14 >= 0) )
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v9 = 0;
      v15 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v15 != *(_DWORD *)(v4 + 56) )
      {
        v9 = 1;
        *(_DWORD *)(v4 + 56) = v15;
      }
      v14 = 0;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v14 >= 0 && v9 )
    return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 136LL))(
             g_PolicyManager,
             *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
             a1 + 56);
  else
    return (unsigned int)v14;
}
