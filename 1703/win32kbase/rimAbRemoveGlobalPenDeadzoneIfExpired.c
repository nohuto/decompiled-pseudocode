/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0103F7C
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  if ( *(_DWORD *)(a1 + 620) )
  {
    result = MEMORY[0xFFFFF78000000320];
    v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 632) )
    {
      *(_DWORD *)(a1 + 620) = 0;
      *(_QWORD *)(a1 + 624) = 0LL;
      *(_DWORD *)(a1 + 632) = 0;
      LOBYTE(v2) = 3;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v2,
               20,
               11,
               (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
    }
  }
  return result;
}
