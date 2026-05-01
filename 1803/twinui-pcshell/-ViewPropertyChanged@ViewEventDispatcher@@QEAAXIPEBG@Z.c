/*
 * XREFs of ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x180035190
 * Callers:
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180054F60 (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092008 (--4-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F755C (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??1?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAF14 (--1-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall ViewEventDispatcher::ViewPropertyChanged(RTL_SRWLOCK *this, int a2, const unsigned __int16 *a3)
{
  const WCHAR *v3; // r13
  RTL_SRWLOCK *v6; // rbx
  _DWORD *v7; // rcx
  unsigned int (__fastcall *v8)(ViewWrapperBase *__hidden); // rax
  int v9; // eax
  HSTRING *v10; // rdi
  char v11; // al
  HSTRING *i; // rbx
  _QWORD *v13; // rbx
  HSTRING *v14; // rcx
  int v15; // eax
  HSTRING *v16; // r12
  __int64 (__fastcall *v17)(ViewWrapperBase *__hidden, HSTRING *); // rax
  HRESULT v18; // eax
  unsigned __int64 v19; // r15
  const unsigned __int16 *(__fastcall *v20)(ViewWrapperBase *__hidden); // rax
  volatile signed __int32 *v21; // rbx
  __int64 v22; // r13
  UINT32 StringLen; // esi
  const WCHAR *v24; // rax
  UINT32 v25; // esi
  const WCHAR *v26; // rax
  volatile signed __int32 **v27; // rdx
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rcx
  HSTRING *v30; // rcx
  __int64 (__fastcall *v31)(void *); // rax
  _QWORD *v32; // rbx
  HSTRING v33; // rcx
  HSTRING v34; // rcx
  wil::details::in1diag3 *v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rbx
  _QWORD *v38; // rsi
  __int64 v39; // rcx
  LPUNKNOWN v40; // rcx
  _QWORD *v41; // rdi
  _QWORD *v42; // r14
  void (*v43)(void); // rax
  LPCWCH v44; // rax
  HSTRING v45; // rcx
  volatile int *v46; // rdx
  unsigned int (__fastcall *v47)(__int64); // rax
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  signed __int64 v50; // rax
  unsigned int v51; // ecx
  signed __int64 v52; // rtt
  wil::details::in1diag3 *v53; // rcx
  HSTRING v54; // rbx
  __int64 v55; // rcx
  wil::details::in1diag3 *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  HSTRING *v59; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-C8h]
  HSTRING newString; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+38h] [rbp-B0h] BYREF
  LPCWCH StringRawBuffer; // [rsp+40h] [rbp-A8h] BYREF
  HSTRING *v64; // [rsp+48h] [rbp-A0h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v66; // [rsp+58h] [rbp-90h] BYREF
  _QWORD *v67; // [rsp+60h] [rbp-88h] BYREF
  _QWORD *v68; // [rsp+68h] [rbp-80h]
  LPCWCH lpString2; // [rsp+70h] [rbp-78h] BYREF
  void *v70; // [rsp+78h] [rbp-70h] BYREF
  RTL_SRWLOCK *v71; // [rsp+80h] [rbp-68h]
  PSRWLOCK SRWLock; // [rsp+88h] [rbp-60h]
  __int64 v73; // [rsp+90h] [rbp-58h]
  __int64 v74; // [rsp+98h] [rbp-50h]
  HSTRING v75; // [rsp+A0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  HSTRING *v77; // [rsp+F0h] [rbp+8h]
  char v78; // [rsp+F8h] [rbp+10h]
  HSTRING *v80; // [rsp+108h] [rbp+20h] BYREF

  v73 = -2LL;
  v3 = a3;
  try
  {
    v80 = 0LL;
    v16 = 0LL;
    v77 = 0LL;
    v6 = this + 37;
    v71 = this + 37;
    AcquireSRWLockShared(this + 37);
    SRWLock = v6;
    v74 = 0LL;
    v10 = 0LL;
    for ( i = 0LL; i < this[47].Ptr; i = (HSTRING *)((char *)i + 1) )
    {
      v7 = (_DWORD *)*((_QWORD *)this[46].Ptr + (_QWORD)i);
      v8 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v7 + 592LL);
      if ( v8 == ViewWrapperBase::GetViewInstanceId )
        v9 = v7[35];
      else
        v9 = ((__int64 (__fastcall *)(_DWORD *, unsigned int (__fastcall *)(ViewWrapperBase *__hidden)))v8)(
               v7,
               ViewWrapperBase::GetViewInstanceId);
      if ( v9 == a2 )
      {
        v10 = i;
        v11 = 1;
        goto LABEL_10;
      }
    }
    v11 = 0;
LABEL_10:
    if ( !v11 )
    {
      v19 = -1LL;
      goto LABEL_63;
    }
    v13 = (char *)this[46].Ptr + 8 * (_QWORD)v10;
    v14 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*((void (__fastcall **)(HSTRING *, unsigned int (__fastcall *)(ViewWrapperBase *__hidden)))*v14 + 2))(
        v14,
        ViewWrapperBase::GetViewInstanceId);
    }
    v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, HSTRING **))*v13)(
            *v13,
            &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f,
            &v80);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2D9,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v15,
        bIgnoreCase);
      goto LABEL_123;
    }
    v10 = v80;
    v16 = 0LL;
    v77 = 0LL;
    newString = 0LL;
    v17 = (__int64 (__fastcall *)(ViewWrapperBase *__hidden, HSTRING *))*((_QWORD *)*v80 + 7);
    if ( v17 == ViewWrapperBase::get_AppUserModelId )
    {
      v18 = WindowsDuplicateString(v80[18], &newString);
      LODWORD(v13) = v18;
      if ( v18 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x454,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)v18,
          bIgnoreCase);
    }
    else
    {
      LODWORD(v13) = v17((ViewWrapperBase *)v80, &newString);
    }
    if ( (int)v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xABE,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        bIgnoreCase);
      Windows::Internal::String::~String((Windows::Internal::String *)&newString);
      v19 = -1LL;
      goto LABEL_60;
    }
    v20 = (const unsigned __int16 *(__fastcall *)(ViewWrapperBase *__hidden))*((_QWORD *)*v10 + 75);
    if ( v20 == ViewWrapperBase::GetExperienceId )
      StringRawBuffer = WindowsGetStringRawBuffer(v10[19], 0LL);
    else
      StringRawBuffer = v20((ViewWrapperBase *)v10);
    lpString2 = WindowsGetStringRawBuffer(newString, 0LL);
    v16 = 0LL;
    v77 = 0LL;
    v10 = 0LL;
    v64 = 0LL;
    v21 = 0LL;
    v70 = 0LL;
    v22 = 0LL;
    v19 = -1LL;
    if ( !this[43].Ptr )
    {
LABEL_39:
      if ( v10 != (HSTRING *)v21 )
      {
        if ( v21 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        v30 = v10;
        v10 = (HSTRING *)v21;
        v64 = (HSTRING *)v21;
        if ( v30 )
          (*((void (__fastcall **)(HSTRING *))*v30 + 2))(v30);
      }
      if ( v10 )
        goto LABEL_46;
      Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v70);
      Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v64);
      LODWORD(v13) = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC3,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)0x80070490LL,
        bIgnoreCase);
      Windows::Internal::String::~String((Windows::Internal::String *)&newString);
LABEL_59:
      v3 = a3;
LABEL_60:
      v35 = retaddr;
      if ( (int)v13 >= 0 )
      {
LABEL_63:
        if ( v71 )
          ReleaseSRWLockShared(SRWLock);
        if ( !v16 )
          goto LABEL_118;
        v68 = 0LL;
        v36 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
        v37 = v36;
        v67 = v36;
        if ( !v36 )
        {
          Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v67);
          LODWORD(v10) = -2147024882;
          goto LABEL_107;
        }
        v38 = v36 + 1;
        v36[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        v36[4] = 0LL;
        ppunkMarshal = 0LL;
        if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
        {
          v39 = v38[3];
          if ( v39 )
          {
            v38[3] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          }
          ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
            ppunkMarshal,
            &GUID_00000003_0000_0000_c000_000000000046,
            v38 + 3);
        }
        v40 = ppunkMarshal;
        if ( ppunkMarshal )
        {
          ppunkMarshal = 0LL;
          ((void (__fastcall *)(LPUNKNOWN))v40->lpVtbl->Release)(v40);
        }
        v37[7] = 0LL;
        v37[11] = 1LL;
        *v37 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
        *v38 = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        v41 = v37 + 8;
        v37[8] = &ViewEventArgsForPropertyChanged::`vftable'{for `IWeakReferenceSource'};
        v42 = v37 + 9;
        v37[9] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v43 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
          if ( (char *)v43 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          {
            _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
            v16 = v77;
            v37 = v67;
          }
          else
          {
            v43();
          }
        }
        *v37 = &ViewEventArgsForPropertyChanged::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
        *v38 = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        *v41 = &ViewEventArgsForPropertyChanged::`vftable'{for `IWeakReferenceSource'};
        *v42 = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>'};
        v37[12] = 0LL;
        v66 = v37;
        v67 = 0LL;
        *((_DWORD *)v37 + 12) = 5;
        if ( v37[7] )
        {
          StringRawBuffer = 0LL;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&StringRawBuffer);
          StringRawBuffer = (LPCWCH)v37[7];
          v37[7] = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
        }
        if ( v3 )
        {
          v44 = 0LL;
          lpString2 = 0LL;
          do
            ++v19;
          while ( v3[v19] );
          if ( v19 > 0xFFFFFFFF )
          {
            LODWORD(v10) = -2147024362;
          }
          else
          {
            LODWORD(v10) = WindowsCreateString(v3, v19, (HSTRING *)&lpString2);
            v44 = lpString2;
          }
          if ( (int)v10 >= 0 )
          {
            v45 = (HSTRING)v37[12];
            v37[12] = v44;
            WindowsDeleteString(v45);
            v68 = v37;
            v47 = *(unsigned int (__fastcall **)(__int64))(*v37 + 8LL);
            if ( v47 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::AddRef )
            {
              v48 = v37[11];
              while ( v48 >= 0 )
              {
                if ( (_DWORD)v48 != 0x7FFFFFFF )
                {
                  v49 = v48;
                  v48 = _InterlockedCompareExchange64(v37 + 11, v48 + 1, v48);
                  if ( v49 != v48 )
                    continue;
                }
                v37 = v66;
                goto LABEL_95;
              }
              Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v48 + 16));
              v37 = v66;
            }
            else
            {
              v47((__int64)v37);
            }
LABEL_95:
            v50 = v37[11];
            while ( v50 >= 0 )
            {
              if ( (_DWORD)v50 == 0x7FFFFFFF )
                goto LABEL_104;
              v51 = v50 - 1;
              v52 = v50;
              v50 = _InterlockedCompareExchange64(v37 + 11, v50 - 1, v50);
              if ( v52 == v50 )
                goto LABEL_101;
            }
            v51 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v50 + 16), v46);
LABEL_101:
            if ( !v51 )
            {
              (*(void (__fastcall **)(_QWORD *, __int64))(*v66 + 64LL))(v66, 1LL);
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
            }
LABEL_104:
            LODWORD(v10) = 0;
            v16 = v77;
LABEL_107:
            v53 = retaddr;
            if ( (int)v10 >= 0 )
            {
              v62 = 0LL;
              v54 = v16[4];
              v75 = v54;
              if ( v54 )
              {
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v54 + 8LL))(v54);
                LODWORD(v10) = (*(__int64 (__fastcall **)(HSTRING, GUID *, __int64 *))(*(_QWORD *)v54 + 24LL))(
                                 v54,
                                 &GUID_d1b9407f_a351_5319_bce5_178ee5585391,
                                 &v62);
                v55 = v62;
              }
              else
              {
                v55 = 0LL;
                v62 = 0LL;
                LODWORD(v10) = -2147024809;
              }
              if ( v54 )
              {
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v54 + 16LL))(v54);
                v55 = v62;
              }
              v56 = retaddr;
              if ( (int)v10 >= 0 )
              {
                (*(void (__fastcall **)(__int64, HSTRING *, _QWORD *))(*(_QWORD *)v55 + 24LL))(v55, v80, v68);
                v57 = v62;
                if ( v62 )
                {
                  v62 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
                }
                v58 = v68;
                if ( v68 )
                {
                  v68 = 0LL;
                  (*(void (__fastcall **)(_QWORD *))(*v58 + 16LL))(v58);
                }
LABEL_118:
                if ( v16 )
                  (*((void (__fastcall **)(HSTRING *))*v16 + 2))(v16);
                v59 = v80;
                if ( v80 )
                {
                  v80 = 0LL;
                  (*((void (__fastcall **)(HSTRING *))*v59 + 2))(v59);
                }
                return;
              }
LABEL_125:
              wil::details::in1diag3::Throw_Hr(
                v56,
                (void *)0x2E5,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                (const char *)(unsigned int)v10,
                bIgnoreCase);
              JUMPOUT(0x180035B29LL);
            }
LABEL_124:
            wil::details::in1diag3::Throw_Hr(
              v53,
              (void *)0x2E2,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)v10,
              bIgnoreCase);
            goto LABEL_125;
          }
        }
        else
        {
          LODWORD(v10) = -2147467261;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10A,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
          (const char *)(unsigned int)v10,
          bIgnoreCase);
        Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::~ComPtr<ViewEventArgsForPropertyChanged>(&v66);
        Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v67);
        goto LABEL_107;
      }
LABEL_123:
      wil::details::in1diag3::Throw_Hr(
        v35,
        (void *)0x2DA,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        bIgnoreCase);
      goto LABEL_124;
    }
    while ( 1 )
    {
      if ( !WindowsIsStringEmpty(*(HSTRING *)(*((_QWORD *)this[42].Ptr + v22) + 8LL)) || v21 )
      {
        v78 = 0;
        StringLen = WindowsGetStringLen(*(HSTRING *)(*((_QWORD *)this[42].Ptr + v22) + 8LL));
        v24 = WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)this[42].Ptr + v22) + 8LL), 0LL);
        if ( CompareStringOrdinal(v24, StringLen, lpString2, -1, 1) != 2 )
          goto LABEL_36;
      }
      else
      {
        v78 = 1;
      }
      if ( WindowsIsStringEmpty(*(HSTRING *)(*((_QWORD *)this[42].Ptr + v22) + 16LL))
        || (v25 = WindowsGetStringLen(*(HSTRING *)(*((_QWORD *)this[42].Ptr + v22) + 16LL)),
            v26 = WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)this[42].Ptr + v22) + 16LL), 0LL),
            CompareStringOrdinal(v26, v25, StringRawBuffer, -1, 0) == 2) )
      {
        v27 = (volatile signed __int32 **)((char *)this[42].Ptr + 8 * v22);
        if ( !v78 )
        {
          Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::operator=(&v64, v27);
          v10 = v64;
          if ( !v64 )
            goto LABEL_39;
LABEL_46:
          v16 = v10;
          v77 = v10;
          if ( v21 )
          {
            v31 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL);
            if ( v31 == CRefCountedObject<ViewEventRegistration>::Release )
            {
              if ( _InterlockedExchangeAdd(v21 + 12, 0xFFFFFFFF) == 1 )
              {
                v32 = v70;
                Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v70 + 4);
                v33 = (HSTRING)v32[2];
                if ( v33 )
                  WindowsDeleteString(v33);
                v34 = (HSTRING)v32[1];
                if ( v34 )
                  WindowsDeleteString(v34);
                operator delete(v32, (const struct std::nothrow_t *)0x38);
              }
              v16 = v10;
            }
            else
            {
              v31((void *)v21);
            }
          }
          if ( newString )
            WindowsDeleteString(newString);
          LODWORD(v13) = 0;
          goto LABEL_59;
        }
        v28 = *v27;
        if ( v21 != *v27 )
        {
          if ( v28 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(*v27);
          v29 = v21;
          v21 = v28;
          v70 = (void *)v28;
          if ( v29 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
LABEL_36:
      if ( (PVOID)++v22 >= this[43].Ptr )
        goto LABEL_39;
    }
  }
  catch ( ... )
  {
  }
}
