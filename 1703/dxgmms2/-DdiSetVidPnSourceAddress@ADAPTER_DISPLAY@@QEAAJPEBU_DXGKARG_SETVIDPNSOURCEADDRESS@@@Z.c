/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0013B30
 * Callers:
 *     VidSchSetVidPnSourceAddress @ 0x1C006EA80 (VidSchSetVidPnSourceAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_DISPLAY *, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))DxgCoreInterface[23])(
           this,
           a2);
}
