/*
 * XREFs of ?GetDispatchersName@CHidInput@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C006E910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::GetDispatchersName(
        CHidInput *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 12;
  *(_OWORD *)a2 = xmmword_1C0175238;
  *((_OWORD *)a2 + 1) = xmmword_1C0175248;
  *((_OWORD *)a2 + 2) = xmmword_1C0175258;
}
