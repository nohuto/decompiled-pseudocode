/*
 * XREFs of ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C002AC08
 * Callers:
 *     DxgkDdiSetGpuPartitionCount @ 0x1C0033E8C (DxgkDdiSetGpuPartitionCount.c)
 * Callees:
 *     ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0028F30 (-DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetGpuPartitionCount(void **this, struct _DXGKARG_SETGPUPARTITIONCOUNT *a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int128 v12; // rax
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edi

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)this);
  if ( (int)result >= 0 )
  {
    if ( *((_DWORD *)this + 283) )
    {
      v11 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
      *(_QWORD *)(v11 + 24) = 1299LL;
      WdLogEvent5_WdWarning(v11);
      return 3221225485LL;
    }
    if ( a3 )
      a2->PartitionCount = 16;
    if ( a2->PartitionCount != *((_DWORD *)this + 282) )
    {
      operator delete[](this[142]);
      v12 = a2->PartitionCount * (unsigned __int128)8uLL;
      if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
        *(_QWORD *)&v12 = -1LL;
      v13 = operator new(v12, DWORD2(v12), 1, PagedPool);
      this[142] = v13;
      if ( !v13 )
      {
        v15 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v15 + 24) = 1314LL;
        WdLogEvent5_WdLowResource(v15);
        return 3221225495LL;
      }
      *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 282) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
    }
    if ( a3 )
    {
      if ( a2->PartitionCount != 16 && a2->PartitionCount != 1 )
        return 3221225485LL;
      return 0LL;
    }
    else
    {
      v16 = ADAPTER_RENDER::DdiSetGpuPartitionCount((ADAPTER_RENDER *)this, a2);
      if ( v16 < 0 )
      {
        operator delete[](this[142]);
        *((_DWORD *)this + 282) = 0;
        this[142] = 0LL;
      }
      return (unsigned int)v16;
    }
  }
  return result;
}
