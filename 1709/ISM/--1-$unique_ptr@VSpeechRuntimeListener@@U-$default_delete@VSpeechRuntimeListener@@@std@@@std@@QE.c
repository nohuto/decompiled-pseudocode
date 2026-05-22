/*
 * XREFs of ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x18006740C
 * Callers:
 *     _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$3 @ 0x1800CF8DD (_MPCRawInputProvider--_MPCRawInputProvider_--_1_--dtor$3.c)
 * Callees:
 *     ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x180067530 (--_GSpeechRuntimeListener@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(
        SpeechRuntimeListener **a1,
        unsigned int a2)
{
  SpeechRuntimeListener *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return SpeechRuntimeListener::`scalar deleting destructor'(v2, a2);
  return result;
}
