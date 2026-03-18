/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C0058504
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C003C480 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A1C90 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0058550 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x1C00A5EC0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00A5F10 (SafeDisableMDEV.c)
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
