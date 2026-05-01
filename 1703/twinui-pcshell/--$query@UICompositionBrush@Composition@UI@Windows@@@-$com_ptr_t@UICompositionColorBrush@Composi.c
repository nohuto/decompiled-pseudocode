/*
 * XREFs of ??$query@UICompositionBrush@Composition@UI@Windows@@@?$com_ptr_t@UICompositionColorBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18016AA4C
 * Callers:
 *     ??0SolidColorVisual@@QEAA@UColor@UI@Windows@@PEAUICompositor@Composition@23@USize@Foundation@3@@Z @ 0x18016A72C (--0SolidColorVisual@@QEAA@UColor@UI@Windows@@PEAUICompositor@Composition@23@USize@Foundation@3@@.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionColorBrush,wil::err_exception_policy>::query<Windows::UI::Composition::ICompositionBrush>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18016AA99LL);
  }
  return a2;
}
