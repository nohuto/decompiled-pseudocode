/*
 * XREFs of ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C001E8AC
 * Callers:
 *     VidSchiDiscardQueuePacket @ 0x1C00AA7D4 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiCancelCommand(ADAPTER_RENDER *this, const struct _DXGKARG_CANCELCOMMAND *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_CANCELCOMMAND *))DxgCoreInterface[32])(
           this,
           a2);
}
