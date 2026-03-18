/*
 * XREFs of PopCreatePowerThread @ 0x14016C8CC
 * Callers:
 *     PopCreateDynamicIrpWorker @ 0x14016C860 (PopCreateDynamicIrpWorker.c)
 *     PopInitializeIrpWorkers @ 0x1408C6F68 (PopInitializeIrpWorkers.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14057B220 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PopCreatePowerThread(KSTART_ROUTINE *a1, void *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  OBJECT_ATTRIBUTES v4; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v4.RootDirectory = 0LL;
  v4.ObjectName = 0LL;
  v4.Length = 48;
  v4.Attributes = 512;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  result = PsCreateSystemThread(&Handle, 0x1FFFFFu, &v4, 0LL, 0LL, a1, a2);
  if ( result >= 0 )
  {
    v3 = ObReferenceObjectByHandleWithTag(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, 0x72496F50u, &Object, 0LL);
    ZwClose(Handle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, 13LL);
      ObfDereferenceObjectWithTag(Object, 0x72496F50u);
    }
    return 0;
  }
  return result;
}
