/*
 * XREFs of ?GetDispatchersName@CMouseSensor@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C006E950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseSensor::GetDispatchersName(
        CMouseSensor *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 7;
  *(_OWORD *)a2 = xmmword_1C0175280;
  *((_QWORD *)a2 + 2) = 0xA00000008LL;
  *((_DWORD *)a2 + 6) = 13;
}
