/*
 * XREFs of sub_140003B70 @ 0x140003B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140003B70()
{
  DeleteCriticalSection(&CriticalSection);
  if ( hHandle )
    CloseHandle(hHandle);
}
