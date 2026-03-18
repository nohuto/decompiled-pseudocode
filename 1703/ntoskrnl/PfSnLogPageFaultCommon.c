/*
 * XREFs of PfSnLogPageFaultCommon @ 0x1400B5710
 * Callers:
 *     PfSnLogPageFault @ 0x14005F114 (PfSnLogPageFault.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x1400B31C4 (PfSnTraceGetLogEntry.c)
 *     PfSnCheckLogSequenceNumber @ 0x1400B5834 (PfSnCheckLogSequenceNumber.c)
 *     PfSnGetFileInformation @ 0x1400B7690 (PfSnGetFileInformation.c)
 */

__int64 __fastcall PfSnLogPageFaultCommon(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 result; // rax
  unsigned __int64 *v11; // r8
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  PfSnGetFileInformation();
  if ( (*(_BYTE *)(a1 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(a1 + 352) + 1474LL) == 2 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 1u);
  if ( a4 >= 0x20000000000LL )
    return 3221227780LL;
  v8 = a4 >> 9;
  if ( (a5 & 1) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( (a5 & 2) != 0 )
      v9 = 3;
  }
  PfSnCheckLogSequenceNumber(a1);
  if ( v9 || (v12 = *(__int64 **)(a1 + 408), (unsigned __int64)*v12 >> 3 != v8) || v12[1] != a3 )
  {
    result = PfSnTraceGetLogEntry(a1, 1u, &v12);
    if ( (int)result < 0 )
      return result;
    v11 = (unsigned __int64 *)v12;
    *v12 = (8 * v8) | *(_DWORD *)v12 & 7;
    v11[1] = a3;
    *v11 = v9 | *v11 & 0xFFFFFFFFFFFFFFF8uLL;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 332));
    if ( !v9 )
      *(_QWORD *)(a1 + 408) = v12;
  }
  return 0LL;
}
