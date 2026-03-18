/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C008D530
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C008D410 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00DF100 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C008D570 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateMouseConnectionState @ 0x1C008D5A0 (UpdateMouseConnectionState.c)
 */

void UpdateTPCurrentActiveState()
{
  UpdateMouseConnectionState();
  if ( (qword_1C018EC78 & 0x100000000LL) != 0 )
    HIDWORD(qword_1C018EC78) |= 8u;
  else
    HIDWORD(qword_1C018EC78) = HIDWORD(qword_1C018EC78) & 0xFFFFFFF7 | ((unsigned __int8)(~BYTE4(qword_1C018EC78) & 0x10) >> 1);
  CPTPProcessor::EnvironmentChanged();
}
