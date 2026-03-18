/*
 * XREFs of NtCreateSemaphore @ 0x14053FFB0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x140110510 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  PHANDLE v7; // rdi
  char PreviousMode; // si
  NTSTATUS inserted; // ecx
  __int64 v11; // [rsp+20h] [rbp-58h]
  PRKSEMAPHORE Semaphore; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF

  v7 = SemaphoreHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)SemaphoreHandle >= 0x7FFFFFFF0000LL )
      SemaphoreHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SemaphoreHandle = *SemaphoreHandle;
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExSemaphoreObjectType,
               (int)ObjectAttributes,
               PreviousMode,
               v11,
               32,
               0,
               0,
               &Semaphore,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, InitialCount, MaximumCount);
    inserted = ObInsertObjectEx(Semaphore, 0LL, DesiredAccess, 0, 0, 0LL, &v13);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
      *v7 = (HANDLE)v13;
  }
  return inserted;
}
