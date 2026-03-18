/*
 * XREFs of PopCreatePowerThread @ 0x140156070
 * Callers:
 *     PopCreateDynamicIrpWorker @ 0x140156004 (PopCreateDynamicIrpWorker.c)
 *     PopInitializeIrpWorkers @ 0x140850B84 (PopInitializeIrpWorkers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140554950 (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall PopCreatePowerThread(KSTART_ROUTINE *a1, void *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  _SINGLE_LIST_ENTRY *v4; // r8
  __int64 v5; // r9
  OBJECT_ATTRIBUTES v6; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v6.RootDirectory = 0LL;
  v6.ObjectName = 0LL;
  v6.Length = 48;
  v6.Attributes = 512;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  result = PsCreateSystemThread(&Handle, 0x1FFFFFu, &v6, 0LL, 0LL, a1, a2);
  if ( result >= 0 )
  {
    v3 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, 13, v4, v5);
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    }
    return 0;
  }
  return result;
}
