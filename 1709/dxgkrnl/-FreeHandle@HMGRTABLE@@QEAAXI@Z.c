/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250
 * Callers:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0002C08 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C00031C8 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082398 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082468 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C0091DF0 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009B620 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00B03EC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00C1280 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00F3984 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192CB0 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01BF438 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, unsigned int a2)
{
  unsigned int v4; // edx
  unsigned int v5; // r8d
  int v6; // ecx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_DWORD *)this + 5) >= *((_DWORD *)this + 4) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 244LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 245LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v4 = (a2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)this + 4) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8);
    v6 = (v5 >> 5) & 3;
    if ( a2 >> 30 == v6 && (v5 & 0x1F) != 0 )
    {
      v7 = v6 + 1;
      if ( v6 == 3 )
        v7 = 1;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(32 * v7)) & 0x60;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= 0xFFFFFFE0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= ~0x2000u;
      v8 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v8 + 16LL * v4) = *(_DWORD *)(v8 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v4;
    }
  }
}
