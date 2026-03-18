/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C018E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::InitializeVirtualGpuManager(
        struct _DXGKARG_SETGPUPARTITIONCOUNT *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2,
        __int64 a3)
{
  __int64 v5; // rax
  void *v7; // rcx
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( a2->PartitionCount > 0x20 )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 440LL;
LABEL_3:
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  if ( this[4].PartitionCount )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 445LL;
    goto LABEL_3;
  }
  if ( a2->PartitionCount > this[3].PartitionCount )
  {
    v7 = *(void **)&this[6].PartitionCount;
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    v8 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v8 = -1LL;
    v9 = operator new(v8, 0x4B677844u, 1, PagedPool);
    *(_QWORD *)&this[6].PartitionCount = v9;
    if ( !v9 )
    {
      v11 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v11 + 24) = 454LL;
      WdLogEvent5_WdLowResource(v11);
      return 3221225495LL;
    }
    this[3].PartitionCount = a2->PartitionCount;
  }
  return 0LL;
}
