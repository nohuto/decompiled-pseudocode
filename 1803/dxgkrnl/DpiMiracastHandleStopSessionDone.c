/*
 * XREFs of DpiMiracastHandleStopSessionDone @ 0x1C01FF984
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C0200168 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C003CF18 (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastHandleStopSessionDone(char *P, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax

  DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 0, a3);
  if ( *(int *)(a2 + 4) >= 0 )
  {
    *((_DWORD *)P + 169) = *(_DWORD *)(a2 + 24);
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v6 + 24) = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v6);
  }
  DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) == 0 ? 0x80 : 0, 0);
}
