/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C001278C
 * Callers:
 *     VidSchSyncPriorityDevice @ 0x1C006D490 (VidSchSyncPriorityDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this)
{
  ((void (__fastcall *)(DXGDEVICE *))DxgCoreInterface[8])(this);
}
