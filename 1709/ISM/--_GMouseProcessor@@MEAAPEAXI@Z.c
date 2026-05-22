/*
 * XREFs of ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x18006B640
 * Callers:
 *     ??_EMouseProcessor@@O7EAAPEAXI@Z @ 0x18006CED0 (--_EMouseProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18006B6D8 (--1MouseProcessor@@MEAA@XZ.c)
 */

MouseProcessor *__fastcall MouseProcessor::`scalar deleting destructor'(MouseProcessor *this, char a2)
{
  MouseProcessor::~MouseProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
