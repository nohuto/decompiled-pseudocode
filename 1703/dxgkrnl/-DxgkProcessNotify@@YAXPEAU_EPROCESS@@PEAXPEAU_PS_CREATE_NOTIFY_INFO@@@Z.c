/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0001FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  struct DXGPROCESS *ProcessDxgProcess; // rax

  if ( !CreateInfo )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(Process, ProcessId);
    DXGPROCESS::DestroyDxgProcess(ProcessDxgProcess);
  }
}
