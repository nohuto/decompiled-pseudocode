/*
 * XREFs of ?GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180063710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskWindow::GetView(CTaskWindow *this, const struct _GUID *a2, void **a3)
{
  if ( *((_QWORD *)this + 6) )
    return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 6))(
             *((_QWORD *)this + 6),
             a2,
             a3);
  else
    return 2147943568LL;
}
