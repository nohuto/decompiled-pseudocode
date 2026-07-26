/*
 * XREFs of ndisOidPostRcvFilterSetFilter @ 0x1C003DC90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisClearReceiveFilter @ 0x1C003D14C (ndisClearReceiveFilter.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C003D6C4 (ndisFindReceiveFilterByFilterId.c)
 */

void __fastcall ndisOidPostRcvFilterSetFilter(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned int v4; // edx
  KIRQL v5; // r10

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x16u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v2);
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 40) )
    {
      v4 = *(_DWORD *)(v3 + 16);
      if ( v4 )
        ndisClearReceiveFilter(v2, v4);
    }
    else
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v2 + 1856) = 2689783;
      ndisFindReceiveFilterByFilterId(v2, *(_DWORD *)(v3 + 16));
      *(_QWORD *)(v2 + 520) = 0LL;
      *(_DWORD *)(v2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v5);
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0x17u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v2, *(_DWORD *)(a1 + 40));
}
