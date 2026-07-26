/*
 * XREFs of ndisClearReceiveFilter @ 0x1C0039BD8
 * Callers:
 *     ndisOidPostRcvFilterClearFilter @ 0x1C003A3E0 (ndisOidPostRcvFilterClearFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C003A720 (ndisOidPostRcvFilterSetFilter.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0039E14 (ndisDereferenceReceiveFilter.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C003A14C (ndisFindReceiveFilterByFilterId.c)
 */

__int64 __fastcall ndisClearReceiveFilter(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 ReceiveFilterByFilterId; // rax
  void *v6; // r14
  KIRQL v7; // r10

  v4 = 0;
  if ( (unsigned __int8)byte_1C0098760 >= 4u )
    WPP_SF_qD(0x19u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2690060;
  ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  v6 = (void *)ReceiveFilterByFilterId;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  if ( v6 )
    ndisDereferenceReceiveFilter(v6);
  else
    v4 = -1073741811;
  if ( (unsigned __int8)byte_1C0098760 >= 4u )
    WPP_SF_qdD(0x1Au, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, a1, a2, v4);
  return v4;
}
