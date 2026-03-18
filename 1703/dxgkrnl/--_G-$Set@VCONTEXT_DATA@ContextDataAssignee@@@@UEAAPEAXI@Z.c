/*
 * XREFs of ??_G?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z @ 0x1C00459D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C0045968 (--1-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<ContextDataAssignee::CONTEXT_DATA>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  Set<ContextDataAssignee::CONTEXT_DATA>::~Set<ContextDataAssignee::CONTEXT_DATA>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
