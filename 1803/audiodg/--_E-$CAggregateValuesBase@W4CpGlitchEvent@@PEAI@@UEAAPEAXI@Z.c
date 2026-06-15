/*
 * XREFs of ??_E?$CAggregateValuesBase@W4CpGlitchEvent@@PEAI@@UEAAPEAXI@Z @ 0x140054B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
