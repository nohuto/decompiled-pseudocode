/*
 * XREFs of ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C00BFC10
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00CA5B4 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0095DE0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C009F354 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::PopDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
    this + 35,
    (__int64)a3,
    (__int64)a4);
  if ( *a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v16 + 24) = 8204LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v12 = *((_DWORD *)this + v4 + 306);
  v13 = v4;
  if ( *a3 < v12 )
  {
    v8 = this[v4 + 137];
    do
    {
      v17 = *a3;
      if ( *((_QWORD *)v8 + v17) )
        break;
      v18 = v17 + 1;
      *a3 = v18;
    }
    while ( v18 < v12 );
  }
  if ( *a3 == v12 )
  {
    *a4 = 1;
    v14 = 0LL;
  }
  else
  {
    v19 = *a3;
    v14 = *((_QWORD *)this[v4 + 137] + v19);
    if ( !v14 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19, v8, v10, v11);
      *(_QWORD *)(v20 + 24) = 8218LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *a3 != ((*(_DWORD *)(v14 + 72) >> 1) & 0x3FF) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v19, v8, v10, v11);
      *(_QWORD *)(v21 + 24) = 8219LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( !*((_DWORD *)this + v13 + 322) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v19, v8, v10, v11);
      *(_QWORD *)(v22 + 24) = 8220LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = *a3;
    *((_QWORD *)this[v13 + 137] + v23) = 0LL;
    --*((_DWORD *)this + v13 + 322);
    *(_DWORD *)(v14 + 72) &= 0xFFFFF801;
    *a3 = v23 + 1;
    if ( *((_DWORD *)this + v13 + 306) == (_DWORD)v23 + 1 )
      *a4 = 1;
    if ( !*(_QWORD *)(v14 + 40) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23, v8, v10, v11);
      *(_QWORD *)(v24 + 24) = 8239LL;
      WdLogEvent5_WdAssertion(v24);
    }
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v14);
    DxgkReferenceDxgResource(*(struct _EX_RUNDOWN_REF **)(v14 + 40));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return (struct DXGALLOCATION *)v14;
}
