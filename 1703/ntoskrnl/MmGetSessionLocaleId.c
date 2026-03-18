/*
 * XREFs of MmGetSessionLocaleId @ 0x1404F89CC
 * Callers:
 *     NtQueryDefaultLocale @ 0x1404432C0 (NtQueryDefaultLocale.c)
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 * Callees:
 *     PsIsSystemProcess @ 0x14008B4F0 (PsIsSystemProcess.c)
 */

__int64 MmGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v1; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || PsIsSystemProcess(Process) )
    return (unsigned int)PsDefaultThreadLocaleId;
  else
    return *(unsigned int *)(v1 + 112);
}
