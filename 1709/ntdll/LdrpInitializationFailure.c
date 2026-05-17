/*
 * XREFs of LdrpInitializationFailure @ 0x180002208
 * Callers:
 *     LdrpLoadShimEngine @ 0x18001566C (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180015900 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogFatalLdrEtwEvent @ 0x180002258 (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x1800A2C50 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpInitializationFailure(int a1)
{
  char v1; // al
  __int64 v2; // rbx
  __int64 result; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = LdrpDebugFlags;
  v2 = a1;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1846,
      (unsigned int)"LdrpInitializationFailure",
      0,
      "Process initialization failed with status 0x%08lx\n",
      a1);
    v1 = LdrpDebugFlags;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, "\a");
  if ( !LdrpFatalHardErrorCount )
  {
    v5 = v2;
    return NtRaiseHardError(3221225797LL, 1LL, 0LL, &v5, 1, &v4);
  }
  return result;
}
