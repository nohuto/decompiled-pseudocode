/*
 * XREFs of ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x180081810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010768 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010804 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x1800439E0 (-GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_G.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008CBD0 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F6244 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F62AC (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param_ea_1800F62AC.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x18012AAB8 (-StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18012BC80 (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::OnCommand(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  signed int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // r11
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  unsigned __int64 v14; // r10
  __int64 v15; // rbx
  __int64 v16; // r11
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  struct IApplicationFrameProxy *v19; // rbx
  signed __int64 v20; // rax
  unsigned int v21; // ecx
  signed __int64 v22; // rtt
  CApplicationManager *v23; // rcx
  __int64 (__fastcall *v24)(CApplicationManager *, struct IApplicationFrameProxy *, const struct _GUID *, void **); // rax
  signed int ApplicationByFrameProxyInternal; // eax
  int v26; // eax
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  BOOL v31; // edi
  int v32; // eax
  RTL_SRWLOCK *v33; // rbx
  void *v34; // rcx
  void *v36; // rcx
  int v37; // [rsp+28h] [rbp-E0h]
  void *v38; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationFrameProxy *v39; // [rsp+40h] [rbp-C8h]
  __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h]
  _QWORD v42[3]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v43[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v42[1] = -2LL;
  if ( !*((_QWORD *)this + 17) )
    return 0LL;
  v38 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v42);
  if ( v5 < 0 )
    goto LABEL_129;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v39 = 0LL;
  v7 = v42[0];
  v8 = 0LL;
  v41 = 0LL;
  v5 = -2147023728;
  v9 = 0LL;
  do
  {
    if ( v9 >= *((_QWORD *)this + 12) )
      break;
    v10 = *((_QWORD *)this + 11);
    v6 = *(_QWORD *)(v10 + 8 * v9);
    v11 = *(_QWORD *)(v6 + 88);
    v5 = v7 != v11 ? 0x80070490 : 0;
    if ( v11 == v7 )
    {
      if ( v6 )
      {
        v12 = *(_QWORD *)(v6 + 72);
        while ( v12 >= 0 )
        {
          if ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 72), v12 + 1, v12);
            if ( v13 != v12 )
              continue;
          }
          goto LABEL_13;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v12 + 16));
      }
LABEL_13:
      v8 = *(_QWORD *)(v10 + 8 * v9);
      v41 = v8;
    }
    ++v9;
  }
  while ( v11 != v7 );
  v14 = 0LL;
  if ( v5 < 0 )
  {
    do
    {
      if ( v14 >= *((_QWORD *)this + 8) )
        break;
      v15 = *((_QWORD *)this + 7);
      v6 = *(_QWORD *)(v15 + 8 * v14);
      v16 = *(_QWORD *)(v6 + 88);
      v5 = v7 != v16 ? 0x80070490 : 0;
      if ( v16 == v7 )
      {
        if ( v6 )
        {
          v17 = *(_QWORD *)(v6 + 72);
          while ( v17 >= 0 )
          {
            if ( (_DWORD)v17 != 0x7FFFFFFF )
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 72), v17 + 1, v17);
              if ( v18 != v17 )
                continue;
            }
            goto LABEL_25;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
        }
LABEL_25:
        v8 = *(_QWORD *)(v15 + 8 * v14);
        v41 = v8;
      }
      ++v14;
    }
    while ( v16 != v7 );
  }
  if ( v5 < 0 )
  {
    v19 = v39;
  }
  else
  {
    v19 = (struct IApplicationFrameProxy *)(v8 + 8);
    v39 = (struct IApplicationFrameProxy *)(v8 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 8LL))(v8 + 8);
    v5 = 0;
  }
  if ( v8 )
  {
    v20 = *(_QWORD *)(v8 + 72);
    while ( v20 >= 0 )
    {
      if ( (_DWORD)v20 == 0x7FFFFFFF )
        goto LABEL_40;
      v21 = v20 - 1;
      v22 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 72), v20 - 1, v20);
      if ( v22 == v20 )
        goto LABEL_37;
    }
    v21 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
            (Microsoft::WRL::Details *)(2 * v20 + 16),
            (volatile int *)v6);
LABEL_37:
    if ( !v21 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 48LL))(v41, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
LABEL_40:
    v19 = v39;
  }
  if ( v5 >= 0 )
  {
    v23 = (CApplicationManager *)*((_QWORD *)this + 15);
    v24 = *(__int64 (__fastcall **)(CApplicationManager *, struct IApplicationFrameProxy *, const struct _GUID *, void **))(*(_QWORD *)v23 + 48LL);
    if ( v24 == CApplicationManager::GetApplicationByFrameProxyInternal )
      ApplicationByFrameProxyInternal = CApplicationManager::GetApplicationByFrameProxyInternal(
                                          v23,
                                          v19,
                                          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                          &v38);
    else
      ApplicationByFrameProxyInternal = v24(v23, v19, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v38);
    v5 = ApplicationByFrameProxyInternal;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v19 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v5 < 0 )
  {
LABEL_129:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D2,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)(unsigned int)v5,
      v37);
  }
  else
  {
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand && *(_QWORD *)a3->Data4 == 0x575B26E93947F081LL )
    {
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v43);
      v43[0] = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
      CAppManagerTelemetry::TitleBarButtonCloseRequested::StartActivity((CAppManagerTelemetry::TitleBarButtonCloseRequested *)v43);
      v26 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 112LL))(
              *((_QWORD *)this + 17),
              v38,
              1LL);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D7,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v26,
          v37);
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((CFramePresentationTelemetry::SetSystemVisual *)v43);
      v43[0] = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((CFramePresentationTelemetry::SetSystemVisual *)v43);
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v43);
      goto LABEL_126;
    }
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameMinimizeCommand && *(_QWORD *)a3->Data4 == 0x68800BB0DB37499ALL )
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 120LL))(
              *((_QWORD *)this + 17),
              v38,
              1LL);
      v28 = retaddr;
      if ( v27 >= 0 )
        goto LABEL_126;
      v29 = 988LL;
      goto LABEL_120;
    }
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameRestoreCommand && *(_QWORD *)a3->Data4 == 0x43C1CD8F609CB0B9LL
      || *(_QWORD *)&a3->Data1 == ApplicationFrameMaximizeCommand && *(_QWORD *)a3->Data4 == 0xBAF459B87B7D7FADuLL )
    {
      goto LABEL_126;
    }
    v30 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v30 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    if ( v30
      && (*(_QWORD *)&a3->Data1 != ApplicationFrameExitedSizeMoveCommand || *(_QWORD *)a3->Data4 != 0x789E03E893229A8ALL) )
    {
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameActionsCommand && *(_QWORD *)a3->Data4 == 0xAD274CE2F92C9EA7uLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 24LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1013LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAppBarCommand && *(_QWORD *)a3->Data4 == 0xD4BDEDDB69037AABuLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 32LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1017LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSearchCommand && *(_QWORD *)a3->Data4 == 0xCC3A288AB9231881uLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 40LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1021LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameShareCommand && *(_QWORD *)a3->Data4 == 0x53BF8027BA4C1EABLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 48LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1025LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFramePrintCommand && *(_QWORD *)a3->Data4 == 0xE4859AF16A55A58EuLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 56LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1029LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameTapAndSendCommand
             && *(_QWORD *)a3->Data4 == 0xEE886DAE545B1C9BuLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 64LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1033LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSettingsCommand && *(_QWORD *)a3->Data4 == 0xE24967B55ED51BCLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 72LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1037LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameFullScreenCommand
             && *(_QWORD *)a3->Data4 == 0x30269B0F10A7889FLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 80LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1041LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitFullScreenCommand
             && *(_QWORD *)a3->Data4 == 0xB2E04A65B7B0C7B7uLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 104LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1045LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAnnotateCommand && *(_QWORD *)a3->Data4 == 0x400BB63ABEA97CA4LL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 88LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1049LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameBackCommand && *(_QWORD *)a3->Data4 == 0x37530565A7963B8FLL )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 17) + 96LL))(
                *((_QWORD *)this + 17),
                v38,
                1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1053LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSnapLeftCommand && *(_QWORD *)a3->Data4 == 0x255BC252F81743AELL )
      {
        v27 = CApplicationFrameService::_SnapApplicationToLocation((char *)this - 48, v38, 0LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1057LL;
      }
      else
      {
        if ( *(_QWORD *)&a3->Data1 != ApplicationFrameSnapRightCommand )
          goto LABEL_126;
        if ( *(_QWORD *)a3->Data4 != 0x55331EAB62563487LL )
          goto LABEL_126;
        v27 = CApplicationFrameService::_SnapApplicationToLocation((char *)this - 48, v38, 1LL);
        v28 = retaddr;
        if ( v27 >= 0 )
          goto LABEL_126;
        v29 = 1061LL;
      }
LABEL_120:
      wil::details::in1diag3::_Log_Hr(
        v28,
        (void *)v29,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)(unsigned int)v27,
        v37);
LABEL_126:
      v34 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
      }
      return 0LL;
    }
    v31 = v30 == 0;
    v40 = 0LL;
    v32 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v38, &v40);
    v5 = v32;
    if ( v32 >= 0 )
    {
      v33 = CApplicationManagerUtility::g_pIAMGlobals;
      v42[2] = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(__int64, BOOL))(*(_QWORD *)v40 + 608LL))(v40, v31);
      if ( v33 )
        ReleaseSRWLockExclusive(v33);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
      goto LABEL_126;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3EE,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)(unsigned int)v32,
      v37);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
  }
  v36 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v36 + 16LL))(v36);
  }
  return (unsigned int)v5;
}
