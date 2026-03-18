/*
 * XREFs of ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C018B804
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C018C45C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00D1F10 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00D43E4 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::PopDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rsi
  unsigned int v12; // r8d
  bool v13; // zf
  struct _KTHREAD *v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v25, this + 35);
  if ( *a4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 8691LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *a3;
  v11 = v4;
  v12 = *((_DWORD *)this + v4 + 310);
  v13 = *a3 == v12;
  if ( *a3 < v12 )
  {
    v14 = this[v4 + 139];
    v15 = *a3;
    v16 = *a3;
    do
    {
      v10 = v16;
      if ( *((_QWORD *)v14 + v15) )
        break;
      *a3 = ++v15;
      v16 = v15;
      v10 = v15;
    }
    while ( v15 < v12 );
    v13 = v10 == v12;
  }
  if ( v13 )
  {
    *a4 = 1;
    v18 = 0LL;
  }
  else
  {
    v17 = v10;
    v18 = *((_QWORD *)this[v4 + 139] + v10);
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v19 + 24) = 8705LL;
      WdLogEvent5_WdAssertion(v19);
      v10 = *a3;
    }
    if ( v10 != ((*(_DWORD *)(v18 + 72) >> 1) & 0x3FF) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v20 + 24) = 8706LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( !*((_DWORD *)this + v11 + 326) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v21 + 24) = 8707LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = *a3;
    *((_QWORD *)this[v11 + 139] + v22) = 0LL;
    --*((_DWORD *)this + v11 + 326);
    *(_DWORD *)(v18 + 72) &= 0xFFFFF801;
    *a3 = v22 + 1;
    if ( *((_DWORD *)this + v11 + 310) == (_DWORD)v22 + 1 )
      *a4 = 1;
    if ( !*(_QWORD *)(v18 + 40) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v23 + 24) = 8726LL;
      WdLogEvent5_WdAssertion(v23);
    }
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v18);
    DxgkReferenceDxgResource(*(struct _EX_RUNDOWN_REF **)(v18 + 40));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return (struct DXGALLOCATION *)v18;
}
