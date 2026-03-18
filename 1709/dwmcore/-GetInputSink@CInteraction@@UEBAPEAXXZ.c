/*
 * XREFs of ?GetInputSink@CInteraction@@UEBAPEAXXZ @ 0x1801693B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CInteraction::GetInputSink(CInteraction *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 16);
  result = 0LL;
  if ( v1 )
    return *(void **)(v1 + 96);
  return result;
}
