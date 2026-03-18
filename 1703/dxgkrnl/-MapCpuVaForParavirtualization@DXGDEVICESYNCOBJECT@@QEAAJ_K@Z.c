/*
 * XREFs of ?MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z @ 0x1C002A5EC
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00881D8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00BFDFC (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::MapCpuVaForParavirtualization(DXGDEVICESYNCOBJECT *this, unsigned __int64 a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _MDL *Mdl; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned int v18; // edx
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  ULONG_PTR Length; // [rsp+50h] [rbp+18h] BYREF
  PVOID VirtualAddress; // [rsp+58h] [rbp+20h] BYREF

  VirtualAddress = 0LL;
  Length = 4096LL;
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &VirtualAddress, 0LL, &Length, 0x801000u, 4u);
  v9 = v4;
  if ( v4 >= 0 )
  {
    Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL);
    if ( Mdl )
    {
      v17 = a2 >> 12;
      v18 = 0;
      if ( (Length & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v19 = 0LL;
        do
        {
          *((_QWORD *)&Mdl[1].Next + v19) = v17;
          ++v18;
          ++v17;
          v19 = v18;
        }
        while ( v18 < Length >> 12 );
      }
      v20 = MmRotatePhysicalView(VirtualAddress, &Length, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
      v16 = v20;
      if ( v20 >= 0 )
      {
        *((_QWORD *)this + 7) = VirtualAddress;
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v23 + 24) = v16;
        *(_QWORD *)(v23 + 32) = 8002LL;
        WdLogEvent5_WdError(v23);
      }
      IoFreeMdl(Mdl);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13, v12);
      LODWORD(v16) = -1073741801;
      *(_QWORD *)(v15 + 24) = -1073741801LL;
      *(_QWORD *)(v15 + 32) = 7987LL;
      WdLogEvent5_WdError(v15);
    }
    return (unsigned int)v16;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdAssertion(v10);
    return (unsigned int)v9;
  }
}
