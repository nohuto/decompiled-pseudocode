/*
 * XREFs of LdrpUpdateStatistics @ 0x180010768
 * Callers:
 *     LdrpWorkCallback @ 0x1800106E0 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 * Callees:
 *     <none>
 */

struct _TEB *LdrpUpdateStatistics()
{
  int v0; // ecx
  struct _TEB *result; // rax

  v0 = LdrpStatistics;
  result = NtCurrentTeb();
  if ( LdrpStatistics < (unsigned int)LdrpWorkInProgress )
    v0 = LdrpWorkInProgress;
  LdrpStatistics = v0;
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_18015F244;
  else
    ++dword_18015F248;
  return result;
}
