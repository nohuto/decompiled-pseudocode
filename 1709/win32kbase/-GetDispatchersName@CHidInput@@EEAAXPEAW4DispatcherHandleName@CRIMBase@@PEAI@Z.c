/*
 * XREFs of ?GetDispatchersName@CHidInput@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C0019670
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
  *a3 = 10;
  *(_OWORD *)a2 = xmmword_1C0163458;
  *((_OWORD *)a2 + 1) = xmmword_1C0163468;
  *((_QWORD *)a2 + 4) = 0xA00000009LL;
}
