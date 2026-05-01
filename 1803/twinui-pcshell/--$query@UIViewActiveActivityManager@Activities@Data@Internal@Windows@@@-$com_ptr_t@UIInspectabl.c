/*
 * XREFs of ??$query@UIViewActiveActivityManager@Activities@Data@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewActiveActivityManager@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009E82C
 * Callers:
 *     ??$ActivateInstance@UIViewActiveActivityManager@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIViewActiveActivityManager@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801A16A8 (--$ActivateInstance@UIViewActiveActivityManager@Activities@Data@Internal@Windows@@@wil@@YA-AV-$c.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Data::Activities::IViewActiveActivityManager>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_a7c32752_555e_4542_a869_32a850bbe7de, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3,
      v5);
    __debugbreak();
  }
  return a2;
}
