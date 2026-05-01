/*
 * XREFs of ?CreateDesktopBackgroundThumbnailFactory@ThumbnailInteropDevice@@UEAAJUtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x180166AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeDesktopBackgroundFactory@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180169220 (-MakeDesktopBackgroundFactory@@YA-AV-$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experienc.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ThumbnailInteropDevice::CreateDesktopBackgroundThumbnailFactory(
        ThumbnailInteropDevice *this,
        struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4)
{
  _QWORD *DesktopBackgroundFactory; // rax
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    *a4 = 0LL;
    v10 = (__int128)*a2;
    DesktopBackgroundFactory = (_QWORD *)MakeDesktopBackgroundFactory(
                                           &v12,
                                           ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                                           &v10);
    v7 = (**(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*DesktopBackgroundFactory)(
           *DesktopBackgroundFactory,
           a3,
           a4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15CA,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v7);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x58,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
                           v8);
  }
  return result;
}
