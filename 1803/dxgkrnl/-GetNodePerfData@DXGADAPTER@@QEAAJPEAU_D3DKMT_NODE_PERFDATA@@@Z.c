/*
 * XREFs of ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01494B4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0168B08 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::GetNodePerfData(unsigned __int64 this, struct _D3DKMT_NODE_PERFDATA *a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 PhysicalAdapterIndex; // r15
  unsigned __int16 *v6; // r13
  __int64 v7; // r12
  ULONG *v8; // r14
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v19; // rax
  struct _DXGKARG_QUERYADAPTERINFO v20; // [rsp+20h] [rbp-30h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+50h] BYREF

  v4 = this;
  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *(_DWORD *)(this + 248))
    && (this = a2->NodeOrdinal,
        v21 = this,
        v6 = (unsigned __int16 *)(*(_QWORD *)(v4 + 2360) + 352 * PhysicalAdapterIndex),
        (unsigned int)this < *v6) )
  {
    v7 = (unsigned int)this;
    v8 = (ULONG *)(*((_QWORD *)v6 + 14) + 36 * this);
    PerformanceFrequency.QuadPart = 0LL;
    v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v10 = v9;
    if ( *(_DWORD *)(v4 + 136) == 1
      || 1000 * (v9.QuadPart - *(_QWORD *)(*((_QWORD *)v6 + 15) + 8 * v7)) / PerformanceFrequency.QuadPart < 450 )
    {
      LODWORD(v16) = 0;
    }
    else
    {
      v21 |= (_DWORD)PhysicalAdapterIndex << 16;
      memset(&v20, 0, sizeof(v20));
      v20.Type = DXGKQAITYPE_NODEPERFDATA;
      v20.pInputData = &v21;
      v20.InputDataSize = 4;
      v20.pOutputData = v8;
      v20.OutputDataSize = 36;
      v12 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v4, &v20, v11);
      v16 = v12;
      if ( v12 < 0 )
      {
        v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v17 + 24) = v4;
        *(_QWORD *)(v17 + 32) = v16;
        WdLogEvent5_WdWarning(v17);
      }
      else
      {
        *(LARGE_INTEGER *)(*((_QWORD *)v6 + 15) + 8 * v7) = v10;
      }
    }
    if ( (int)v16 >= 0 )
    {
      a2->Frequency = *(_QWORD *)v8;
      a2->MaxFrequency = *((_QWORD *)v8 + 1);
      a2->MaxFrequencyOC = *((_QWORD *)v8 + 2);
      a2->Voltage = v8[6];
      a2->VoltageMax = v8[7];
      a2->VoltageMaxOC = v8[8];
    }
    return (unsigned int)v16;
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v19 + 24) = v4;
    WdLogEvent5_WdWarning(v19);
    return 3221225485LL;
  }
}
