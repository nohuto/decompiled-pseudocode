/*
 * XREFs of ?CreateThumbnailVisual@DesktopBackgroundFactory@@UEAAJPEAUICompositor@Composition@UI@Windows@@USize@Foundation@5@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIDuplicateVisual@ComposableShell@Internal@5@@Z @ 0x180169030
 * Callers:
 *     <none>
 * Callees:
 *     ?MakeSolidColorBackgroundVisual@DesktopBackgroundFactory@@AEAA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@USize@Foundation@7@@Z @ 0x1801691AC (-MakeSolidColorBackgroundVisual@DesktopBackgroundFactory@@AEAA-AV-$com_ptr_t@UIDuplicateVisual@C.c)
 *     ?MakeThumbnailInteropVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@8@USize@78@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169E60 (-MakeThumbnailInteropVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DesktopBackgroundFactory::CreateThumbnailVisual(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+50h] [rbp-38h] BYREF
  int v10; // [rsp+58h] [rbp-30h]
  __int64 v11; // [rsp+60h] [rbp-28h]
  float v12[4]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v11 = -2LL;
  try
  {
    *a5 = 0LL;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) )
    {
      v5 = *(_QWORD *)DesktopBackgroundFactory::MakeSolidColorBackgroundVisual(a1, v8, a2, a3);
      if ( !v5 )
      {
        *a5 = 0LL;
LABEL_8:
        if ( v8[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
        return 0LL;
      }
    }
    else
    {
      v12[0] = (float)*(int *)(a1 + 136);
      v12[1] = (float)*(int *)(a1 + 140);
      v12[2] = (float)(*(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136));
      v12[3] = (float)(*(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140));
      v9 = *a4;
      v10 = *((_DWORD *)a4 + 2);
      v5 = *(_QWORD *)MakeThumbnailInteropVisual(
                        (unsigned int)v8,
                        *(_QWORD *)(a1 + 24),
                        a1 != 0 ? a1 + 8 : 0,
                        *(_QWORD *)(a1 + 32),
                        (char)v12,
                        a2,
                        a3,
                        (__int64)&v9);
      if ( !v5 )
      {
        *a5 = 0LL;
        goto LABEL_8;
      }
    }
    *a5 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    goto LABEL_8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x44,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\desktopbackgroundfactory.cpp",
                           v6);
  }
  return result;
}
