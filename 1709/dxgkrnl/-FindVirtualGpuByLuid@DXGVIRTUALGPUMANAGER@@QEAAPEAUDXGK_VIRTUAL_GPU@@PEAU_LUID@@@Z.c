/*
 * XREFs of ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x1C0189048
 * Callers:
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C018900C (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 * Callees:
 *     <none>
 */

struct DXGK_VIRTUAL_GPU *__fastcall DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(
        DXGVIRTUALGPUMANAGER *this,
        struct _LUID *a2)
{
  char *v3; // rdx
  char *v4; // rcx
  __int64 v5; // rax

  v3 = (char *)this + 40;
  v4 = (char *)*((_QWORD *)this + 5);
  if ( v4 == v3 )
  {
LABEL_5:
    v5 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v5 + 24) = a2->HighPart;
    *(_QWORD *)(v5 + 32) = a2->LowPart;
    WdLogEvent5_WdError(v5);
    return 0LL;
  }
  else
  {
    while ( a2->LowPart != *((_DWORD *)v4 - 15) || a2->HighPart != *((_DWORD *)v4 - 14) )
    {
      v4 = *(char **)v4;
      if ( v4 == v3 )
        goto LABEL_5;
    }
    return (struct DXGK_VIRTUAL_GPU *)(v4 - 88);
  }
}
