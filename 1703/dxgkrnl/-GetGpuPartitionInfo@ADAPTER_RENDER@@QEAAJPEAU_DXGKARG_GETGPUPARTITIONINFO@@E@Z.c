/*
 * XREFs of ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@E@Z @ 0x1C002A29C
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0026584 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C0033ACC (DxgkDdiGetGpuPartitionInfo.c)
 * Callees:
 *     ?DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C002780C (-DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetGpuPartitionInfo(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETGPUPARTITIONINFO *a2,
        char a3)
{
  int GpuPartitionInfo; // esi
  __int64 result; // rax
  __int64 v8; // rdx
  USHORT *pGpuPartitionOptions; // rax
  __int64 CurrentGpuPartitionCount; // rcx
  __int64 v11; // rax
  unsigned __int128 v12; // rax
  void *v13; // rax

  GpuPartitionInfo = 0;
  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(this);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      if ( !a2->NumGpuPartitionOptions )
        return 3221225507LL;
      pGpuPartitionOptions = a2->pGpuPartitionOptions;
      a2->CurrentGpuPartitionCount = 16;
      a2->NumGpuPartitionOptions = 1;
      *pGpuPartitionOptions = 16;
    }
    else
    {
      GpuPartitionInfo = ADAPTER_RENDER::DdiGetGpuPartitionInfo(this, a2);
      if ( GpuPartitionInfo < 0 )
        return (unsigned int)GpuPartitionInfo;
    }
    CurrentGpuPartitionCount = a2->CurrentGpuPartitionCount;
    if ( (_DWORD)CurrentGpuPartitionCount != *((_DWORD *)this + 282) && (_WORD)CurrentGpuPartitionCount )
    {
      if ( *((_QWORD *)this + 142) )
      {
        v11 = WdLogNewEntry5_WdError(CurrentGpuPartitionCount, v8);
        *(_QWORD *)(v11 + 24) = 1174LL;
        WdLogEvent5_WdError(v11);
        return 3221225473LL;
      }
      v12 = a2->CurrentGpuPartitionCount * (unsigned __int128)8uLL;
      if ( !is_mul_ok(a2->CurrentGpuPartitionCount, 8uLL) )
        *(_QWORD *)&v12 = -1LL;
      v13 = operator new(v12, DWORD2(v12), 1, PagedPool);
      *((_QWORD *)this + 142) = v13;
      if ( !v13 )
        return 3221225495LL;
      *((_DWORD *)this + 282) = a2->CurrentGpuPartitionCount;
    }
    return (unsigned int)GpuPartitionInfo;
  }
  return result;
}
