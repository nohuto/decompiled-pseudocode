/*
 * XREFs of ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x1C009C680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CBaseProcessor *__fastcall CMouseSensor::GetProcessor(CMouseSensor *this)
{
  return (struct CBaseProcessor *)*((_QWORD *)this + 120);
}
