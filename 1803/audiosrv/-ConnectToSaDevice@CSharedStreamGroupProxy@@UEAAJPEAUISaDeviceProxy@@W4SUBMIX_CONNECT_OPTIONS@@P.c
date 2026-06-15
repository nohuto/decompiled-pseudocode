/*
 * XREFs of ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0
 * Callers:
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001A800 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 * Callees:
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18001C2D0 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18001F0C0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18001F910 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x18001FD10 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAX$$QEAV12@@Z @ 0x18001FD80 (-_Reset_move@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800228E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV-$unique_any_t@V-$unique_s.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800465C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move @ 0x180046960 (std--_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStrea_ea_180046960.c)
 *     std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this @ 0x180046970 (std--_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_--_Delete_this.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006010C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180060338 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::ConnectToSaDevice(__int64 *a1, CSaDeviceProxy *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  CSaDeviceProxy *v7; // rax
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **); // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(); // rax
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // r8
  __int64 (__fastcall *v17)(); // rax
  _QWORD *v18; // rax
  __int64 v19; // r14
  _QWORD *v20; // rsi
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 (__fastcall *v23)(); // r8
  __int64 (__fastcall *v24)(_QWORD, _QWORD, _QWORD, _QWORD); // r9
  __int64 (__fastcall *v25)(); // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rcx
  __int64 (__fastcall *v28)(); // rax
  __int64 *v29; // r14
  __int64 *v30; // rsi
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(); // rax
  _QWORD *v33; // rax
  __int64 (__fastcall *v34)(); // rax
  __int64 (__fastcall *v35)(); // rax
  CSaDeviceProxy *v36; // rcx
  void (*v37)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *); // rax
  _QWORD *v38; // r14
  unsigned int (__fastcall *v39)(CBaseStreamGroupProxy *__hidden); // rax
  unsigned int v40; // edi
  __int64 (__fastcall *v41)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v42; // rsi
  char v43; // r15
  int v44; // eax
  int v45; // ecx
  CConstraintModelResourceManager *v46; // rcx
  __int64 (__fastcall *v47)(); // rax
  int v48; // eax
  __int64 v50; // rax
  int v51; // eax
  _QWORD *v52; // rdx
  _QWORD *v53; // rdx
  int v54; // [rsp+28h] [rbp-E0h]
  int v55; // [rsp+28h] [rbp-E0h]
  __int64 v56; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v59[7]; // [rsp+50h] [rbp-B8h] BYREF
  void *v60; // [rsp+88h] [rbp-80h]
  _QWORD v61[7]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v62; // [rsp+C8h] [rbp-40h]
  _QWORD v63[7]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD *v64; // [rsp+108h] [rbp+0h]
  _QWORD v65[7]; // [rsp+118h] [rbp+10h] BYREF
  void *v66; // [rsp+150h] [rbp+48h]
  _BYTE v67[56]; // [rsp+158h] [rbp+50h] BYREF
  void *v68; // [rsp+190h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 12);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 12));
  v7 = (CSaDeviceProxy *)a1[11];
  if ( !v7 )
  {
    v8 = *(_QWORD *)a2;
    v56 = 0LL;
    v9 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **))(v8 + 56);
    if ( v9 == CSaDeviceProxy::GetDeviceGraph )
    {
      v10 = *((_QWORD *)a2 + 9);
      if ( v10 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + 9));
        v10 = *((_QWORD *)a2 + 9);
      }
      v56 = v10;
    }
    else
    {
      v51 = v9(a2, (struct IAudioDeviceGraph **)&v56);
      v12 = v51;
      if ( v51 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4DC,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v51,
          v54);
        goto LABEL_114;
      }
      v10 = v56;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1[10] + 72LL))(a1[10], v10, a3);
    v12 = v11;
    if ( v11 >= 0 )
    {
      if ( (CSaDeviceProxy *)a1[11] != a2 )
      {
        (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)a2 + 8LL))(a2);
        v13 = a1[11];
        a1[11] = (__int64)a2;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v60 = v59;
      v14 = *a1;
      v59[0] = off_18012BEC0;
      v15 = *(__int64 (__fastcall **)())(v14 + 368);
      if ( v15 != CBaseStreamGroupProxy::ForEachStream )
      {
        ((void (__fastcall *)(__int64 *, _QWORD *))v15)(a1, v59);
LABEL_52:
        v36 = (CSaDeviceProxy *)a1[11];
        v37 = *(void (**)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *))(*(_QWORD *)v36 + 160LL);
        if ( v37 == CSaDeviceProxy::OnStreamGroupConnected )
          CSaDeviceProxy::OnStreamGroupConnected(v36, (struct IStreamGroupProxy *)a1);
        else
          ((void (__fastcall *)(CSaDeviceProxy *, __int64 *))v37)(v36, a1);
        v38 = (_QWORD *)a1[11];
        v39 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*a1 + 136);
        if ( v39 == CBaseStreamGroupProxy::GetResourcePriority )
          v40 = *(_DWORD *)(a1[9] + 56);
        else
          v40 = v39((CBaseStreamGroupProxy *)a1);
        v41 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*v38 + 72LL);
        if ( (char *)v41 == (char *)&CSaDeviceProxy::UpdateStreamGroupResourcePriority )
        {
          v42 = v38[6];
          v43 = 0;
          EnterCriticalSection((LPCRITICAL_SECTION)v42);
          v58 = v42;
          v44 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v42, v40);
          v12 = v44;
          if ( v44 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x57,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v44,
              v54);
            Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v58);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x707,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)v12,
              v55);
          }
          else
          {
            if ( *(_QWORD *)(v42 + 48) )
            {
              v45 = *(_DWORD *)(**(_QWORD **)(v42 + 40) + 28LL);
              if ( v45 != *(_DWORD *)(v42 + 56) )
              {
                v43 = 1;
                *(_DWORD *)(v42 + 56) = v45;
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)v42);
            if ( v43
              && ((v46 = g_AudioResourceManager,
                   v47 = *(__int64 (__fastcall **)())(*(_QWORD *)g_AudioResourceManager + 48LL),
                   v47 != CAudioResourceManager::ReacquireSaDeviceResource)
               || (v46 = (CConstraintModelResourceManager *)*((_QWORD *)g_AudioResourceManager + 5),
                   v47 = *(__int64 (__fastcall **)())(*(_QWORD *)v46 + 72LL),
                   (char *)v47 != (char *)CConstraintModelResourceManager::ReacquireSaDeviceResource)
                ? (v48 = ((__int64 (__fastcall *)(CConstraintModelResourceManager *, _QWORD, _QWORD *))v47)(
                           v46,
                           *(unsigned int *)(v38[6] + 56LL),
                           v38 + 7))
                : (v48 = CConstraintModelResourceManager::ReacquireSaDeviceResource(v46)),
                  v12 = v48,
                  v48 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x70C,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)(unsigned int)v48,
                v54);
            }
            else
            {
              v12 = 0;
            }
          }
        }
        else
        {
          v12 = v41(v38, 0LL, v40, 0xFFFFFFFFLL);
        }
        if ( (v12 & 0x80000000) == 0 )
        {
          if ( v56 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
          goto LABEL_70;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E7,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)v12,
          v54);
        CBaseStreamGroupProxy::DisconnectFromSaDevice((CBaseStreamGroupProxy *)a1);
        goto LABEL_114;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 19));
      v64 = 0LL;
      v16 = std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move;
      if ( v60 )
      {
        v17 = **(__int64 (__fastcall ***)())v60;
        if ( v17 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Copy )
        {
          v63[0] = off_18012BEC0;
          v18 = v63;
        }
        else if ( (char *)v17 == (char *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move )
        {
          v18 = (_QWORD *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move(
                            v60,
                            v63,
                            std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move);
        }
        else
        {
          v18 = (_QWORD *)((__int64 (__fastcall *)(void *, _QWORD *, _QWORD))v17)(
                            v60,
                            v63,
                            std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move);
        }
        v64 = v18;
      }
      v19 = 0LL;
      v20 = (_QWORD *)a1[24];
      v21 = (unsigned __int64)(a1[25] - (_QWORD)v20 + 7) >> 3;
      if ( (unsigned __int64)v20 > a1[25] )
        v21 = 0LL;
      if ( v21 )
      {
        do
        {
          std::_Func_class<void,IAudioStreamInfo *>::operator()(v63, *v20, v16);
          ++v19;
          ++v20;
        }
        while ( v19 != v21 );
      }
      v68 = 0LL;
      std::_Func_class<void,IAudioStreamInfo *>::_Reset_move(v67, v63, v16);
      if ( v64 )
      {
        v52 = v63;
        LOBYTE(v52) = v64 != v63;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v64 + 32LL))(v64, v52);
        v64 = 0LL;
      }
      v23 = std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this;
      v24 = std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this;
      if ( v68 )
      {
        LOBYTE(v22) = v68 != v67;
        v25 = *(__int64 (__fastcall **)())(*(_QWORD *)v68 + 32LL);
        if ( v25 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
        {
          if ( v68 != v67 )
            std::_Deallocate(v68, 1uLL, 0x10uLL);
        }
        else if ( (char *)v25 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this )
        {
          std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(
            v68,
            v22,
            std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this,
            std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this);
        }
        else
        {
          ((void (__fastcall *)(void *, __int64, __int64 (__fastcall *)(), __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))v25)(
            v68,
            v22,
            std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this,
            std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this);
        }
        v68 = 0LL;
      }
      v26 = v60;
      v27 = 0LL;
      v62 = 0LL;
      if ( v60 )
      {
        v28 = **(__int64 (__fastcall ***)())v60;
        if ( v28 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Copy )
        {
          v61[0] = off_18012BEC0;
          v27 = v61;
        }
        else
        {
          if ( (char *)v28 == (char *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move )
          {
            v50 = std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move(
                    v60,
                    v61,
                    v23);
          }
          else
          {
            v50 = ((__int64 (__fastcall *)(void *, _QWORD *, __int64 (__fastcall *)(), _QWORD))v28)(v60, v61, v23, v24);
            v26 = v60;
          }
          v27 = (_QWORD *)v50;
        }
        v62 = v27;
      }
      v29 = (__int64 *)a1[28];
      v30 = (__int64 *)a1[27];
      if ( v30 != v29 )
      {
        do
        {
          v31 = *v30;
          v57 = v31;
          if ( v31 )
            (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))(*(_QWORD *)v31 + 8LL))(
              v31,
              v22,
              v23,
              v24);
          lambda_530575f8b419a08780554bb070101504_::operator()((__int64)v61, &v57);
          ++v30;
        }
        while ( v30 != v29 );
        v26 = v60;
        v27 = v62;
      }
      v66 = 0LL;
      if ( !v27 )
      {
LABEL_45:
        if ( a1 != (__int64 *)-152LL )
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 19));
          v26 = v60;
        }
        if ( v26 )
        {
          LOBYTE(v22) = v26 != v59;
          v35 = *(__int64 (__fastcall **)())(*v26 + 32LL);
          if ( v35 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
          {
            if ( v26 != v59 )
              std::_Deallocate(v26, 1uLL, 0x10uLL);
          }
          else if ( (char *)v35 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this )
          {
            std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(v26, v22, v23, v24);
          }
          else
          {
            ((void (__fastcall *)(_QWORD *, __int64))v35)(v26, v22);
          }
          v60 = 0LL;
        }
        goto LABEL_52;
      }
      if ( v27 == v61 )
      {
        v32 = *(__int64 (__fastcall **)())(*v27 + 8LL);
        if ( v32 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Move )
        {
          v65[0] = off_18012BEC0;
          v33 = v65;
        }
        else if ( (char *)v32 == (char *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move )
        {
          v33 = (_QWORD *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move(
                            v27,
                            v65,
                            v23);
        }
        else
        {
          v33 = (_QWORD *)((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64 (__fastcall *)(), _QWORD))v32)(
                            v27,
                            v65,
                            v23,
                            v24);
        }
        v66 = v33;
        std::_Func_class<void,IAudioStreamInfo *>::_Tidy(v61);
        if ( !v62 )
        {
          v26 = v60;
          v27 = v66;
          goto LABEL_40;
        }
        v53 = v61;
        LOBYTE(v53) = v62 != v61;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v62 + 32LL))(v62, v53);
        v27 = v66;
        v26 = v60;
      }
      else
      {
        v66 = v27;
      }
      v62 = 0LL;
LABEL_40:
      if ( v27 )
      {
        LOBYTE(v22) = v27 != v65;
        v34 = *(__int64 (__fastcall **)())(*v27 + 32LL);
        if ( v34 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
        {
          if ( v27 != v65 )
          {
            std::_Deallocate(v27, 1uLL, 0x10uLL);
            v26 = v60;
          }
        }
        else
        {
          if ( (char *)v34 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this )
            std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(v27, v22, v23, v24);
          else
            ((void (__fastcall *)(_QWORD *, __int64))v34)(v27, v22);
          v26 = v60;
        }
        v66 = 0LL;
      }
      goto LABEL_45;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11,
      v54);
LABEL_114:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v56);
    goto LABEL_71;
  }
  if ( v7 == a2 )
  {
LABEL_70:
    v12 = 0;
    goto LABEL_71;
  }
  v12 = -2005139410;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D5,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)0x887C002ELL,
    v54);
LABEL_71:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v12;
}
