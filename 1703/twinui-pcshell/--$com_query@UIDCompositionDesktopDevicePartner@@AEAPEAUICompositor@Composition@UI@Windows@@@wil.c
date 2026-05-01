/*
 * XREFs of ??$com_query@UIDCompositionDesktopDevicePartner@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UIDCompositionDesktopDevicePartner@@Uerr_exception_policy@wil@@@0@AEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x18016A0F8
 * Callers:
 *     ??0ThumbnailInteropVisual@@QEAA@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@6@USize@56@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016950C (--0ThumbnailInteropVisual@@QEAA@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEA.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<IDCompositionDesktopDevicePartner,Windows::UI::Composition::ICompositor * &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18016A145LL);
  }
  return a1;
}
