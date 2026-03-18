/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C00436FC
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0043630 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x1C009BE80 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C009BED0 (SafeDisableMDEV.c)
 */

__int64 __fastcall UpdateGraphicsDeviceList(int *a1)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  result = IsRemoteConnection();
  if ( !(_DWORD)result )
  {
    result = DrvUpdateGraphicsDeviceList(0LL, 1LL);
    if ( !(_DWORD)result )
    {
      result = SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1LL, 1LL);
        SafeEnableMDEV(1LL);
        result = xxxUserResetDisplayDevice();
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
