/*
 * XREFs of ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C00DD7E4
 * Callers:
 *     RIMWatchDog @ 0x1C003B3D0 (RIMWatchDog.c)
 * Callees:
 *     BugCheckMachine @ 0x1C00A0B2C (BugCheckMachine.c)
 */

void __fastcall WatchDogBugCheckMachine(struct RawInputManagerObject *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  int v5; // ecx

  if ( !PsGetProcessDebugPort(*((_QWORD *)a1 + 4)) )
    BugCheckMachine(v5, a2, a3);
}
