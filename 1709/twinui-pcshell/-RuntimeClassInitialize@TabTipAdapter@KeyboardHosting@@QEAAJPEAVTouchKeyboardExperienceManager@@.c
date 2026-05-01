/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801A1B48
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18019A160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004278 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800517B8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1801A15D4 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 *     ?GetDesktopUniqueName@@YAXPEBGPEAGK@Z @ 0x1801A18A0 (-GetDesktopUniqueName@@YAXPEBGPEAGK@Z.c)
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A23B0 (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1801A432C (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@UIDesktopKeyboardHostingPolicy@KeyboardHosting@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A5E40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyboardHos.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVTabTipAdapter@KeyboardHosting@@@Z @ 0x1801A5FE8 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTabTipAdapter@Ke.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1801AA5B4 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801BF07C (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801BF268 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall KeyboardHosting::TabTipAdapter::RuntimeClassInitialize(
        KeyboardHosting::TabTipAdapter *this,
        struct TouchKeyboardExperienceManager *a2,
        __int64 a3,
        const char *a4)
{
  KeyboardHosting::TabTipAdapterPolicy *v5; // rax
  int v6; // ebx
  volatile signed __int64 *v7; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  int ActivationFactory; // eax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rcx
  bool v28; // dl
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  KeyboardHosting::TabTipAdapter *v44; // [rsp+70h] [rbp-98h] BYREF
  __int128 v45; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  volatile signed __int64 *v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  HSTRING string; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING v52; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING_HEADER v53; // [rsp+D0h] [rbp-38h] BYREF
  char v54[528]; // [rsp+E8h] [rbp-20h] BYREF
  char v55[528]; // [rsp+2F8h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+540h] [rbp+438h]

  v47 = -2LL;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      a4);
    __debugbreak();
  }
  LODWORD(v41) = 0;
  v45 = 0LL;
  *((_QWORD *)this + 7) = a2;
  if ( *((_QWORD *)this + 12) )
  {
    *((_QWORD *)this + 12) = 0LL;
    ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::Release)();
  }
  *((_QWORD *)this + 12) = 0LL;
  v5 = (KeyboardHosting::TabTipAdapterPolicy *)operator new(0x1C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v6 = -2147024882;
LABEL_20:
    v10 = (unsigned int)v6;
    v11 = 61LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)v10);
    goto LABEL_84;
  }
  v7 = (volatile signed __int64 *)KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(v5);
  v48 = v7;
  v49 = 0LL;
  v6 = KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize((KeyboardHosting::TabTipAdapterPolicy *)v7);
  if ( v6 >= 0 )
  {
    if ( v7 )
    {
      v8 = *((_QWORD *)v7 + 9);
      v46 = v8;
      while ( v8 >= 0 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64(v7 + 9, v8 + 1, v8);
        if ( v9 == v8 )
          goto LABEL_16;
      }
      _InterlockedAdd((volatile signed __int32 *)(2 * v8 + 16), 1u);
    }
LABEL_16:
    *((_QWORD *)this + 12) = v7;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::Release(v7);
    v6 = 0;
  }
  else if ( v7 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v6 < 0 )
    goto LABEL_20;
  v12 = (_QWORD *)((char *)this + 80);
  v13 = *((_QWORD *)this + 10);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = CoreUICreate((char *)this + 80);
  v6 = v14;
  if ( v14 < 0 )
  {
    v11 = 63LL;
LABEL_33:
    v10 = (unsigned int)v14;
    goto LABEL_34;
  }
  v15 = (_QWORD *)((char *)this + 64);
  v16 = *((_QWORD *)this + 8);
  if ( v16 )
  {
    *v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v14 = CoreUIFactoryCreate((char *)this + 64);
  v6 = v14;
  if ( v14 < 0 )
  {
    v11 = 64LL;
    goto LABEL_33;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*v15 + 24LL))(
          *v15,
          &GUID_8b1dca19_456d_4f77_b1e3_0e88328842f9,
          &v41);
  v6 = v14;
  if ( v14 < 0 )
  {
    v11 = 68LL;
    goto LABEL_33;
  }
  v14 = SharedMessagePortRefPtr::Initialize(&v45);
  v6 = v14;
  if ( v14 < 0 )
  {
    v11 = 70LL;
    goto LABEL_33;
  }
  memset(v54, 0, 0x208uLL);
  GetDesktopUniqueName((char *)L"System\\RemoteTabTipAdapter", v54);
  v42 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v12 + 24LL))(*v12, &v42);
  v6 = v17;
  if ( v17 >= 0 )
  {
    v43 = 0LL;
    if ( (*(int (__fastcall **)(__int64, char *, __int64, __int64 *))(*(_QWORD *)v42 + 24LL))(v42, v54, 1LL, &v43) >= 0
      && v43 )
    {
      wil::details::in1diag3::Log_IfFailedMsg(
        retaddr,
        (void *)0x52,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL,
        (__int64)"Endpoint %s is already exists",
        v54);
      v19 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v42 + 48LL))(v42, v54, 1LL);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x53,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v19);
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 144LL))(*v12, v43);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x54,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v20);
      v43 = 0LL;
    }
    v21 = *v15;
    v22 = *((_QWORD *)this + 9);
    if ( v22 )
    {
      *((_QWORD *)this + 9) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, char *, _QWORD, char *))(*(_QWORD *)v21 + 32LL))(
            v21,
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
            0LL,
            (unsigned int)v41,
            v54,
            *((_QWORD *)&v45 + 1),
            (char *)this + 72);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 94LL;
      goto LABEL_50;
    }
    SharedMessagePortRefPtr::Release((SharedMessagePortRefPtr *)&v45);
    memset(v55, 0, 0x208uLL);
    GetDesktopUniqueName((char *)L"System\\RemoteTabTipPolicy", v55);
    v44 = this;
    v17 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],KeyboardHosting::TabTipAdapter *>(
            (char *)this + 48,
            v23,
            v55,
            &v44);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 106LL;
      goto LABEL_50;
    }
    v40 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.UI.Internal.Text.Core.CoreKeyboardManager",
           0x31u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_4781e102_173f_40ee_b985_685f98a866aa, &v40);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v25 = 111LL;
LABEL_63:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v25,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_80:
      v36 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      goto LABEL_82;
    }
    v26 = v40;
    v27 = *((_QWORD *)this + 3);
    if ( v27 )
    {
      *((_QWORD *)this + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 48LL))(v26, (char *)this + 24);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v25 = 112LL;
      goto LABEL_63;
    }
    ActivationFactory = KeyboardHosting::TabTipAdapter::AddEventHandlersFromCoreKeyboardManager(this);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v25 = 113LL;
      goto LABEL_63;
    }
    ActivationFactory = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v28, 0);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v25 = 116LL;
      goto LABEL_63;
    }
    v39 = 0LL;
    if ( WindowsCreateStringReference(L"Windows.UI.Internal.Text.Core.CoreInputViewManager", 0x32u, &v53, &v52) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v29 = RoGetActivationFactory(v52, &GUID_6fa49ca9_046b_4d5c_b942_7dbc066f6579, &v39);
    v6 = v29;
    if ( v29 >= 0 )
    {
      v31 = v39;
      v32 = *((_QWORD *)this + 4);
      if ( v32 )
      {
        *((_QWORD *)this + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 48LL))(v31, (char *)this + 32);
      v6 = v29;
      if ( v29 >= 0 )
      {
        v33 = *v12;
        v34 = *((_QWORD *)this + 11);
        if ( v34 )
        {
          *((_QWORD *)this + 11) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        v29 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), KeyboardHosting::TabTipAdapter *, char *))(*(_QWORD *)v33 + 120LL))(
                v33,
                KeyboardHosting::TabTipAdapter::TimerDeferredShowRequestCallback,
                this,
                (char *)this + 88);
        v6 = v29;
        if ( v29 >= 0 )
        {
          v6 = 0;
LABEL_78:
          v35 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
          }
          goto LABEL_80;
        }
        v30 = 128LL;
      }
      else
      {
        v30 = 123LL;
      }
    }
    else
    {
      v30 = 122LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v30,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_78;
  }
  v18 = 77LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v17);
LABEL_82:
  v37 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
LABEL_84:
  SharedMessagePortRefPtr::Release((SharedMessagePortRefPtr *)&v45);
  return (unsigned int)v6;
}
