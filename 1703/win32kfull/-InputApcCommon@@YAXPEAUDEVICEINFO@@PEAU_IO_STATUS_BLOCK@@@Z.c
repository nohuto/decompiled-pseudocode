/*
 * XREFs of ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C019CA98
 * Callers:
 *     ?DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z @ 0x1C019C2F4 (-DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z.c)
 *     InputApc @ 0x1C01A0790 (InputApc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputApcCommon(PVOID ApcContext, struct _IO_STATUS_BLOCK *a2)
{
  PVOID v2; // rdi
  PRKEVENT *v3; // rbx

  v2 = ApcContext;
  if ( a2->Status >= 0 && *((_QWORD *)ApcContext + 28) )
  {
    LOBYTE(ApcContext) = *((_BYTE *)ApcContext + 48);
    v3 = &aDeviceTemplate[70 * (unsigned __int8)ApcContext];
    EtwTraceCompleteInputDeviceRead(ApcContext, *((unsigned int *)v3 + 22));
    ((void (__fastcall *)(PVOID))v3[9])(v2);
  }
  StartDeviceRead(v2);
}
