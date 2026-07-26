/*
 * XREFs of ndisSendNBLToFilter @ 0x1C005AA40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0005950 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C0025720 (ndisFLoopbackNetBufferLists.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisSendNBLToFilter(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // r14d
  struct _NET_BUFFER_LIST *v7; // rsi
  _NDIS_PCW_DATA_BLOCK *v8; // rax
  char v9; // r12
  __int64 v10; // r13
  KIRQL v11; // di
  unsigned int v12; // ebp
  struct NDIS_PCW_CONTEXT v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+18h]

  v15 = a3;
  v14 = (__int64)a2;
  v5 = *(_QWORD *)(a1 + 2576);
  v6 = a4;
  v7 = a2;
  if ( *(_BYTE *)v5 == 5
    && (*(_DWORD *)(v5 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v5 + 344)
    && (*(_BYTE *)(a1 + 91) && (*(_WORD *)(a1 + 1820) > 1u || *(_BYTE *)(a1 + 1999))
     || (a4 & 2) != 0
     || (*(_DWORD *)(a1 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _LOCK_STATE_EX *)v5, a2, a3, a4, &v14);
    v7 = (struct _NET_BUFFER_LIST *)v14;
  }
  if ( v7 )
  {
    v8 = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
    v9 = 0;
    v10 = *(_QWORD *)(a1 + 2560);
    v11 = 2;
    v13.CurrentCpu = -1;
    v12 = *(_DWORD *)(a1 + 80);
    v13.PcwBlock = v8;
    v13.DatapathEventsMask = *(_DWORD *)(a1 + 48);
    v13.DatapathCyclesMask = v12;
    if ( v10 == a1 && (v12 & 0x80) != 0 )
    {
      if ( (v6 & 1) == 0 )
      {
        v11 = KfRaiseIrql(2u);
        v9 = 1;
      }
      if ( (v12 & 0x80) != 0 )
      {
        ndisPcwStartCycleCounter(&v13, 7);
        LOBYTE(v12) = v13.DatapathCyclesMask;
      }
    }
    ndisInvokeNextSendHandler(
      v7,
      v15,
      v6,
      *(struct _NDIS_FILTER_BLOCK **)(a1 + 2576),
      *(void **)(a1 + 2560),
      *(void (**)(void))(a1 + 2656));
    if ( v10 == a1 )
    {
      if ( (v12 & 0x80u) != 0 )
        ndisPcwEndCycleCounter(&v13, 7, 20LL);
      if ( v9 )
      {
        if ( v11 != 2 )
          KeLowerIrql(v11);
      }
    }
  }
}
