/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C00FE6A0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00FE0C0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002DCAC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvSetGraphicsDevices(char *a1, __int16 a2)
{
  __int64 result; // rax

  if ( a2 )
    gcRemoteNextGlobalDeviceNumber = 0;
  StringCchCopyW((char *)qword_1C0334498, (unsigned int)dword_1C03344A0, a1);
  gcLocalNextGlobalDeviceNumber = 0;
  result = DrvUpdateGraphicsDeviceList(1LL, a2 == 0);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)(gpGdiSharedMemory + 1573024LL));
  return result;
}
