/*
 * XREFs of LdrAddRefDll @ 0x1800117D0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18000CB00 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x18000CC70 (TppIopExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18000F0A0 (TppAlpcpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     TppJobpExecuteCallback @ 0x180013140 (TppJobpExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     LdrpPinModule @ 0x180011838 (LdrpPinModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x1800292AC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002E76C (LdrpIncrementModuleLoadCount.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char v2; // di
  NTSTATUS LoadedDllByHandle; // ebx
  bool v4; // zf
  PVOID v5; // rdi
  NTSTATUS Count; // eax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllHandle, &BaseAddress, &v8);
  if ( LoadedDllByHandle >= 0 )
  {
    v4 = (v2 & 1) == 0;
    v5 = BaseAddress;
    if ( v4 )
      Count = LdrpIncrementModuleLoadCount(BaseAddress);
    else
      Count = LdrpPinModule(BaseAddress);
    LoadedDllByHandle = Count;
    LdrpDereferenceModule(v5);
  }
  return LoadedDllByHandle;
}
