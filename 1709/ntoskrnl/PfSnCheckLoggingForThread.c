/*
 * XREFs of PfSnCheckLoggingForThread @ 0x14001313C
 * Callers:
 *     PfSnLogPageFault @ 0x140010A60 (PfSnLogPageFault.c)
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall PfSnCheckLoggingForThread(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  unsigned int v6; // ecx

  if ( (((a3 & 2) == 0) & (*(_BYTE *)(a1 + 1752) >> 6)) != 0 )
    return 0;
  if ( (int)PsGetIoPriorityThread() < 2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 336));
    return 0;
  }
  v5 = *(_QWORD *)(v3 + 432);
  v6 = 0;
  if ( !v5 || v5 == v4 && *(_QWORD *)(v3 + 440) == *(_QWORD *)(v4 + 1600) )
    return 1;
  return v6;
}
