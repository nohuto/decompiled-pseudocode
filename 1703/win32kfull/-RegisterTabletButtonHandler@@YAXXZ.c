/*
 * XREFs of ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C00ADD0C
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     ?ReadTabletButtonIndex@@YAJIPEAK@Z @ 0x1C001040C (-ReadTabletButtonIndex@@YAJIPEAK@Z.c)
 *     _RegisterRawInputDevices @ 0x1C00B0B10 (_RegisterRawInputDevices.c)
 *     ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C019D318 (-ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z.c)
 */

void RegisterTabletButtonHandler(void)
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx
  _DWORD v2[2]; // [rsp+20h] [rbp-18h] BYREF
  void (__fastcall *v3)(struct DEVICEINFO *); // [rsp+28h] [rbp-10h]
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF

  v2[0] = 589825;
  v2[1] = 256;
  v0 = 0;
  v3 = TabletButtonHandler;
  do
  {
    if ( (int)ReadTabletButtonIndex(v0, &v4) >= 0 )
    {
      v1 = (unsigned __int64)v4 << 7;
      ReadTabletButtonConfig(
        v0,
        L"PrimaryLandscape",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1));
      ReadTabletButtonConfig(
        v0,
        L"PrimaryPortrait",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 32));
      ReadTabletButtonConfig(
        v0,
        L"SecondaryLandscape",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 64));
      ReadTabletButtonConfig(
        v0,
        L"SecondaryPortrait",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 96));
    }
    ++v0;
  }
  while ( v0 < 0xA );
  RegisterRawInputDevices(v2, 1LL, 1LL);
}
