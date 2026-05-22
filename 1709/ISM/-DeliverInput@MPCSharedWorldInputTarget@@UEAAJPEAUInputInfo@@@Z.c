/*
 * XREFs of ?DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800ACB10
 * Callers:
 *     ?DeliverInput@MPCSharedWorldInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x1800AD9E0 (-DeliverInput@MPCSharedWorldInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall MPCSharedWorldInputTarget::DeliverInput(MPCSharedWorldInputTarget *this, struct InputInfo *a2)
{
  return MPCSharedWorldInputTarget::InternalDeliverInput(this, a2, 0);
}
