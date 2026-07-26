/*
 * XREFs of ndisQueryMiniportRSSParameters @ 0x1C0046E70
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00C4530 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001CBE8 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCalculateRssParametersSize @ 0x1C001CF9C (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisQueryMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v3; // edi
  KIRQL v5; // r14
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // r12
  int v7; // r15d
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x99u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2305326;
  if ( a1->RecvScaleCapabilities.Header.Size )
  {
    if ( !ndisIsRssEnabledForMiniport(a1)
      || (CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters,
          (v3 = ndisCalculateRssParametersSize((__int64)CombinedNdisRSSParameters, (unsigned int *)&Size)) != 0) )
    {
      *(_DWORD *)(a2 + 52) = 0;
    }
    else
    {
      v7 = Size;
      v3 = 0;
      if ( *(_DWORD *)(a2 + 48) >= (unsigned int)Size )
      {
        memmove(*(void **)(a2 + 40), CombinedNdisRSSParameters, (unsigned int)Size);
        *(_DWORD *)(a2 + 52) = v7;
      }
      else
      {
        *(_DWORD *)(a2 + 56) = Size;
        v3 = -1073676268;
      }
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v5);
  }
  else
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v5);
    v3 = -1073741637;
    *(_DWORD *)(a2 + 52) = 0;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x9Au, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, (__int64)a1, v3);
  return v3;
}
