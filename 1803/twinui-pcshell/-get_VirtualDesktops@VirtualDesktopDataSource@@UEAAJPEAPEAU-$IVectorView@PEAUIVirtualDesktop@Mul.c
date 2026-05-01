/*
 * XREFs of ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18025FC60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801AC368 (--0-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??0?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x18025CA08 (--0-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@QEAA@QEAV1@I@Z @ 0x18025CAA0 (--0Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ @ 0x18025D66C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18025DE44 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktopDataSource::get_VirtualDesktops(RTL_SRWLOCK *this, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // r14
  PVOID Ptr; // rbx
  unsigned int v6; // ebx
  int v7; // eax
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v8; // rdi
  void *v9; // rax
  char v10; // dl
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v11; // rsi
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  struct IVirtualDesktop *v14; // rbx
  int WinRTDesktopForInternalDesktopInternal; // eax
  int v16; // eax
  __int64 v17; // rdx
  void *v19; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+38h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  struct IVirtualDesktop *v22[2]; // [rsp+48h] [rbp-28h] BYREF
  int v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v26; // [rsp+B0h] [rbp+40h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v27; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+50h] BYREF
  struct IVirtualDesktop *v29; // [rsp+C8h] [rbp+58h] BYREF

  *a2 = 0LL;
  v4 = this + 40;
  AcquireSRWLockShared(this + 40);
  Ptr = this[14].Ptr;
  if ( Ptr )
  {
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v28);
    v7 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 56LL))(Ptr, &v28);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      v8 = 0LL;
      v27 = 0LL;
      v26 = 0LL;
      v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = 0LL;
      if ( v9 )
      {
        v11 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>(
                                                                                            (__int64)v9,
                                                                                            v10);
        v26 = v11;
      }
      v6 = v11 == 0LL ? 0x8007000E : 0;
      if ( v11 )
      {
        v26 = 0LL;
        v8 = v11;
        v27 = v11;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      if ( v11 )
      {
        ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(
          (__int64)&v19,
          v28);
        ObjectArrayAdapter<IVirtualDesktop>::Iterator::Iterator((__int64)&v21, (__int64)&v19, 0);
        ObjectArrayAdapter<IVirtualDesktop>::Iterator::Iterator((__int64)&v23, (__int64)&v19, v20);
        while ( (_DWORD)v21 != v23 || v22[1] != (struct IVirtualDesktop *)v24[1] )
        {
          v14 = v22[0];
          v29 = v22[0];
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v29);
          v26 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
          WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                                     (struct IThumbnailDeviceSource **)this,
                                                     v14,
                                                     &v26);
          v6 = WinRTDesktopForInternalDesktopInternal;
          if ( WinRTDesktopForInternalDesktopInternal < 0 )
          {
            v17 = 198LL;
            goto LABEL_22;
          }
          WinRTDesktopForInternalDesktopInternal = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v8 + 104LL))(
                                                     v8,
                                                     v26);
          v6 = WinRTDesktopForInternalDesktopInternal;
          if ( WinRTDesktopForInternalDesktopInternal < 0 )
          {
            v17 = 199LL;
LABEL_22:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
              (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
            Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
            goto LABEL_23;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
          LODWORD(v21) = v21 + 1;
          ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v21);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
        v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, _QWORD *))(*(_QWORD *)v8 + 64LL))(
                v8,
                a2);
        v6 = v16;
        if ( v16 >= 0 )
          goto LABEL_23;
        v12 = (unsigned int)v16;
        v13 = 202LL;
      }
      else
      {
        v12 = v6;
        v13 = 193LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)v12);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v28);
  }
  else
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
