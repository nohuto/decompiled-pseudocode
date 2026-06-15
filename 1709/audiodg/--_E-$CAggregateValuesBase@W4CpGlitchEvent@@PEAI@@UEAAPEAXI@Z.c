/*
 * XREFs of ??_E?$CAggregateValuesBase@W4CpGlitchEvent@@PEAI@@UEAAPEAXI@Z @ 0x140056EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
