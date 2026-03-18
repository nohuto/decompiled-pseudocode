/*
 * XREFs of ?MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z @ 0x1C018FF08
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0092C50 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0197364 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::MapCpuVaForParavirtualization(DXGDEVICESYNCOBJECT *this, unsigned __int64 a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _MDL *Mdl; // rdi
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  PVOID v17; // rax
  ULONG_PTR Length; // [rsp+60h] [rbp+18h] BYREF
  PVOID VirtualAddress; // [rsp+68h] [rbp+20h] BYREF

  VirtualAddress = 0LL;
  Length = 4096LL;
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &VirtualAddress, 0LL, &Length, 0x801000u, 4u);
  v6 = v4;
  if ( v4 >= 0 )
  {
    Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL);
    if ( Mdl )
    {
      v11 = 0;
      v12 = a2 >> 12;
      if ( (Length & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v13 = 0LL;
        do
        {
          *((_QWORD *)&Mdl[1].Next + v13) = v12;
          ++v11;
          ++v12;
          v13 = v11;
        }
        while ( v11 < Length >> 12 );
      }
      v14 = MmRotatePhysicalView(VirtualAddress, &Length, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v17 = VirtualAddress;
        *((_DWORD *)this + 20) = 0;
        *((_QWORD *)this + 7) = v17;
        *((_QWORD *)this + 9) = a2;
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v16 + 24) = v6;
        *(_QWORD *)(v16 + 32) = 7313LL;
        WdLogEvent5_WdError(v16);
      }
      IoFreeMdl(Mdl);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v8);
      LODWORD(v6) = -1073741801;
      *(_QWORD *)(v10 + 24) = -1073741801LL;
      *(_QWORD *)(v10 + 32) = 7298LL;
      WdLogEvent5_WdError(v10);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdAssertion(v7);
  }
  return (unsigned int)v6;
}
