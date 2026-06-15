/*
 * XREFs of ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x180066C80
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x180066CD8 (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 */

__int64 __fastcall CMuteHardware::GetLevelData(CMuteHardware *this)
{
  int MuteValue; // eax
  unsigned int v2; // ebx

  MuteValue = CMuteHardware::GetMuteValue(this, (int *)this + 6);
  v2 = MuteValue;
  if ( MuteValue < 0 )
    AudSrvTraceLoggingErrorHelper("CMuteHardware::GetLevelData", 320, MuteValue);
  return v2;
}
