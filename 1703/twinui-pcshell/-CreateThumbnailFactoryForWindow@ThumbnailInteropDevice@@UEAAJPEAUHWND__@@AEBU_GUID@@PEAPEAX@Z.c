/*
 * XREFs of ?CreateThumbnailFactoryForWindow@ThumbnailInteropDevice@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180166A00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeThumbnailInteropFactoryForWindow@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUHWND__@@@Z @ 0x180167C68 (-MakeThumbnailInteropFactoryForWindow@@YA-AV-$com_ptr_t@UIThumbnailFactory@Common@Multitasking@E.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ThumbnailInteropDevice::CreateThumbnailFactoryForWindow(
        ThumbnailInteropDevice *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  _QWORD *ThumbnailInteropFactoryForWindow; // rax
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    *a4 = 0LL;
    ThumbnailInteropFactoryForWindow = (_QWORD *)MakeThumbnailInteropFactoryForWindow(
                                                   &v11,
                                                   ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v7 = (**(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*ThumbnailInteropFactoryForWindow)(
           *ThumbnailInteropFactoryForWindow,
           a3,
           a4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15CA,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v7);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x50,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
                           v8);
  }
  return result;
}
