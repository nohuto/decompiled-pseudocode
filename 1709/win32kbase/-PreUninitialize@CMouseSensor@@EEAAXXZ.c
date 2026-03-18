/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0012D40
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMouseProcessor@@QEAAPEAXI@Z @ 0x1C00165D0 (--_GCMouseProcessor@@QEAAPEAXI@Z.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this, unsigned int a2)
{
  CMouseProcessor *v3; // rcx

  v3 = (CMouseProcessor *)*((_QWORD *)this + 120);
  if ( v3 )
    CMouseProcessor::`scalar deleting destructor'(v3, a2);
  *((_QWORD *)this + 120) = 0LL;
}
