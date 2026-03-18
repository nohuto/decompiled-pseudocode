/*
 * XREFs of KdpQuickMoveMemory @ 0x1407997EC
 * Callers:
 *     KdpGetContextEx @ 0x140201908 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x140201AD0 (KdpSetContextEx.c)
 *     KdpReportExceptionStateChange @ 0x140797730 (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x140797A0C (KdpSearchMemory.c)
 *     KdpPrint @ 0x140798F18 (KdpPrint.c)
 *     KdpPrompt @ 0x14079908C (KdpPrompt.c)
 *     KdpCopyContext @ 0x140799624 (KdpCopyContext.c)
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
