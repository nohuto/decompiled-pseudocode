/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C018E0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0188FC0 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C018CC4C (-DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::InitializeVirtualGpuManager(
        ADAPTER_RENDER **this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r8
  ADAPTER_RENDER *v8; // rcx
  SIZE_T v9; // rax
  ADAPTER_RENDER *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  ADAPTER_RENDER *v14; // rcx

  if ( *((_DWORD *)this + 4) )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 468LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(this[4]);
  if ( (int)result >= 0 )
  {
    if ( a2->PartitionCount != *((_DWORD *)this + 3) )
    {
      v8 = this[3];
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      v9 = 8LL * a2->PartitionCount;
      if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
        v9 = -1LL;
      v10 = (ADAPTER_RENDER *)operator new(v9, 0x4B677844u, 1, PagedPool);
      this[3] = v10;
      if ( !v10 )
      {
        v12 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v12 + 24) = 480LL;
        WdLogEvent5_WdLowResource(v12);
        return 3221225495LL;
      }
      *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
    }
    v13 = ADAPTER_RENDER::DdiSetGpuPartitionCount(this[4], a2, v7);
    if ( v13 < 0 )
    {
      v14 = this[3];
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      *((_DWORD *)this + 3) = 0;
      this[3] = 0LL;
    }
    return (unsigned int)v13;
  }
  return result;
}
