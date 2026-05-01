/*
 * XREFs of ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18025DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801AC368 (--0-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailDeviceSource@@@Z @ 0x18025BDBC (--$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@Z @ 0x18025C0BC (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     ??$emplace@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@_N@1@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@45@@Z @ 0x18025C7A0 (--$emplace@AEAV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV-$ComPtr@UIVirtualDesktop@Multitas.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@QEAA@QEAV1@I@Z @ 0x18025CAA0 (--0Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ @ 0x18025D66C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x18025EEBC (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 *     ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18026287C (-VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktopDataSource::Initialize(
        VirtualDesktopDataSource *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3)
{
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  struct IVirtualDesktop *v11; // rbx
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  struct _GUID *v15; // [rsp+20h] [rbp-B8h]
  void *v16; // [rsp+30h] [rbp-A8h] BYREF
  struct IVirtualDesktop *v17; // [rsp+38h] [rbp-A0h] BYREF
  void *v18; // [rsp+40h] [rbp-98h] BYREF
  int v19; // [rsp+48h] [rbp-90h]
  __int64 v20; // [rsp+50h] [rbp-88h] BYREF
  struct IVirtualDesktop *v21[2]; // [rsp+58h] [rbp-80h] BYREF
  RTL_SRWLOCK *v22; // [rsp+68h] [rbp-70h] BYREF
  VirtualDesktopDataSource *v23; // [rsp+70h] [rbp-68h]
  char v24; // [rsp+78h] [rbp-60h]
  int v25; // [rsp+80h] [rbp-58h] BYREF
  __int64 v26[3]; // [rsp+88h] [rbp-50h] BYREF
  char v27[16]; // [rsp+A0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int v29; // [rsp+E0h] [rbp+8h]
  __int64 v30; // [rsp+F8h] [rbp+20h] BYREF

  v26[2] = -2LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v22, (RTL_SRWLOCK *)this + 37);
  v23 = (VirtualDesktopDataSource *)((char *)this - 24);
  v24 = 1;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, (__int64)a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<ThumbnailDeviceFactory,IThumbnailDeviceSource,>((void **)this + 28);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 142LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v6);
LABEL_15:
    VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 24));
    goto LABEL_20;
  }
  v15 = (struct _GUID *)((char *)this - 24);
  v6 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),VirtualDesktopDataSource *>(
         (__int64)this + 104,
         *((_QWORD *)this + 12),
         v7);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 148LL;
    goto LABEL_5;
  }
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v30);
  v10 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerInternal *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v30);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v10);
LABEL_14:
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v30);
    goto LABEL_15;
  }
  ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(
    (__int64)&v18,
    v30);
  ObjectArrayAdapter<IVirtualDesktop>::Iterator::Iterator((__int64)&v20, (__int64)&v18, 0);
  ObjectArrayAdapter<IVirtualDesktop>::Iterator::Iterator((__int64)&v25, (__int64)&v18, v19);
  while ( 1 )
  {
    if ( (_DWORD)v20 == v25 && v21[1] == (struct IVirtualDesktop *)v26[1] )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v30);
      v8 = 0;
      goto LABEL_20;
    }
    v11 = v21[0];
    v17 = v21[0];
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v17);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v12 = VirtualDesktop_CreateInstance(v11, *((struct IThumbnailDeviceSource **)this + 28), a2, a3, v15, &v16);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v18);
      goto LABEL_14;
    }
    try
    {
      std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::emplace<Microsoft::WRL::ComPtr<IVirtualDesktop> &,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop> &>(
        (_QWORD *)this + 29,
        (__int64)v27,
        &v17,
        &v16);
    }
    catch ( ... )
    {
      v29 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0xA1,
              (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
              v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v30);
      if ( v24 )
        VirtualDesktopDataSource::UninitializeInternal(v23);
      v8 = v29;
LABEL_20:
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
      result = v8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    LODWORD(v20) = v20 + 1;
    ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v20);
  }
}
