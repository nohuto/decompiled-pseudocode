/*
 * XREFs of ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B362C
 * Callers:
 *     ??1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ @ 0x1800B2D58 (--1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ.c)
 *     ??1DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ @ 0x1800B3388 (--1DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ.c)
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800B67B0 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1800B6A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B9DCC (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 * Callees:
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800BC754 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v4; // rax
  struct HolographicDriverClientContinuousTrace *v5; // rax

  v2 = *(volatile signed __int32 **)(a1 + 224);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 224));
    }
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 64) )
  {
    v4 = GetProcessHeap();
    HeapFree(v4, 0, *(LPVOID *)(a1 + 56));
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v5 = HolographicDriverClientContinuousTrace::Instance();
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v5 + 1), a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
