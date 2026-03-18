/*
 * XREFs of ?GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@E@Z @ 0x1C002A498
 * Callers:
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C0033C20 (DxgkDdiGetVirtualGpuProfile.c)
 * Callees:
 *     ?DdiGetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z @ 0x1C0027FD8 (-DdiGetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuProfile(ULONG *this, struct _DXGKARG_GETVIRTUALGPUPROFILE *a2, char a3)
{
  __int64 result; // rax

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)this);
  if ( (int)result >= 0 )
  {
    if ( !a2->PartitionCount )
      a2->PartitionCount = this[282];
    if ( a3 )
    {
      a2->VirtualizationFlags = 2304;
      a2->ProfileCapability[0].TotalValue = 1000000000LL;
      a2->ProfileCapability[0].AvailableValue = 1000000000LL;
      a2->ProfileCapability[0].MaxPartitionValue = 1000000000LL;
      a2->ProfileCapability[0].OptimalPartitionValue = 1000000000LL;
      a2->ProfileCapability[1].TotalValue = 1000000000LL;
      a2->ProfileCapability[1].AvailableValue = 1000000000LL;
      a2->ProfileCapability[1].MaxPartitionValue = 1000000000LL;
      a2->ProfileCapability[1].OptimalPartitionValue = 1000000000LL;
      a2->ProfileCapability[2].TotalValue = 1000000000LL;
      a2->ProfileCapability[2].AvailableValue = 1000000000LL;
      a2->ProfileCapability[2].MaxPartitionValue = 1000000000LL;
      a2->ProfileCapability[2].OptimalPartitionValue = 1000000000LL;
      a2->ProfileCapability[3].TotalValue = 1000000000LL;
      a2->ProfileCapability[3].AvailableValue = 1000000000LL;
      a2->ProfileCapability[3].MaxPartitionValue = 1000000000LL;
      a2->ProfileCapability[3].OptimalPartitionValue = 1000000000LL;
      result = 0LL;
      a2->ProfileCapability[0].MinPartitionValue = 0LL;
      a2->ProfileCapability[1].MinPartitionValue = 0LL;
      a2->ProfileCapability[2].MinPartitionValue = 0LL;
      a2->ProfileCapability[3].MinPartitionValue = 0LL;
    }
    else
    {
      return ADAPTER_RENDER::DdiGetVirtualGpuProfile((ADAPTER_RENDER *)this, a2);
    }
  }
  return result;
}
