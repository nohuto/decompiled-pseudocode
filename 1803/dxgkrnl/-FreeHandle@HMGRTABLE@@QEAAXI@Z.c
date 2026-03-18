/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8670
 * Callers:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C001654C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0016A58 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A5534 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A55E4 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00BD4FC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00BEBC8 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00D2540 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EFB40 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00FE700 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EDF0 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01C052C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C01E47B8 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C01E4E00 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v7; // edx
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = *((_DWORD *)this + 5);
  if ( v2 >= *((_DWORD *)this + 4) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 250LL;
    WdLogEvent5_WdAssertion(v10);
    v2 = *((_DWORD *)this + 5);
  }
  if ( v2 < 0x80 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 251LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v5 = (a2 >> 6) & 0xFFFFFF;
  if ( v5 < *((_DWORD *)this + 4) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)this + 16LL * v5 + 8);
    v7 = (v6 >> 5) & 3;
    if ( a2 >> 30 == v7 && (v6 & 0x1F) != 0 )
    {
      v8 = v7 + 1;
      if ( v7 == 3 )
        v8 = 1;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v5 + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(32 * v8)) & 0x60;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v5 + 8) &= 0xFFFFFFE0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v5 + 8) &= ~0x2000u;
      v9 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v9 + 16LL * v5) = *(_DWORD *)(v9 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v5;
    }
  }
}
