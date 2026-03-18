/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x140560B60
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 *     LpcpRequestWaitReplyPort @ 0x140560A98 (LpcpRequestWaitReplyPort.c)
 *     LpcpReplyWaitReplyPort @ 0x140747000 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall AlpcpProbeForWriteMessageHeader(unsigned __int64 a1, int a2)
{
  __int64 v3; // rcx
  char result; // al
  __int64 v5; // rcx

  if ( (a2 & 0xC0000000) == 0x80000000 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    result = *(_BYTE *)(v5 + 23);
    *(_BYTE *)(v5 + 23) = result;
  }
  else
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v3 = a1;
    *(_BYTE *)v3 = *(_BYTE *)v3;
    result = *(_BYTE *)(v3 + 39);
    *(_BYTE *)(v3 + 39) = result;
  }
  return result;
}
