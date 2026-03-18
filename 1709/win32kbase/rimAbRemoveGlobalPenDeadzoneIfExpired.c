/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C010400C
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 620) )
  {
    result = MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 632) )
    {
      *(_DWORD *)(a1 + 620) = 0;
      *(_QWORD *)(a1 + 624) = 0LL;
      *(_DWORD *)(a1 + 632) = 0;
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               0x14u,
               0xBu,
               (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
    }
  }
  return result;
}
