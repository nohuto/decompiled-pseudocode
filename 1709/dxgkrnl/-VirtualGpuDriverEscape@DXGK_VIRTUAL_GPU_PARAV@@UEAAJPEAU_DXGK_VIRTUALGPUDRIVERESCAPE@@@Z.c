/*
 * XREFs of ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C018E640
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?ReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0189834 (-ReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_READVIRTUAL.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2)
{
  unsigned int VirtualFunctionConfig; // ebp
  unsigned __int64 InputBufferSize; // rdx
  __int64 v6; // rcx
  __int64 OutputBufferSize; // rax
  unsigned int *pInputBuffer; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  PVOID pOutputBuffer; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  VirtualFunctionConfig = 0;
  InputBufferSize = a2->InputBufferSize;
  if ( (unsigned int)InputBufferSize < 0xC )
  {
    v6 = WdLogNewEntry5_WdError(this);
    OutputBufferSize = a2->InputBufferSize;
LABEL_3:
    *(_QWORD *)(v6 + 24) = OutputBufferSize;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  pInputBuffer = (unsigned int *)a2->pInputBuffer;
  v10 = pInputBuffer[2];
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = (unsigned int)(v13 - 1);
          if ( (_DWORD)v14 )
          {
            if ( (_DWORD)v14 != 1 )
            {
              v6 = WdLogNewEntry5_WdError(v14);
              OutputBufferSize = (int)pInputBuffer[2];
              *(_QWORD *)(v6 + 32) = 391LL;
              goto LABEL_3;
            }
            if ( (unsigned int)InputBufferSize < 0x10 )
            {
              v6 = WdLogNewEntry5_WdError(v14);
              OutputBufferSize = a2->InputBufferSize;
              *(_QWORD *)(v6 + 32) = 380LL;
              goto LABEL_3;
            }
            v15 = bTracingEnabled == 0;
            v16 = *(&a2->OutputBufferSize + 1);
            *((_DWORD *)this + 28) = v16;
            if ( !v15 )
              VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE", (wchar_t *)L"%d", v16);
          }
          else
          {
            if ( a2->OutputBufferSize != 4 )
            {
              v6 = WdLogNewEntry5_WdError(v14);
              OutputBufferSize = a2->InputBufferSize;
              *(_QWORD *)(v6 + 32) = 342LL;
              goto LABEL_3;
            }
            *(_DWORD *)a2->pOutputBuffer = 1;
          }
        }
        else
        {
          if ( bTracingEnabled )
            VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RELEASE", 0LL);
          *((_BYTE *)this + 116) = 0;
        }
      }
      else
      {
        if ( bTracingEnabled )
          VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE", 0LL);
        *((_BYTE *)this + 116) = 1;
      }
    }
    else
    {
      if ( (unsigned int)InputBufferSize < 0x14 )
      {
        v6 = WdLogNewEntry5_WdError(v11);
        OutputBufferSize = a2->InputBufferSize;
        *(_QWORD *)(v6 + 32) = 322LL;
        goto LABEL_3;
      }
      v17 = pInputBuffer[4];
      if ( (unsigned int)v17 >= 0xFFFF || (v11 = v17 + 20, InputBufferSize < v17 + 20) )
      {
        v6 = WdLogNewEntry5_WdError(v11);
        OutputBufferSize = a2->InputBufferSize;
        *(_QWORD *)(v6 + 32) = 328LL;
        goto LABEL_3;
      }
      if ( bTracingEnabled )
        VgpuTrace(
          1,
          0,
          this,
          L"DXGKVGPU_ESCAPE_TYPE_WRITE_PCI_CONFIG",
          (wchar_t *)L"(offset, size)  %d %d",
          pInputBuffer[3],
          v17);
    }
  }
  else
  {
    if ( (unsigned int)InputBufferSize < 0x14 )
    {
      v6 = WdLogNewEntry5_WdError(v10);
      OutputBufferSize = a2->InputBufferSize;
      *(_QWORD *)(v6 + 32) = 297LL;
      goto LABEL_3;
    }
    if ( a2->OutputBufferSize < pInputBuffer[4] )
    {
      v6 = WdLogNewEntry5_WdError(v10);
      OutputBufferSize = a2->OutputBufferSize;
      *(_QWORD *)(v6 + 32) = 303LL;
      goto LABEL_3;
    }
    v18 = *((_QWORD *)this + 1);
    v20 = 0LL;
    v21 = 0LL;
    pOutputBuffer = a2->pOutputBuffer;
    LODWORD(v20) = a2->PartitionId;
    HIDWORD(v20) = pInputBuffer[3];
    LODWORD(v21) = pInputBuffer[4];
    VirtualFunctionConfig = ADAPTER_RENDER::ReadVirtualFunctionConfig(v18, 1, (__int64)&pOutputBuffer);
    if ( bTracingEnabled )
      VgpuTrace(
        1,
        VirtualFunctionConfig,
        this,
        L"DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG",
        L"(offset, size) %d %d",
        pInputBuffer[3],
        pInputBuffer[4]);
  }
  return VirtualFunctionConfig;
}
