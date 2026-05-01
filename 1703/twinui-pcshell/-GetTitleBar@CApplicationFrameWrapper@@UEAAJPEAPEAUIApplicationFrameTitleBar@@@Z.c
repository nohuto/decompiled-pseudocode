/*
 * XREFs of ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18004AEC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetTitleBar(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameTitleBar **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 12);
  return 0LL;
}
