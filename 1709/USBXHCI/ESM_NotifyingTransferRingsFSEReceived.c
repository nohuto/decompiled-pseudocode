/*
 * XREFs of ESM_NotifyingTransferRingsFSEReceived @ 0x1C003ECD0
 * Callers:
 *     <none>
 * Callees:
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0017820 (XilEndpoint_FetchStreamContextArray.c)
 *     TR_FSEReceived @ 0x1C0023100 (TR_FSEReceived.c)
 */

__int64 __fastcall ESM_NotifyingTransferRingsFSEReceived(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int i; // esi

  v3 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v3 + 37) && (XilEndpoint_FetchStreamContextArray(*(_QWORD *)(v3 + 136), a2, a3), *(_BYTE *)(v3 + 37)) )
  {
    v4 = *(_QWORD *)(v3 + 136);
    *(_DWORD *)(v4 + 20) = 0;
    for ( i = 1; i <= *(_DWORD *)(v4 + 8); ++i )
      TR_FSEReceived(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(v3 + 136) + 48));
  }
  else
  {
    TR_FSEReceived(*(_QWORD *)(v3 + 88));
  }
  return 29LL;
}
