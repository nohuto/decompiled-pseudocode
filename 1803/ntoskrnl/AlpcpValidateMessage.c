/*
 * XREFs of AlpcpValidateMessage @ 0x1404CF278
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpValidateConnectionMessage @ 0x1404DD524 (AlpcpValidateConnectionMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpValidateMessage(unsigned __int16 *a1, char a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx

  v2 = *a1;
  v4 = *a1 + 40;
  if ( v2 < (unsigned __int16)(v2 + 40) )
  {
    v5 = v2 + 40LL;
    v6 = a1[1];
    if ( a2 )
    {
      if ( v5 <= v6 )
      {
        a1[1] = v4;
        return 0LL;
      }
    }
    else if ( v5 == v6 )
    {
      return 0LL;
    }
  }
  return 3221225485LL;
}
