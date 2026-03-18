/*
 * XREFs of ?GetDispatchersName@CKeyboardSensor@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C00956B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CKeyboardSensor::GetDispatchersName(
        CKeyboardSensor *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 6;
  *(_OWORD *)a2 = xmmword_1C0163F28;
  *((_QWORD *)a2 + 2) = 0x800000006LL;
}
