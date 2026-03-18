/*
 * XREFs of NtQuerySemaphore @ 0x1405C2770
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySemaphore(
        HANDLE SemaphoreHandle,
        SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
        PVOID SemaphoreInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  PULONG v11; // rbx
  int v12; // esi
  int v13; // r14d
  int v14; // r15d
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SemaphoreInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SemaphoreInformation < 0x7FFFFFFF0000LL )
      v10 = (__int64)SemaphoreInformation;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 7) = *(_BYTE *)(v10 + 7);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  if ( SemaphoreInformationClass )
    return -1073741821;
  if ( Length != 8 )
    return -1073741820;
  v12 = ObReferenceObjectByHandle(SemaphoreHandle, 1u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = *((_DWORD *)Object + 1);
    v14 = *((_DWORD *)Object + 6);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *(_DWORD *)SemaphoreInformation = v13;
      *((_DWORD *)SemaphoreInformation + 1) = v14;
      if ( v11 )
        *v11 = 8;
    }
    else
    {
      *(_DWORD *)SemaphoreInformation = v13;
      *((_DWORD *)SemaphoreInformation + 1) = v14;
      if ( v11 )
        *v11 = 8;
    }
  }
  return v12;
}
