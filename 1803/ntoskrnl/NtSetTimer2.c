/*
 * XREFs of NtSetTimer2 @ 0x140038B1C
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400389A4 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtSetTimer2(void *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  if ( !a2 )
    return -1073741584;
  if ( a3 )
    return -1073741822;
  return ExpSetTimer2(a1, a2, a4);
}
