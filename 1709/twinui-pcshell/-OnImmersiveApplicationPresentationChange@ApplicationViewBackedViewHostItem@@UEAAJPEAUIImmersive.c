/*
 * XREFs of ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x18010F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___ @ 0x1800A956C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B2E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPres.c)
 *     ??$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEAPEAVApplicationViewBackedViewHostItem@@$$QEAPEAVPresentationReadyChangedEventArgs@@@Z @ 0x18010A07C (--$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$As.c)
 *     ??0PresentationReadyChangedEventArgs@@QEAA@XZ @ 0x18010B3BC (--0PresentationReadyChangedEventArgs@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::OnImmersiveApplicationPresentationChange(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // edi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  volatile signed __int32 *Ptr; // rbx
  int v10; // eax
  BOOL v11; // ebx
  PresentationReadyChangedEventArgs *v12; // rax
  PresentationReadyChangedEventArgs *v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  volatile signed __int64 *v19; // rcx
  volatile signed __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // rcx
  RTL_SRWLOCK *v24; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  signed __int64 v26; // [rsp+30h] [rbp-40h]
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v29; // [rsp+50h] [rbp-20h]
  __int128 v30; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v32; // [rsp+90h] [rbp+20h] BYREF
  __int64 v33; // [rsp+98h] [rbp+28h]
  __int64 v34; // [rsp+A8h] [rbp+38h] BYREF

  v28[1] = -2LL;
  v32 = 0;
  if ( (*(int (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)a2 + 104LL))(a2, a1[11].Ptr, &v32) < 0 || !v32 )
    return 0LL;
  v34 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(PVOID, GUID *, __int64 *))a1[11].Ptr)(
         a1[11].Ptr,
         &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
         &v34);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v25 = 0LL;
        v24 = a1 - 4;
        *(_QWORD *)&v29 = &v24;
        *((_QWORD *)&v29 + 1) = &v25;
        Ptr = 0LL;
        AcquireSRWLockExclusive(a1 + 47);
        if ( a1[46].Ptr )
        {
          Ptr = (volatile signed __int32 *)a1[46].Ptr;
          _InterlockedIncrement(Ptr + 3);
        }
        if ( a1 != (RTL_SRWLOCK *)-376LL )
          ReleaseSRWLockExclusive(a1 + 47);
        if ( Ptr )
        {
          v30 = v29;
          v6 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___(
                 (_QWORD **)&v30,
                 (__int64)Ptr,
                 (__int64)&a1[46]);
          if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
          if ( (v6 & 0x80000000) != 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x15E1,
              (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
              (const char *)v6);
            v7 = v6;
            v8 = 644LL;
            goto LABEL_5;
          }
        }
      }
      goto LABEL_34;
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
    v11 = v10 != 0;
    if ( v10 )
    {
      v33 = 0LL;
      v12 = (PresentationReadyChangedEventArgs *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( !v12 )
      {
        v6 = -2147024882;
        v17 = 2147942414LL;
        v18 = 634LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
          (const char *)v17);
        v20 = (volatile signed __int64 *)v33;
        if ( v33 )
        {
          v33 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(v20);
        }
        goto LABEL_31;
      }
      v13 = PresentationReadyChangedEventArgs::PresentationReadyChangedEventArgs(v12);
      *((_BYTE *)v13 + 80) = v11;
      v26 = *((_QWORD *)v13 + 9);
      v14 = v26;
      while ( v14 >= 0 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 9, v14 + 1, v14);
        if ( v15 == v14 )
          goto LABEL_24;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v14 + 16));
LABEL_24:
      v33 = (__int64)v13;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release((volatile signed __int64 *)v13);
      v27 = v33;
      v28[0] = (__int64)&a1[-4];
      v16 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem *,PresentationReadyChangedEventArgs *>(
              a1 + 28,
              v28,
              &v27);
      v6 = v16;
      if ( v16 < 0 )
      {
        v17 = (unsigned int)v16;
        v18 = 635LL;
        goto LABEL_29;
      }
      v19 = (volatile signed __int64 *)v33;
      if ( v33 )
      {
        v33 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(v19);
      }
    }
LABEL_34:
    v23 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return 0LL;
  }
  v7 = (unsigned int)v5;
  v8 = 617LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)v7);
LABEL_31:
  v21 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v6;
}
