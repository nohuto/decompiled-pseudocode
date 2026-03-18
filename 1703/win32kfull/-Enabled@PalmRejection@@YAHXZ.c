/*
 * XREFs of ?Enabled@PalmRejection@@YAHXZ @ 0x1C01D3C40
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01CA88C (xxxGeneratePointerInputMessages.c)
 *     EditionPalmRejectionEnabled @ 0x1C01D4530 (EditionPalmRejectionEnabled.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C01D41C4 (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 */

__int64 __fastcall PalmRejection::Enabled(PalmRejection *this)
{
  _OWORD v2[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( !gPalmRejectInitialized )
  {
    PalmRejection::_ReadSettingsFromRegKey(this);
    memset(v2, 0, sizeof(v2));
    gPalmRejectLastLoggedTelemTime = 0;
    gPalmRejectData = v2[0];
    xmmword_1C03304B0 = v2[1];
    xmmword_1C03304C0 = v2[2];
    *(_OWORD *)&xmmword_1C03304D0 = v2[3];
    if ( !(unsigned int)RIMIsDeviceArbitrationEnabled() )
      gPalmRejectEnabled = 0;
    gPalmRejectInitialized = 1;
  }
  return gPalmRejectEnabled;
}
