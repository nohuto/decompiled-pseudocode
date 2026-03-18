/*
 * XREFs of PsGetNextProcessEx @ 0x1405793E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 */

void *__fastcall PsGetNextProcessEx(_QWORD *Object)
{
  void *NextProcess; // rax
  void *v3; // rbx

  if ( Object )
  {
    ObfReferenceObjectWithTag(Object, 0x6E457350u);
    ObfDereferenceObject(Object);
  }
  NextProcess = (void *)PsGetNextProcess(Object);
  v3 = NextProcess;
  if ( NextProcess )
  {
    ObfReferenceObject(NextProcess);
    ObfDereferenceObjectWithTag(v3, 0x6E457350u);
  }
  return v3;
}
