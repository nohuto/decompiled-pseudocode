/*
 * XREFs of MmGetSessionLocaleId @ 0x14053F4DC
 * Callers:
 *     NtQueryDefaultLocale @ 0x14053D764 (NtQueryDefaultLocale.c)
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v1; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    return (unsigned int)PsDefaultThreadLocaleId;
  else
    return *(unsigned int *)(v1 + 112);
}
