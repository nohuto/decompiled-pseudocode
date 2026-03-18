/*
 * XREFs of PopWin32CalloutWatchdogCallbackLiveDump @ 0x1406D49D0
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x1406829D0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopWin32CalloutWatchdogCallbackLiveDump(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) == 2503 * ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) / 0x9C7) )
    return DbgkWerCaptureLiveKernelDump(L"PoW32kWatchdog", a2, a3, a4, a5, a6, 0LL, 0LL, 0);
  else
    return 0LL;
}
