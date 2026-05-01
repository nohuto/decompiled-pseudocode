/*
 * XREFs of ?CreateThumbnailVisual@ThumbnailInteropFactoryBase@@UEAAJPEAUICompositor@Composition@UI@Windows@@USize@Foundation@5@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIDuplicateVisual@ComposableShell@Internal@5@@Z @ 0x180167890
 * Callers:
 *     <none>
 * Callees:
 *     ?MakeThumbnailInteropVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@8@USize@78@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169E60 (-MakeThumbnailInteropVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ThumbnailInteropFactoryBase::CreateThumbnailVisual(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rbx
  const char *v6; // r9
  _QWORD *v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+50h] [rbp-18h] BYREF
  int v10; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v5 = a5;
    *a5 = 0LL;
    v9 = *a4;
    v10 = *((_DWORD *)a4 + 2);
    MakeThumbnailInteropVisual(
      (unsigned int)&a5,
      *(_QWORD *)(a1 + 24),
      a1 + 8,
      *(_QWORD *)(a1 + 32),
      0,
      a2,
      a3,
      (__int64)&v9);
    v7 = a5;
    if ( a5 )
    {
      *v5 = a5;
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      v7 = a5;
    }
    else
    {
      *v5 = 0LL;
    }
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x39,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
                           v6);
  }
  return result;
}
