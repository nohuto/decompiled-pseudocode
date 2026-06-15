/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001EDF0
 * Callers:
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800448C0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18001F910 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18001F980 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800228E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV-$unique_any_t@V-$unique_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006010C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
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
  __int64 *v11; // rcx
  __int64 *v12; // r8
  __int64 *v13; // rax
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // edi
  int v17; // ecx
  _QWORD *v18; // rsi
  unsigned int v19; // ebx
  unsigned int (__fastcall *v20)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v21; // rdi
  char v22; // bp
  __int64 *v23; // rcx
  __int64 *v24; // r8
  __int64 *v25; // rax
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // ecx
  CConstraintModelResourceManager *v29; // rcx
  __int64 (__fastcall *v30)(); // rax
  int v31; // eax
  int v33; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+20h] [rbp-48h]
  _BYTE v35[56]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v37; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  v9 = 0;
  v10 = *(_DWORD *)(v4 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v37 = v4;
  if ( a2 - 1 <= 1 )
  {
    v11 = *(__int64 **)(v4 + 40);
    v12 = v11;
    v13 = (__int64 *)v11[1];
    if ( *((_BYTE *)v13 + 25) )
      goto LABEL_40;
    do
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
    while ( !*((_BYTE *)v13 + 25) );
    if ( v12 == v11 || a4 < *((_DWORD *)v12 + 7) )
LABEL_40:
      v12 = *(__int64 **)(v4 + 40);
    v14 = (*((_DWORD *)v12 + 8))-- == 1;
    if ( v14 )
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        v4 + 40,
        v35);
  }
  if ( a2 <= 1
    && (v15 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v16 = v15, v15 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v15,
      v33);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v37);
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
    if ( v9 && (v18 = *(_QWORD **)(a1 + 88), v19 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL), v18) )
    {
      v20 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*v18 + 72LL);
      if ( (char *)v20 == (char *)&CSaDeviceProxy::UpdateStreamGroupResourcePriority )
      {
        v21 = v18[6];
        v22 = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)v21);
        v23 = *(__int64 **)(v21 + 40);
        v37 = v21;
        v24 = v23;
        v25 = (__int64 *)v23[1];
        if ( *((_BYTE *)v25 + 25) )
          goto LABEL_43;
        do
        {
          if ( *((_DWORD *)v25 + 7) < v10 )
          {
            v25 = (__int64 *)v25[2];
          }
          else
          {
            v24 = v25;
            v25 = (__int64 *)*v25;
          }
        }
        while ( !*((_BYTE *)v25 + 25) );
        if ( v24 == v23 || v10 < *((_DWORD *)v24 + 7) )
LABEL_43:
          v24 = v23;
        v14 = (*((_DWORD *)v24 + 8))-- == 1;
        if ( v14 )
          std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
            v21 + 40,
            v35);
        v26 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v21, v19);
        v27 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x57,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v26,
            v33);
          Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v37);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x707,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)v27,
            v34);
        }
        else
        {
          if ( *(_QWORD *)(v21 + 48) )
          {
            v22 = 0;
            v28 = *(_DWORD *)(**(_QWORD **)(v21 + 40) + 28LL);
            if ( v28 != *(_DWORD *)(v21 + 56) )
            {
              v22 = 1;
              *(_DWORD *)(v21 + 56) = v28;
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)v21);
          if ( v22
            && ((v29 = g_AudioResourceManager,
                 v30 = *(__int64 (__fastcall **)())(*(_QWORD *)g_AudioResourceManager + 48LL),
                 v30 != CAudioResourceManager::ReacquireSaDeviceResource)
             || (v29 = (CConstraintModelResourceManager *)*((_QWORD *)g_AudioResourceManager + 5),
                 v30 = *(__int64 (__fastcall **)())(*(_QWORD *)v29 + 72LL),
                 (char *)v30 != (char *)CConstraintModelResourceManager::ReacquireSaDeviceResource)
              ? (v31 = ((__int64 (__fastcall *)(CConstraintModelResourceManager *, _QWORD, _QWORD *))v30)(
                         v29,
                         *(unsigned int *)(v18[6] + 56LL),
                         v18 + 7))
              : (v31 = CConstraintModelResourceManager::ReacquireSaDeviceResource(v29)),
                v27 = v31,
                v31 < 0) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x70C,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v31,
              v33);
          }
          else
          {
            return 0;
          }
        }
      }
      else
      {
        return v20(*(_QWORD *)(a1 + 88), 1LL, v19, v10);
      }
      return v27;
    }
    else
    {
      return 0LL;
    }
  }
}
