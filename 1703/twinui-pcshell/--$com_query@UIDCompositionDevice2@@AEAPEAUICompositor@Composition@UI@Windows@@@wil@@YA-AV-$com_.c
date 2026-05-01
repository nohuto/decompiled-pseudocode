/*
 * XREFs of ??$com_query@UIDCompositionDevice2@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UIDCompositionDevice2@@Uerr_exception_policy@wil@@@0@AEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x18016A198
 * Callers:
 *     ?CreateThumbnail@ThumbnailInteropVisual@@AEAA?AUThumbnailData@@PEAUICompositor@Composition@UI@Windows@@PEAUIThumbnailDeviceInternal@@PEAUHWND__@@PEAURect@Foundation@6@USize@Foundation@6@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169C24 (-CreateThumbnail@ThumbnailInteropVisual@@AEAA-AUThumbnailData@@PEAUICompositor@Composition@UI@Wi.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<IDCompositionDevice2,Windows::UI::Composition::ICompositor * &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_75f6468d_1b8e_447c_9bc6_75fea80b5b25, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18016A1E5LL);
  }
  return a1;
}
