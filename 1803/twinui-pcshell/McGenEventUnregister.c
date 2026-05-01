/*
 * XREFs of McGenEventUnregister @ 0x180101450
 * Callers:
 *     DllMain @ 0x18009C5CC (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventUnregister(REGHANDLE *a1)
{
  REGHANDLE v2; // rcx
  ULONG result; // eax

  v2 = *a1;
  if ( !v2 )
    return 0;
  result = EventUnregister(v2);
  *a1 = 0LL;
  return result;
}
