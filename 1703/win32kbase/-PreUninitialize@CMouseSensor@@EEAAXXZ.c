/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C006F990
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMouseProcessor@@QEAAPEAXI@Z @ 0x1C0047690 (--_GCMouseProcessor@@QEAAPEAXI@Z.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this)
{
  CMouseProcessor *v2; // rcx

  v2 = (CMouseProcessor *)*((_QWORD *)this + 80);
  if ( v2 )
    CMouseProcessor::`scalar deleting destructor'(v2);
  *((_QWORD *)this + 80) = 0LL;
}
