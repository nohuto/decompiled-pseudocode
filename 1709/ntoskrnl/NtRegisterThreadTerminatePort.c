/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x14059BAD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRegisterThreadTerminatePort(HANDLE TerminationPort)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = ObReferenceObjectByHandle(TerminationPort, 1u, LpcPortObjectType, CurrentThread->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x70547350u);
    v4 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      PoolWithQuotaTag[1] = Object;
      *PoolWithQuotaTag = CurrentThread[1].InitialStack;
      result = 0;
      CurrentThread[1].InitialStack = v4;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741670;
    }
  }
  return result;
}
