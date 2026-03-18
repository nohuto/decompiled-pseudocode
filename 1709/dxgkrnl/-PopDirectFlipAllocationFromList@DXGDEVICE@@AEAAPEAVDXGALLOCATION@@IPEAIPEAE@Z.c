/*
 * XREFs of ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C0092A64
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009E200 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00EEED0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00F3558 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::PopDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // rax
  struct _KTHREAD *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _BYTE v23[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, this + 35);
  if ( *a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v13 + 24) = 8237LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v9 = *((_DWORD *)this + v4 + 306);
  v10 = v4;
  if ( *a3 < v9 )
  {
    v14 = this[v4 + 137];
    do
    {
      v15 = *a3;
      if ( *((_QWORD *)v14 + v15) )
        break;
      v16 = v15 + 1;
      *a3 = v16;
    }
    while ( v16 < v9 );
  }
  if ( *a3 == v9 )
  {
    *a4 = 1;
    v11 = 0LL;
  }
  else
  {
    v17 = *a3;
    v11 = *((_QWORD *)this[v4 + 137] + v17);
    if ( !v11 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v18 + 24) = 8251LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( *a3 != ((*(_DWORD *)(v11 + 72) >> 1) & 0x3FF) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v19 + 24) = 8252LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( !*((_DWORD *)this + v10 + 322) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v20 + 24) = 8253LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = *a3;
    *((_QWORD *)this[v10 + 137] + v21) = 0LL;
    --*((_DWORD *)this + v10 + 322);
    *(_DWORD *)(v11 + 72) &= 0xFFFFF801;
    *a3 = v21 + 1;
    if ( *((_DWORD *)this + v10 + 306) == (_DWORD)v21 + 1 )
      *a4 = 1;
    if ( !*(_QWORD *)(v11 + 40) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v22 + 24) = 8272LL;
      WdLogEvent5_WdAssertion(v22);
    }
    DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v11);
    DxgkReferenceDxgResource(*(struct DXGRESOURCE **)(v11 + 40));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return (struct DXGALLOCATION *)v11;
}
