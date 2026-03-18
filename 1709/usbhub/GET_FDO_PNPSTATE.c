/*
 * XREFs of GET_FDO_PNPSTATE @ 0x1C00467D4
 * Callers:
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004CAC0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_PnpRemove @ 0x1C004CE64 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_PNPSTATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8))[340];
}
