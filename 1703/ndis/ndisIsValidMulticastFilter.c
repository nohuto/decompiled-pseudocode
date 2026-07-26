/*
 * XREFs of ndisIsValidMulticastFilter @ 0x1C001E744
 * Callers:
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00A7EEC (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00B9FB8 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00BA148 (ndisSetOpenEthMulticastList.c)
 * Callees:
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 */

__int64 __fastcall ndisIsValidMulticastFilter(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // al
  unsigned int v9; // ecx
  __int64 v11; // rcx

  v3 = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 224) & 0x2000000) != 0 && (*(_DWORD *)(a3 + 88) & 0x20) != 0 )
      return (unsigned int)-1073741637;
    if ( (*(_DWORD *)(a3 + 88) & 0x20) != 0 )
    {
      v7 = (KSPIN_LOCK *)(a2 + 232);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 232));
      *(_DWORD *)(a2 + 224) |= 0x1000000u;
      KeReleaseSpinLock(v7, v8);
    }
  }
  if ( *(_DWORD *)(a1 + 464) )
  {
    *(_QWORD *)(a3 + 52) = 0LL;
    v3 = -1073741637;
    if ( (unsigned __int8)byte_1C0092612 < 2u )
      return v3;
    v11 = 113LL;
LABEL_17:
    WPP_SF_qqq(v11, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, a3);
    return v3;
  }
  v9 = *(_DWORD *)(a3 + 48);
  if ( v9 % 6 )
  {
    *(_QWORD *)(a3 + 52) = 0LL;
    v3 = -1073676268;
    if ( (unsigned __int8)byte_1C0092612 < 2u )
      return v3;
    v11 = 114LL;
    goto LABEL_17;
  }
  if ( v9 / 6 > *(_DWORD *)(*(_QWORD *)(a1 + 400) + 344LL) )
  {
    *(_QWORD *)(a3 + 52) = 0LL;
    v3 = -1073676279;
    if ( (unsigned __int8)byte_1C0092612 >= 2u )
    {
      v11 = 115LL;
      goto LABEL_17;
    }
  }
  return v3;
}
