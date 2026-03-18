/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C00D69C4
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0039D0C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvSetGraphicsDevices(char *a1, __int16 a2)
{
  __int64 result; // rax

  if ( a2 )
    gcRemoteNextGlobalDeviceNumber = 0;
  StringCchCopyW((char *)qword_1C032FA08, (unsigned int)dword_1C032FA10, a1);
  gcLocalNextGlobalDeviceNumber = 0;
  result = DrvUpdateGraphicsDeviceList(1LL, a2 == 0);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)(gpGdiSharedMemory + 1573024LL));
  return result;
}
