/*
 * XREFs of ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C010B0CC
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF2DC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EFB40 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010AFD4 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C010B640 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C67C (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

char __fastcall DXGDEVICE::RemoveDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *v6; // rdx
  char v7; // si
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, this + 35);
  v6 = this[v3 + 139];
  v7 = 0;
  if ( v6 )
  {
    v9 = *((unsigned int *)a3 + 18);
    if ( ((*((_DWORD *)a3 + 18) >> 1) & 0x3FFu) < *((_DWORD *)this + v3 + 310)
      && *((struct DXGALLOCATION **)v6 + (((unsigned __int64)(unsigned int)v9 >> 1) & 0x3FF)) == a3 )
    {
      if ( !*((_DWORD *)this + v3 + 326) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v10 + 24) = 8660LL;
        WdLogEvent5_WdAssertion(v10);
        LODWORD(v9) = *((_DWORD *)a3 + 18);
        v6 = this[v3 + 139];
      }
      *((_QWORD *)v6 + (((unsigned __int64)(unsigned int)v9 >> 1) & 0x3FF)) = 0LL;
      v7 = 1;
      --*((_DWORD *)this + v3 + 326);
      *((_DWORD *)a3 + 18) &= 0xFFFFF801;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v7;
}
