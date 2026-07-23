/*
 * XREFs of LdrCallEnclave @ 0x1800C9690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl LdrCallEnclave(PENCLAVE_ROUTINE Routine, ULONG Flags, PVOID *RoutineParamReturn)
{
  return LdrCallEnclave_0(Routine, Flags, RoutineParamReturn);
}
