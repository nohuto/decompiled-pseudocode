/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000DC60
 * Callers:
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001B42C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001B590 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x18001CB4C (-SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z.c)
 * Callees:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000E1B0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000EF40 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000EFB8 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180059EF0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // si
  unsigned int v10; // r12d
  __int64 *v11; // rax
  __int64 *v12; // r8
  __int64 *v13; // rcx
  int v15; // eax
  unsigned int v16; // edi
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 (__fastcall *v20)(__int64, __int64, __int64, _QWORD); // rax
  int v22; // [rsp+20h] [rbp-48h]
  _BYTE v23[56]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  v9 = 0;
  v10 = *(_DWORD *)(v4 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v25 = v4;
  if ( a2 - 1 <= 1 )
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
        v4 + 40,
        v23);
  }
  if ( a2 <= 1
    && (v15 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v16 = v15, v15 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x53,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v15,
      v22);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v25);
    return v16;
  }
  else
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v9 = 0;
      v17 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v17 != *(_DWORD *)(v4 + 56) )
      {
        v9 = 1;
        *(_DWORD *)(v4 + 56) = v17;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    if ( v9 && (v18 = *(_QWORD *)(a1 + 88), v19 = *(unsigned int *)(*(_QWORD *)(a1 + 72) + 56LL), v18) )
    {
      v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v18 + 72LL);
      if ( v20 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
        return CSaDeviceProxy::UpdateStreamGroupResourcePriority(v18, 1LL, v19, v10);
      else
        return v20(v18, 1LL, v19, v10);
    }
    else
    {
      return 0LL;
    }
  }
}
