/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x140464544
 * Callers:
 *     LpcpRequestWaitReplyPort @ 0x140463C18 (LpcpRequestWaitReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x140464104 (NtReplyWaitReceivePortEx.c)
 *     AlpcpReceiveLegacyMessage @ 0x140464260 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x14046750C (AlpcpProcessConnectionRequest.c)
 *     LpcpReplyWaitReplyPort @ 0x1406DC390 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall AlpcpProbeForWriteMessageHeader(unsigned __int64 a1, int a2)
{
  __int64 v3; // rcx
  char result; // al
  __int64 v5; // rcx

  if ( a2 >= 0 || (a2 & 0x40000000) != 0 )
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
  else
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
  return result;
}
