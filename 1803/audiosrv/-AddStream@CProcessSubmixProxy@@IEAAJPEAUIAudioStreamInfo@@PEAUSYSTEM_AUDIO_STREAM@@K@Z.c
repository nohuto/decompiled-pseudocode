/*
 * XREFs of ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001CB50
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CEE0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 * Callees:
 *     ??$emplace_back@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAAXAEBQEAUIAudioStreamInfo@@@Z @ 0x180016810 (--$emplace_back@AEBQEAUIAudioStreamInfo@@@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEAUIAudio.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18001F910 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18001F980 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800228E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV-$unique_any_t@V-$unique_s.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006010C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::AddStream(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  struct IAudioStreamInfo *v8; // rdi
  __int64 (__fastcall *v9)(CAudioStream *__hidden, struct SYSTEM_AUDIO_STREAM *, unsigned int); // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v16; // rdi
  unsigned int v17; // r13d
  char v18; // r14
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  const char *v22; // r9
  unsigned int v23; // r12d
  _QWORD *v24; // rsi
  __int64 (__fastcall *v25)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v26; // rdi
  char v27; // r14
  __int64 *v28; // rcx
  __int64 *v29; // rax
  __int64 *v30; // r8
  int v32; // eax
  int v33; // eax
  CConstraintModelResourceManager *v34; // rcx
  __int64 (__fastcall *v35)(); // rax
  int v36; // eax
  __int64 result; // rax
  int v38; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+20h] [rbp-58h]
  _QWORD v40[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v41[16]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v43; // [rsp+80h] [rbp+8h] BYREF
  struct IAudioStreamInfo *v44; // [rsp+88h] [rbp+10h] BYREF

  v44 = a2;
  v40[1] = -2LL;
  try
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    v40[0] = v7;
    std::vector<IAudioStreamInfo *>::emplace_back<IAudioStreamInfo * const &>((__int64)this + 176, &v44);
    v8 = v44;
    v9 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct SYSTEM_AUDIO_STREAM *, unsigned int))(*(_QWORD *)v44 + 112LL);
    if ( v9 == CAudioStream::SetAudioHandle )
    {
      v10 = *((_QWORD *)a3 + 8);
      *((_QWORD *)v44 + 6) = *((_QWORD *)a3 + 6);
      v11 = *((_QWORD *)v8 + 7);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      *((_QWORD *)v8 + 7) = v10;
      *((_DWORD *)v8 + 103) = a4;
      *((_QWORD *)a3 + 8) = 0LL;
    }
    else
    {
      v9(v44, a3, a4);
    }
    if ( v7 )
      LeaveCriticalSection(v7);
    v43 = 0LL;
    v12 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*((_QWORD *)this + 1) + 80LL);
    if ( v12 == CProcessSubmixProxy::GetConnectedStreamGroup )
    {
      v13 = *((_QWORD *)this + 25);
      if ( !v13 )
      {
        v14 = 0LL;
        v43 = 0LL;
        goto LABEL_12;
      }
      v43 = (_QWORD *)*((_QWORD *)this + 25);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
    else
    {
      v12((CProcessSubmixProxy *)((char *)this + 8), (struct IStreamGroupProxy **)&v43);
    }
    v14 = v43;
LABEL_12:
    v15 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*v14 + 216LL);
    if ( (char *)v15 == (char *)&CBaseStreamGroupProxy::UpdateStreamResourcePriority )
    {
      v16 = v14[9];
      v17 = *(_DWORD *)(v16 + 56);
      v18 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)v16);
      v40[0] = v16;
      v19 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v16, a4);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v19,
          v38);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)v40);
      }
      else
      {
        if ( *(_QWORD *)(v16 + 48) )
        {
          v21 = *(_DWORD *)(**(_QWORD **)(v16 + 40) + 28LL);
          if ( v21 != *(_DWORD *)(v16 + 56) )
          {
            v18 = 1;
            *(_DWORD *)(v16 + 56) = v21;
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)v16);
        v20 = 0;
        if ( v18 )
        {
          v23 = *(_DWORD *)(v14[9] + 56LL);
          v24 = (_QWORD *)v14[11];
          if ( v24 )
          {
            v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*v24 + 72LL);
            if ( (char *)v25 == (char *)&CSaDeviceProxy::UpdateStreamGroupResourcePriority )
            {
              v26 = v24[6];
              v27 = 0;
              EnterCriticalSection((LPCRITICAL_SECTION)v26);
              v40[0] = v26;
              v28 = *(__int64 **)(v26 + 40);
              v29 = (__int64 *)v28[1];
              v30 = v28;
              if ( *((_BYTE *)v29 + 25) )
                goto LABEL_48;
              do
              {
                if ( *((_DWORD *)v29 + 7) < v17 )
                {
                  v29 = (__int64 *)v29[2];
                }
                else
                {
                  v30 = v29;
                  v29 = (__int64 *)*v29;
                }
              }
              while ( !*((_BYTE *)v29 + 25) );
              if ( v30 == v28 || v17 < *((_DWORD *)v30 + 7) )
LABEL_48:
                v30 = *(__int64 **)(v26 + 40);
              if ( (*((_DWORD *)v30 + 8))-- == 1 )
                std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
                  v26 + 40,
                  v41);
              v32 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v26, v23);
              v20 = v32;
              if ( v32 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x57,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                  (const char *)(unsigned int)v32,
                  v38);
                Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)v40);
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x707,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                  (const char *)v20,
                  v39);
              }
              else
              {
                if ( *(_QWORD *)(v26 + 48) )
                {
                  v27 = 0;
                  v33 = *(_DWORD *)(**(_QWORD **)(v26 + 40) + 28LL);
                  if ( v33 != *(_DWORD *)(v26 + 56) )
                  {
                    v27 = 1;
                    *(_DWORD *)(v26 + 56) = v33;
                  }
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)v26);
                if ( v27
                  && ((v34 = g_AudioResourceManager,
                       v35 = *(__int64 (__fastcall **)())(*(_QWORD *)g_AudioResourceManager + 48LL),
                       v35 != CAudioResourceManager::ReacquireSaDeviceResource)
                   || (v34 = (CConstraintModelResourceManager *)*((_QWORD *)g_AudioResourceManager + 5),
                       v35 = *(__int64 (__fastcall **)())(*(_QWORD *)v34 + 72LL),
                       (char *)v35 != (char *)CConstraintModelResourceManager::ReacquireSaDeviceResource)
                    ? (v36 = ((__int64 (__fastcall *)(CConstraintModelResourceManager *, _QWORD, _QWORD *))v35)(
                               v34,
                               *(unsigned int *)(v24[6] + 56LL),
                               v24 + 7))
                    : (v36 = CConstraintModelResourceManager::ReacquireSaDeviceResource(v34)),
                      v20 = v36,
                      v36 < 0) )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x70C,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                    (const char *)(unsigned int)v36,
                    v38);
                }
                else
                {
                  v20 = 0;
                }
              }
            }
            else
            {
              v20 = v25(v24, 1LL, v23, v17);
            }
          }
        }
      }
    }
    else
    {
      v20 = v15(v14, 0LL, a4, 0xFFFFFFFFLL);
    }
    if ( (v20 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)v20,
        v38);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
      result = v20;
    }
    else
    {
      if ( v43 )
        (*(void (__fastcall **)(_QWORD *))(*v43 + 16LL))(v43);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v43) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xB90,
                     (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                     v22);
    return (unsigned int)v43;
  }
  return result;
}
