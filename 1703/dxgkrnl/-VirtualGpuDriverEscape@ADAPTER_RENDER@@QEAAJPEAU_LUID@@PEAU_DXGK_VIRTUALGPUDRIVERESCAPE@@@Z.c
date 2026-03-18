/*
 * XREFs of ?VirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C002B184
 * Callers:
 *     DxgkDdiVirtualGpuDriverEscape @ 0x1C0033F3C (DxgkDdiVirtualGpuDriverEscape.c)
 * Callees:
 *     ?DdiVirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C0029720 (-DdiVirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z @ 0x1C002A204 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z.c)
 *     ?ReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C002A89C (-ReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::VirtualGpuDriverEscape(
        ADAPTER_RENDER *this,
        struct _LUID *a2,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a3)
{
  unsigned int v5; // edi
  ULONG VirtualGpuByLuid; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  char v12; // r8
  ULONG InputBufferSize; // eax
  unsigned int *pInputBuffer; // rsi
  __int64 v15; // rcx
  PVOID pOutputBuffer; // rax
  _DXGKARG_READVIRTUALFUNCTIONCONFIG v17; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(this, a2);
  v8 = VirtualGpuByLuid;
  a3->PartitionId = VirtualGpuByLuid;
  if ( VirtualGpuByLuid == -1 )
  {
    v9 = WdLogNewEntry5_WdError(v7, 0xFFFFFFFFLL);
    *(_QWORD *)(v9 + 24) = 1992LL;
LABEL_3:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 142) + 8LL * VirtualGpuByLuid);
  v12 = *(_BYTE *)(v11 + 121);
  if ( !v12 )
    return (unsigned int)ADAPTER_RENDER::DdiVirtualGpuDriverEscape(this, a3);
  InputBufferSize = a3->InputBufferSize;
  if ( InputBufferSize < 0xC )
  {
    v9 = WdLogNewEntry5_WdError(v11, v8);
    *(_QWORD *)(v9 + 24) = a3->InputBufferSize;
    goto LABEL_3;
  }
  pInputBuffer = (unsigned int *)a3->pInputBuffer;
  v15 = pInputBuffer[2];
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 != 4 )
    {
      v9 = WdLogNewEntry5_WdError(v15, v8);
      *(_QWORD *)(v9 + 24) = (int)pInputBuffer[2];
      *(_QWORD *)(v9 + 32) = 2039LL;
      goto LABEL_3;
    }
    if ( a3->OutputBufferSize != 4 )
    {
      v9 = WdLogNewEntry5_WdError(v15, v8);
      *(_QWORD *)(v9 + 24) = a3->InputBufferSize;
      *(_QWORD *)(v9 + 32) = 2032LL;
      goto LABEL_3;
    }
    *(_DWORD *)a3->pOutputBuffer = v12 == 1;
    return v5;
  }
  if ( InputBufferSize < 0x14 )
  {
    v9 = WdLogNewEntry5_WdError(v15, v8);
    *(_QWORD *)(v9 + 24) = a3->InputBufferSize;
    *(_QWORD *)(v9 + 32) = 2011LL;
    goto LABEL_3;
  }
  if ( a3->OutputBufferSize < pInputBuffer[4] )
  {
    v9 = WdLogNewEntry5_WdError(v15, v8);
    *(_QWORD *)(v9 + 24) = a3->OutputBufferSize;
    *(_QWORD *)(v9 + 32) = 2017LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v17.VirtualFunctionIndex = 0LL;
  *(_QWORD *)&v17.Length = 0LL;
  pOutputBuffer = a3->pOutputBuffer;
  v17.VirtualFunctionIndex = v8;
  v17.Data = pOutputBuffer;
  v17.Offset = pInputBuffer[3];
  v17.Length = pInputBuffer[4];
  return ADAPTER_RENDER::ReadVirtualFunctionConfig((unsigned __int64)this, &v17);
}
