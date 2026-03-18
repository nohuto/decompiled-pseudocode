/*
 * XREFs of ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C01837B8
 * Callers:
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00F1E74 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C018266C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0198C20 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnGuest(struct DXGALLOCATION *a1, char a2)
{
  PVOID *v2; // rdi
  void *v4; // rcx
  struct DXGGLOBAL *Global; // rax
  char v7; // al

  v2 = (PVOID *)((char *)a1 + 104);
  v4 = (void *)*((_QWORD *)a1 + 13);
  if ( v4 )
  {
    if ( (*((_DWORD *)a1 + 18) & 0x80000) != 0 )
    {
      MmRotatePhysicalView(v4, (PSIZE_T)a1 + 15, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
      *((_DWORD *)a1 + 18) &= ~0x80000u;
    }
    if ( a2 )
    {
      if ( *((_DWORD *)a1 + 32) )
      {
        Global = DXGGLOBAL::GetGlobal((__int64)v4);
        VmbChannelDeleteGpadl(**((_QWORD **)Global + 142), *((unsigned int *)a1 + 32));
        *((_DWORD *)a1 + 32) = 0;
      }
      v7 = *((_BYTE *)a1 + 132);
      if ( (v7 & 1) != 0 )
      {
        ExFreePoolWithTag(*v2, 0);
      }
      else if ( (v7 & 2) == 0 )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2, (PSIZE_T)a1 + 15, 0x8000u);
        if ( *((_DWORD *)a1 + 25) )
          _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
        _InterlockedDecrement(&g_VgpuNumAllocationsLocked);
        g_VgpuNumLockedBytes -= *((_QWORD *)a1 + 15);
      }
      *v2 = 0LL;
    }
  }
}
