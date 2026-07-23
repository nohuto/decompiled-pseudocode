/*
 * XREFs of LdrpGenericExceptionFilter @ 0x180002B68
 * Callers:
 *     LdrpProtectedCopyMemory @ 0x1800177A0 (LdrpProtectedCopyMemory.c)
 *     LdrpHandleTlsData @ 0x18001C3A8 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18001C850 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x18001CAE4 (LdrpAllocateTlsEntry.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrLockLoaderLock @ 0x18007E040 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007FAF0 (LdrUnlockLoaderLock.c)
 *     LdrpProtectAndRelocateImage @ 0x180084964 (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180085424 (LdrpTouchThreadStack.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008A5B0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     LdrpLogFatalLdrEtwEvent @ 0x180002258 (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A0B20 (NtTerminateThread.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     DbgPrompt @ 0x1800DFFE0 (DbgPrompt.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  char v3; // al
  NTSTATUS v4; // edi
  bool v6; // zf
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  CHAR Response; // [rsp+60h] [rbp+8h] BYREF

  v3 = LdrpDebugFlags;
  v4 = *(_DWORD *)*a1;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      511,
      (unsigned int)"LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      v4,
      *a1,
      a1[1]);
    v3 = LdrpDebugFlags;
  }
  if ( (v3 & 0x10) != 0 )
    __debugbreak();
  if ( (v3 & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &Response, 2u);
      if ( Response > 98 )
      {
        v7 = Response - 105;
        v6 = Response == 105;
      }
      else
      {
        if ( Response == 98 || Response == 66 )
          goto LABEL_18;
        v7 = Response - 73;
        v6 = Response == 73;
      }
      if ( v6 )
        return 1LL;
      v8 = v7 - 6;
      if ( !v8 )
      {
LABEL_18:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(
            (const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName,
            &LoaderFatalErrorThread);
          NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v4);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent((const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName, &LoaderFatalErrorProc);
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
      }
    }
  }
  return 1LL;
}
