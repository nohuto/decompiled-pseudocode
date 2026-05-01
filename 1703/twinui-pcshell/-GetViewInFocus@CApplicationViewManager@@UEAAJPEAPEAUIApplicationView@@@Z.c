/*
 * XREFs of ?GetViewInFocus@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180072B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewInFocus(CApplicationViewManager *this, struct IApplicationView **a2)
{
  __int64 v4; // rcx

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 50) || (*((_BYTE *)this + 408) & 1) != 0 )
    return 2147943568LL;
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct IApplicationView *)*((_QWORD *)this + 50);
  return 0LL;
}
