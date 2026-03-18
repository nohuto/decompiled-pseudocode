/*
 * XREFs of PspTimerDelayProcess @ 0x14024EB40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x14024E464 (PspApplyTimerDelayProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140594210 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspTimerDelayProcess(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandleWithTag(a1, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0, 0x624A7350u, &Object, 0LL);
  if ( result >= 0 )
  {
    v4 = PspApplyTimerDelayProcess((__int64)Object, a2);
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
    return v4;
  }
  return result;
}
