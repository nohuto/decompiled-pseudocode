/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C007D4E0
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C007D3B0 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00D8DC0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateMouseConnectionState @ 0x1C007D540 (UpdateMouseConnectionState.c)
 */

void UpdateTPCurrentActiveState()
{
  UpdateMouseConnectionState();
  if ( (qword_1C018A108 & 0x100000000LL) != 0 )
    HIDWORD(qword_1C018A108) |= 8u;
  else
    HIDWORD(qword_1C018A108) = HIDWORD(qword_1C018A108) & 0xFFFFFFF7 | ((unsigned __int8)(~BYTE4(qword_1C018A108) & 0x10) >> 1);
  CPTPProcessor::EnvironmentChanged();
}
