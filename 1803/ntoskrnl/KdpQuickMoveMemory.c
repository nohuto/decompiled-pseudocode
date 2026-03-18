/*
 * XREFs of KdpQuickMoveMemory @ 0x1408068D4
 * Callers:
 *     KdpGetContextEx @ 0x14023EA50 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x14023EC20 (KdpSetContextEx.c)
 *     KdpReportExceptionStateChange @ 0x1408047DC (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x140804AC0 (KdpSearchMemory.c)
 *     KdpPrint @ 0x140805FF8 (KdpPrint.c)
 *     KdpPrompt @ 0x14080616C (KdpPrompt.c)
 *     KdpCopyContext @ 0x140806704 (KdpCopyContext.c)
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
