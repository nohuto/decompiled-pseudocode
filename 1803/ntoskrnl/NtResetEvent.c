/*
 * XREFs of NtResetEvent @ 0x140575F90
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x140575E74 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // edi
  LONG v6; // esi
  __int64 v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( NumberOfWaitingThreads && PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NumberOfWaitingThreads < 0x7FFFFFFF0000LL )
      v8 = (__int64)NumberOfWaitingThreads;
    *(_DWORD *)v8 = *(_DWORD *)v8;
  }
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = KeResetEvent((PRKEVENT)Object);
    ObfDereferenceObject(Object);
    if ( NumberOfWaitingThreads )
      *NumberOfWaitingThreads = v6;
  }
  return v5;
}
