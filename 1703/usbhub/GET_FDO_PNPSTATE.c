/*
 * XREFs of GET_FDO_PNPSTATE @ 0x1C0045924
 * Callers:
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004BC50 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_PnpRemove @ 0x1C004BFF4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_PNPSTATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8))[340];
}
