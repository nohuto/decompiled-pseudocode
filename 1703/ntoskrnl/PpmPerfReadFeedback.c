/*
 * XREFs of PpmPerfReadFeedback @ 0x14006F920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char PpmPerfReadFeedback()
{
  char v0; // bl

  v0 = 0;
  if ( !PpmPerfControlReadFeedback )
    return 1;
  PpmPerfControlReadFeedback(PpmPerfControlActionCallback);
  return v0;
}
