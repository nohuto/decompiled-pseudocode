/*
 * XREFs of ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180261EB4
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18026271C (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1802627F4 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801AC368 (--0-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@QEAA@QEAV1@I@Z @ 0x18025CAA0 (--0Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ @ 0x18025D66C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktop::CalculateDesktopIndex(VirtualDesktop *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  char v5; // si
  __int64 v6; // rdi
  struct IUnknown *v7; // rbx
  void *v9; // [rsp+28h] [rbp-48h] BYREF
  int v10; // [rsp+30h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  struct IUnknown *v12[2]; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v16; // [rsp+A0h] [rbp+30h] BYREF
  struct IUnknown *v17; // [rsp+A8h] [rbp+38h] BYREF
  RTL_SRWLOCK *v18; // [rsp+B0h] [rbp+40h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v18, (RTL_SRWLOCK *)this + 33);
  v16 = 0LL;
  v2 = *((_QWORD *)this + 14);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0;
    v6 = 0LL;
    ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(
      (__int64)&v9,
      v16);
    ObjectArrayAdapter<IVirtualDesktop>::Iterator::Iterator((__int64)&v11, (__int64)&v9, 0);
    ObjectArrayAdapter<IVirtualDesktop>::Iterator::Iterator((__int64)&v13, (__int64)&v9, v10);
    while ( (_DWORD)v11 != v13 || v12[1] != (struct IUnknown *)v14[1] )
    {
      v7 = v12[0];
      v17 = v12[0];
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v17);
      LODWORD(v7) = SHIsSameObject(v7, *((struct IUnknown **)this + 13));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      if ( (_DWORD)v7 )
      {
        v5 = 1;
        break;
      }
      ++v6;
      LODWORD(v11) = v11 + 1;
      ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v9);
    if ( v5 )
    {
      *((_QWORD *)this + 17) = v6;
      v4 = 0;
    }
    else
    {
      v4 = -2147319765;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  return v4;
}
