/*
 * XREFs of ?DeliverInput@DWMFocusedInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800242D0
 * Callers:
 *     ?DeliverInput@DWMFocusedInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x180024AB0 (-DeliverInput@DWMFocusedInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMFocusedInputTarget@@WBA@EAAJPEAUInputInfo@@@Z @ 0x180024AD0 (-DeliverInput@DWMFocusedInputTarget@@WBA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::DeliverInput(DWMFocusedInputTarget *this, struct InputInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 6) + 24LL))(
           *((_QWORD *)this + 6),
           a2);
}
