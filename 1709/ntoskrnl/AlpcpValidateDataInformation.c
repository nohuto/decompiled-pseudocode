/*
 * XREFs of AlpcpValidateDataInformation @ 0x1406DD468
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpValidateDataInformation(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // r9
  unsigned __int16 v5; // r9
  _DWORD *v6; // r8

  v2 = *(_WORD *)(a2 + 6);
  v3 = *(_WORD *)(a2 + 2);
  if ( v2 < 0x28u || v2 > (unsigned __int64)v3 - 24 )
    return 3221225485LL;
  v5 = v3 - v2;
  v6 = (_DWORD *)(v2 + a1);
  if ( (((unsigned __int8)*(_WORD *)(a2 + 6) + (_BYTE)a1) & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  return (unsigned int)(((unsigned __int64)v5 - 8) >> 4) < *v6 ? 0xC000000D : 0;
}
