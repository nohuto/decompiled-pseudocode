/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00A4010
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendNotifyProcessFreeze@@YAXI@Z @ 0x1C0030D20 (-VmBusSendNotifyProcessFreeze@@YAXI@Z.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00D6ECC (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS, __int64 a2)
{
  DXGPROCESS *ProcessDxgProcess; // rbx
  int v4; // ecx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(PROCESS, a2);
  if ( ProcessDxgProcess )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = *((_DWORD *)ProcessDxgProcess + 96);
    if ( v4 )
      VmBusSendNotifyProcessFreeze(v4);
    DXGPROCESS::NotifyProcessFreeze(ProcessDxgProcess);
    KeUnstackDetachProcess(&ApcState);
  }
}
