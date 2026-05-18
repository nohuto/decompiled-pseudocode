/*
 * XREFs of sub_180009210 @ 0x180009210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180009210()
{
  DeleteCriticalSection(&stru_18000F6B8);
  if ( hHandle )
    CloseHandle(hHandle);
}
