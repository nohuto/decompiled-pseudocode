/*
 * XREFs of ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C0189144
 * Callers:
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C0189EF0 (DxgkDdiGetGpuPartitionInfo.c)
 * Callees:
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0189A14 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 *     ?DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C018B114 (-DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetGpuPartitionInfo(
        ADAPTER_RENDER *a1,
        int a2,
        struct _DXGKARG_GETGPUPARTITIONINFO *a3)
{
  __int64 v5; // rbx
  USHORT *pGpuPartitionOptions; // rcx
  USHORT CurrentGpuPartitionCount; // cx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v5) = 0;
  if ( a2 == 1 )
  {
    if ( !a3->NumGpuPartitionOptions )
      return 3221225507LL;
    if ( *((_QWORD *)a1 + 154)
      || (v13 = 32, LODWORD(v5) = ADAPTER_RENDER::SetGpuPartitionCount(a1, 1LL, &v13), (int)v5 >= 0) )
    {
      pGpuPartitionOptions = a3->pGpuPartitionOptions;
      a3->CurrentGpuPartitionCount = *(_WORD *)(*((_QWORD *)a1 + 154) + 12LL);
      a3->NumGpuPartitionOptions = 1;
      *pGpuPartitionOptions = 32;
    }
  }
  else
  {
    LODWORD(v5) = ADAPTER_RENDER::DdiGetGpuPartitionInfo(a1, a3);
    if ( (int)v5 >= 0 )
    {
      CurrentGpuPartitionCount = a3->CurrentGpuPartitionCount;
      if ( CurrentGpuPartitionCount )
      {
        v9 = *((_QWORD *)a1 + 153);
        if ( !v9 || *(_DWORD *)(v9 + 12) != CurrentGpuPartitionCount )
        {
          v13 = CurrentGpuPartitionCount;
          v10 = ADAPTER_RENDER::SetGpuPartitionCount(a1, 0LL, &v13);
          v5 = v10;
          if ( v10 < 0 )
          {
            v12 = WdLogNewEntry5_WdError(v11);
            *(_QWORD *)(v12 + 24) = v5;
            WdLogEvent5_WdError(v12);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
