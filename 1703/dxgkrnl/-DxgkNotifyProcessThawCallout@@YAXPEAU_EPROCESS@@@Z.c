/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00A3DF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?VmBusSendNotifyProcessThaw@@YAXI@Z @ 0x1C0030D68 (-VmBusSendNotifyProcessThaw@@YAXI@Z.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00D7020 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  DXGPROCESS *ProcessDxgProcess; // rbx
  __int64 v6; // r8
  int v7; // ecx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(PROCESS, a2);
  if ( ProcessDxgProcess )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v7 = *((_DWORD *)ProcessDxgProcess + 96);
    if ( v7 )
      VmBusSendNotifyProcessThaw(v7);
    DXGPROCESS::NotifyProcessThaw(ProcessDxgProcess);
    KeUnstackDetachProcess(&ApcState);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v6, 2096);
}
