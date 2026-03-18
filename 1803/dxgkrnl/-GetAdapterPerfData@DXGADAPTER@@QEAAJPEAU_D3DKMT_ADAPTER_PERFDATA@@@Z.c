/*
 * XREFs of ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C0149194
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0168B08 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::GetAdapterPerfData(DXGADAPTER *this, struct _D3DKMT_ADAPTER_PERFDATA *a2, __int64 a3)
{
  __int64 PhysicalAdapterIndex; // r15
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v17; // rax
  struct _DXGKARG_QUERYADAPTERINFO v18; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+88h] [rbp+38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+40h] BYREF

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 62)) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v6 = *((_QWORD *)this + 295) + 352 * PhysicalAdapterIndex;
    v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v8 = v7;
    if ( *((_DWORD *)this + 34) == 1
      || 1000 * (v7.QuadPart - *(_QWORD *)(v6 + 184)) / PerformanceFrequency.QuadPart < 450 )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      v19 = PhysicalAdapterIndex;
      memset(&v18, 0, sizeof(v18));
      v18.Type = DXGKQAITYPE_ADAPTERPERFDATA;
      v18.pInputData = &v19;
      v18.InputDataSize = 4;
      v18.pOutputData = (void *)(v6 + 128);
      v18.OutputDataSize = 53;
      v10 = DXGADAPTER::DdiQueryAdapterInfo(this, &v18, v9);
      v14 = v10;
      if ( v10 < 0 )
      {
        v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v15 + 24) = this;
        *(_QWORD *)(v15 + 32) = v14;
        WdLogEvent5_WdWarning(v15);
      }
      else
      {
        *(LARGE_INTEGER *)(v6 + 184) = v8;
      }
    }
    if ( (int)v14 >= 0 )
    {
      a2->MemoryFrequency = *(_QWORD *)(v6 + 128);
      a2->MaxMemoryFrequency = *(_QWORD *)(v6 + 136);
      a2->MaxMemoryFrequencyOC = *(_QWORD *)(v6 + 144);
      a2->MemoryBandwidth = *(_QWORD *)(v6 + 152);
      a2->PCIEBandwidth = *(_QWORD *)(v6 + 160);
      a2->FanRPM = *(_DWORD *)(v6 + 168);
      a2->Power = *(_DWORD *)(v6 + 172);
      a2->Temperature = *(_DWORD *)(v6 + 176);
      a2->PowerStateOverride = *(_BYTE *)(v6 + 180);
    }
    return (unsigned int)v14;
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdWarning(v17);
    return 3221225485LL;
  }
}
