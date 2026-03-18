/*
 * XREFs of Endpoint_ClearStallTransferCompletion @ 0x1C0017F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddqL @ 0x1C001D798 (WPP_RECORDER_SF_ddqL.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ClearStallTransferCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  WPP_RECORDER_SF_ddqL(Context[10], (_DWORD)Irp, (_DWORD)Context, 64);
  ESM_AddEvent(Context + 36);
  return 3221225494LL;
}
