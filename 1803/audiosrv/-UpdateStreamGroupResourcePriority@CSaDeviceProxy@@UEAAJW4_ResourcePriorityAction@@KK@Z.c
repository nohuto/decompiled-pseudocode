/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001F1A0
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800465C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 * Callees:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18001F910 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18001F980 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800228E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV-$unique_any_t@V-$unique_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006010C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // di
  __int64 *v10; // rcx
  __int64 *v11; // r8
  __int64 *v12; // rax
  int v14; // eax
  unsigned int v15; // esi
  int v16; // ecx
  CConstraintModelResourceManager *v17; // rcx
  __int64 (__fastcall *v18)(); // rax
  int v19; // eax
  unsigned int v20; // ebx
  int v22[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v24 = v4;
  if ( a2 - 1 <= 1 )
  {
    v10 = *(__int64 **)(v4 + 40);
    v11 = v10;
    v12 = (__int64 *)v10[1];
    if ( *((_BYTE *)v12 + 25) )
      goto LABEL_23;
    do
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
    while ( !*((_BYTE *)v12 + 25) );
    if ( v11 == v10 || a4 < *((_DWORD *)v11 + 7) )
LABEL_23:
      v11 = *(__int64 **)(v4 + 40);
    if ( (*((_DWORD *)v11 + 8))-- == 1 )
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        v4 + 40,
        v22);
  }
  if ( a2 <= 1
    && (v14 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v15 = v14, v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14,
      v22[0]);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v24);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x707,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v15,
      v22[0]);
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
      && ((v17 = g_AudioResourceManager,
           v18 = *(__int64 (__fastcall **)())(*(_QWORD *)g_AudioResourceManager + 48LL),
           v18 != CAudioResourceManager::ReacquireSaDeviceResource)
       || (v17 = (CConstraintModelResourceManager *)*((_QWORD *)g_AudioResourceManager + 5),
           v18 = *(__int64 (__fastcall **)())(*(_QWORD *)v17 + 72LL),
           (char *)v18 != (char *)CConstraintModelResourceManager::ReacquireSaDeviceResource)
        ? (v19 = ((__int64 (__fastcall *)(CConstraintModelResourceManager *, _QWORD, __int64))v18)(
                   v17,
                   *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
                   a1 + 56))
        : (v19 = CConstraintModelResourceManager::ReacquireSaDeviceResource(v17)),
          v20 = v19,
          v19 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v19,
        v22[0]);
      return v20;
    }
    else
    {
      return 0LL;
    }
  }
}
