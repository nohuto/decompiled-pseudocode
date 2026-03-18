/*
 * XREFs of GetProcessImageFileName @ 0x1C024BD84
 * Callers:
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01D9024 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C024B1D8 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

void *__fastcall GetProcessImageFileName(HANDLE ProcessHandle)
{
  void *v1; // rbx
  void *v3; // rax
  ULONG ProcessInformationLength; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    v3 = (void *)AllocFreeTmpBuffer(ProcessInformationLength + 2);
    v1 = v3;
    if ( v3 )
    {
      memset(v3, 0, ProcessInformationLength + 2LL);
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, v1, ProcessInformationLength, 0LL) < 0 )
      {
        FreeTmpBuffer(v1);
        return 0LL;
      }
    }
  }
  return v1;
}
