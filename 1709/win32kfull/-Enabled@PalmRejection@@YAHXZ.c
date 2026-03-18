/*
 * XREFs of ?Enabled@PalmRejection@@YAHXZ @ 0x1C01DFFE8
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 *     EditionPalmRejectionEnabled @ 0x1C01E09A0 (EditionPalmRejectionEnabled.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C01E0634 (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
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
    xmmword_1C032BA30 = v2[1];
    xmmword_1C032BA40 = v2[2];
    *(_OWORD *)&xmmword_1C032BA50 = v2[3];
    if ( !(unsigned int)RIMIsDeviceArbitrationEnabled() )
      gPalmRejectEnabled = 0;
    gPalmRejectInitialized = 1;
  }
  return gPalmRejectEnabled;
}
