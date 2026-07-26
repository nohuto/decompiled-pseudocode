/*
 * XREFs of ndisSendNBLToFilter @ 0x1C005A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C00589E4 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C005A5A4 (ndisFLoopbackNetBufferLists.c)
 */

void __fastcall ndisSendNBLToFilter(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rcx
  struct _NET_BUFFER_LIST *v8; // rbp
  _NDIS_PCW_DATA_BLOCK *v9; // rax
  char v10; // r15
  __int64 v11; // r12
  KIRQL v12; // di
  unsigned int v13; // esi
  struct NDIS_PCW_CONTEXT v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = (__int64)a2;
  v5 = *(_QWORD *)(a1 + 2576);
  v8 = a2;
  if ( *(_BYTE *)v5 == 5
    && (*(_DWORD *)(v5 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v5 + 344)
    && (*(_BYTE *)(a1 + 91) && (*(_WORD *)(a1 + 1820) > 1u || *(_BYTE *)(a1 + 1999))
     || (a4 & 2) != 0
     || (*(_DWORD *)(a1 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _LOCK_STATE_EX *)v5, a2, a3, a4, (PNET_BUFFER_LIST *)&v15);
    v8 = (struct _NET_BUFFER_LIST *)v15;
  }
  if ( v8 )
  {
    v9 = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 2560);
    v12 = 2;
    v14.CurrentCpu = -1;
    v13 = *(_DWORD *)(a1 + 80);
    v14.PcwBlock = v9;
    v14.DatapathEventsMask = *(_DWORD *)(a1 + 48);
    v14.DatapathCyclesMask = v13;
    if ( v11 == a1 && (v13 & 0x80u) != 0 )
    {
      if ( (a4 & 1) == 0 )
      {
        v12 = KfRaiseIrql(2u);
        v10 = 1;
      }
      ndisPcwStartCycleCounter(&v14, 7);
      LOBYTE(v13) = v14.DatapathCyclesMask;
    }
    ndisInvokeNextSendHandler(
      v8,
      a3,
      a4,
      *(struct _NDIS_FILTER_BLOCK **)(a1 + 2576),
      *(void **)(a1 + 2560),
      *(void (**)(void))(a1 + 2656));
    if ( v11 == a1 )
    {
      if ( (v13 & 0x80u) != 0 )
        ndisPcwEndCycleCounter(&v14, 7, 20LL);
      if ( v10 )
      {
        if ( v12 != 2 )
          KeLowerIrql(v12);
      }
    }
  }
}
