/*
 * XREFs of ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C002A3A8
 * Callers:
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0033C0C (DxgkDdiGetVirtualGpuInfo.c)
 * Callees:
 *     ?DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@@Z @ 0x1C0027DD4 (-DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuInfo(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETVIRTUALGPUINFO *a2,
        struct _LUID *a3,
        struct _GUID *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 PartitionId; // rdx
  __int64 v12; // rax

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(this);
  if ( (int)result >= 0 )
  {
    PartitionId = a2->PartitionId;
    if ( (unsigned int)PartitionId < *((_DWORD *)this + 282)
      && (v10 = *(_QWORD *)(*((_QWORD *)this + 142) + 8 * PartitionId)) != 0
      && (_DWORD)PartitionId == *(_DWORD *)(v10 + 16) )
    {
      *a3 = *(struct _LUID *)(v10 + 20);
      *a4 = *(struct _GUID *)(*(_QWORD *)(*((_QWORD *)this + 142) + 8LL * a2->PartitionId) + 28LL);
      if ( *(_BYTE *)(v10 + 121) )
      {
        a2->Capability[0].MinValue = 0LL;
        a2->Capability[0].MaxValue = 1000000000LL;
        a2->Capability[0].CurrentValue = 1000000000LL;
        a2->Capability[1].MaxValue = 1000000000LL;
        a2->Capability[1].CurrentValue = 1000000000LL;
        a2->Capability[2].MaxValue = 1000000000LL;
        a2->Capability[2].CurrentValue = 1000000000LL;
        a2->Capability[3].MaxValue = 1000000000LL;
        result = 0LL;
        a2->Capability[1].MinValue = 0LL;
        a2->Capability[2].MinValue = 0LL;
        a2->Capability[3].MinValue = 0LL;
        a2->Capability[3].CurrentValue = 0LL;
      }
      else
      {
        return ADAPTER_RENDER::DdiGetVirtualGpuInfo(this, a2);
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdWarning(v9, PartitionId, v10, 0LL);
      *(_QWORD *)(v12 + 24) = a2->PartitionId;
      WdLogEvent5_WdWarning(v12);
      return 3221225485LL;
    }
  }
  return result;
}
