/*
 * XREFs of PspTimerDelayProcess @ 0x140239B70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x1402394C4 (PspApplyTimerDelayProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406C0DE0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspTimerDelayProcess(void *a1, unsigned __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandleWithTag(a1, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0, 0x624A7350u, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = PspApplyTimerDelayProcess((__int64)Object, a2, v4, v5);
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
    return v6;
  }
  return result;
}
