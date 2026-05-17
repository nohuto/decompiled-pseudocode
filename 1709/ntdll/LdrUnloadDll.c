/*
 * XREFs of LdrUnloadDll @ 0x180010DE0
 * Callers:
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     RtlpTpWorkCallback @ 0x180010840 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180010F90 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     LdrpGetShimEngineInterface @ 0x180015A3C (LdrpGetShimEngineInterface.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     RtlWnfDllUnloadCallback @ 0x180088B00 (RtlWnfDllUnloadCallback.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D7C70 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpDecrementModuleLoadCountEx @ 0x180010E84 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpFindLoadedDllByHandle @ 0x1800292AC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrUnloadDll(__int64 a1)
{
  int LoadedDllByHandle; // ebx
  __int64 v2; // rdi
  __int16 v4; // bx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_18015F3E8 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v6, &v5);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = v6;
      LoadedDllByHandle = LdrpDecrementModuleLoadCountEx(v6, 1LL);
      if ( LoadedDllByHandle == -1073741267 )
      {
        v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v4 )
          LdrpDrainWorkQueue(0LL);
        v2 = v6;
        LdrpDecrementModuleLoadCountEx(v6, 0LL);
        if ( !v4 )
          LdrpDropLastInProgressCount();
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v2);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
