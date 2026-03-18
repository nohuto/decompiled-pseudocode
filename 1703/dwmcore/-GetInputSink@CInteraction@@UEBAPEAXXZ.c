/*
 * XREFs of ?GetInputSink@CInteraction@@UEBAPEAXXZ @ 0x1801668F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CInteraction::GetInputSink(CInteraction *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 14);
  result = 0LL;
  if ( v1 )
    return *(void **)(v1 + 64);
  return result;
}
