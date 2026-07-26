/*
 * XREFs of ndisFakeFilterReceiveHandler @ 0x1C00599F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0016B0C (ndisInvokeNextReceiveCompleteHandler.c)
 */

void __fastcall ndisFakeFilterReceiveHandler(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // r8
  unsigned int v7; // edx

  if ( (a5 & 2) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    v7 = a5 & 1;
    if ( v6 )
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        v7,
        (struct _NDIS_FILTER_BLOCK *)v6,
        *(_BYTE **)(v6 + 560),
        *(void **)(v6 + 544),
        *(void (**)(void))(v6 + 536));
    else
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        v7,
        *(struct _NDIS_FILTER_BLOCK **)(a1 + 32),
        *(_BYTE **)(*(_QWORD *)(a1 + 32) + 2552LL),
        *(void **)(*(_QWORD *)(a1 + 32) + 2536LL),
        *(void (**)(void))(*(_QWORD *)(a1 + 32) + 2648LL));
  }
}
