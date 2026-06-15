/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x1800DB0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemEffectWrapper@@UEAA@XZ @ 0x1800DAFFC (--1CSystemEffectWrapper@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1800DD8FC (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x1800DD9B8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
CSystemEffectWrapper *__fastcall CSystemEffectWrapper::`scalar deleting destructor'(
        CSystemEffectWrapper *this,
        char a2)
{
  void *v4; // rax

  CSystemEffectWrapper::~CSystemEffectWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = AERTGetDLLRTHeap();
    AERTFree(this, v4);
  }
  return this;
}
