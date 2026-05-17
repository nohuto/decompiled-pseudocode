/*
 * XREFs of LdrpInitializeDllPath @ 0x180035884
 * Callers:
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18001566C (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     LdrpGetDelayloadExportDll @ 0x180022A6C (LdrpGetDelayloadExportDll.c)
 *     LdrGetDllHandleEx @ 0x180035770 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x180035920 (LdrLoadDll.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 *     LdrLoadEnclaveModule @ 0x1800D0260 (LdrLoadEnclaveModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D2BD4 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DB028 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x180037DF8 (LdrpLogDllStateEx2.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

void *__fastcall LdrpInitializeDllPath(__int64 a1, __int64 a2, __int64 *a3)
{
  void *result; // rax
  __int64 v7; // rcx
  bool v8; // zf

  result = memset(a3, 0, 0x80uLL);
  if ( (a2 & 1) != 0 || !a2 )
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = a2 & 0xFFFFFFFE;
  }
  else
  {
    v8 = (LdrpDebugFlags & 5) == 0;
    *a3 = a2;
    if ( !v8 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1355,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        "DLL search path passed in externally: %ws\n",
        a2);
    return (void *)LdrpLogDllStateEx2(v7, a1, *a3, 5312LL);
  }
  return result;
}
