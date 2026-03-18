/*
 * XREFs of ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C016B99C
 * Callers:
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00D3598 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C016A8D8 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0185890 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000BC00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnGuest(struct DXGALLOCATION *a1, char a2)
{
  PMDL *v2; // rdi
  void *v4; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v7; // ebp
  __int64 v8; // r14
  char v9; // al
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (PMDL *)((char *)a1 + 104);
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
        v7 = *((_DWORD *)a1 + 32);
        v8 = *((_QWORD *)Global + 152);
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v10, (struct DXGPUSHLOCK *const)(v8 + 8));
        if ( *(_BYTE *)(v8 + 40) )
          VmbChannelDeleteGpadl(*(_QWORD *)v8, v7);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
        *((_DWORD *)a1 + 32) = 0;
      }
      v9 = *((_BYTE *)a1 + 132);
      if ( (v9 & 1) != 0 )
      {
        MmFreePagesFromMdl(*v2);
      }
      else if ( (v9 & 2) == 0 )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v2, (PSIZE_T)a1 + 15, 0x8000u);
        if ( *((_DWORD *)a1 + 25) )
          _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
        _InterlockedDecrement(&g_VgpuNumAllocationsLocked);
        g_VgpuNumLockedBytes -= *((_QWORD *)a1 + 15);
      }
      *v2 = 0LL;
    }
  }
}
