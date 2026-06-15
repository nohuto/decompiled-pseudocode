/*
 * XREFs of ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x18003AAE0
 * Callers:
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003AB60 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x18003A7AC (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMuteHardware::GetLevelData(CMuteHardware *this)
{
  int MuteValue; // eax
  unsigned int v2; // ebx

  MuteValue = CMuteHardware::GetMuteValue(this, (int *)this + 6);
  v2 = MuteValue;
  if ( MuteValue < 0 )
    AudSrvTraceLoggingErrorHelper("CMuteHardware::GetLevelData", 0x140u, MuteValue);
  return v2;
}
