/*
 * XREFs of ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01888D0
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C755C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C7DC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01883E4 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0189164 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0189268 (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

char __fastcall DXGDEVICE::RemoveDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rdx
  char v10; // si
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, this + 35, (__int64)a3, a4);
  v9 = this[v4 + 137];
  v10 = 0;
  if ( v9 )
  {
    if ( ((*((_DWORD *)a3 + 18) >> 1) & 0x3FFu) < *((_DWORD *)this + v4 + 306) )
    {
      v11 = ((unsigned __int64)*((unsigned int *)a3 + 18) >> 1) & 0x3FF;
      if ( *((struct DXGALLOCATION **)v9 + v11) == a3 )
      {
        if ( !*((_DWORD *)this + v4 + 322) )
        {
          v12 = WdLogNewEntry5_WdAssertion(v11, v9, v7, v8);
          *(_QWORD *)(v12 + 24) = 8173LL;
          WdLogEvent5_WdAssertion(v12);
        }
        *((_QWORD *)this[v4 + 137] + (((unsigned __int64)*((unsigned int *)a3 + 18) >> 1) & 0x3FF)) = 0LL;
        v10 = 1;
        --*((_DWORD *)this + v4 + 322);
        *((_DWORD *)a3 + 18) &= 0xFFFFF801;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v10;
}
