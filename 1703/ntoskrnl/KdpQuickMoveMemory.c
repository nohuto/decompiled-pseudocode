/*
 * XREFs of KdpQuickMoveMemory @ 0x14078C5C8
 * Callers:
 *     KdpGetContextEx @ 0x1401FBBE8 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1401FBDB0 (KdpSetContextEx.c)
 *     KdpReportExceptionStateChange @ 0x14078A4FC (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x14078A7DC (KdpSearchMemory.c)
 *     KdpPrint @ 0x14078BCF4 (KdpPrint.c)
 *     KdpPrompt @ 0x14078BE68 (KdpPrompt.c)
 *     KdpCopyContext @ 0x14078C400 (KdpCopyContext.c)
 * Callees:
 *     <none>
 */

char __fastcall KdpQuickMoveMemory(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 )
  {
    v3 = a1 - (_QWORD)a2;
    do
    {
      result = *a2;
      a2[v3] = *a2;
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
