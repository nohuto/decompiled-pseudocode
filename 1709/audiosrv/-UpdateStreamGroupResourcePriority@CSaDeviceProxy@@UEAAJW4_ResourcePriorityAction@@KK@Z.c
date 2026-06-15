/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000E1B0
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18000D590 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x18000D6B8 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000DC60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000EF40 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000EFB8 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180059EF0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // si
  __int64 *v10; // rax
  __int64 *v11; // r8
  __int64 *v12; // rdx
  int v14; // eax
  unsigned int v15; // edi
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  int v20[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v22 = v4;
  if ( a2 - 1 <= 1 )
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
        v4 + 40,
        v20);
  }
  if ( a2 <= 1
    && (v14 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v15 = v14, v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x53,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14,
      v20[0]);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v22);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x70B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v15,
      v20[0]);
    return v15;
  }
  else
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
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    if ( v9
      && (v17 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager
                                                                                         + 136LL))(
                  g_PolicyManager,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
                  a1 + 56),
          v18 = v17,
          v17 < 0) )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x710,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v17,
        v20[0]);
      return v18;
    }
    else
    {
      return 0LL;
    }
  }
}
