/*
 * XREFs of NtAlertResumeThread @ 0x14071A93C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAlertResumeThread @ 0x140202738 (KeAlertResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtAlertResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  char PreviousMode; // bl
  __int64 v5; // rcx
  NTSTATUS result; // eax
  ULONG v7; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && SuspendCount )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SuspendCount < 0x7FFFFFFF0000LL )
      v5 = (__int64)SuspendCount;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             2,
             (__int64)PsThreadType,
             PreviousMode,
             1968403280,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( PreviousMode && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return -1073741790;
    }
    else
    {
      v7 = KeAlertResumeThread((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( SuspendCount )
        *SuspendCount = v7;
      return 0;
    }
  }
  return result;
}
