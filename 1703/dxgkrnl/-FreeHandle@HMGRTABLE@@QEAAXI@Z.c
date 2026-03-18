/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240
 * Callers:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006C7C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0007180 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00BC120 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C7DC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CEBC4 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CEC74 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00FEA04 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00FF678 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01A5944 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v6; // edx
  __int64 v7; // r9
  unsigned int v8; // ecx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = a2;
  if ( *((_DWORD *)this + 5) >= *((_DWORD *)this + 4) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 244LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 245LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = (v4 >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)this + 4) )
  {
    v7 = *(_QWORD *)this;
    if ( ((v4 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)this + 16LL * v6 + 8) & 0x30)
      && (*(_DWORD *)(*(_QWORD *)this + 16LL * v6 + 8) & 0xF) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 16LL * v6 + 8);
      if ( (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x30) == 0x30 )
        v9 = 1;
      else
        v9 = ((v8 >> 4) & 3) + 1;
      *(_DWORD *)(v7 + 16LL * v6 + 8) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(16 * v9)) & 0x30;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v6 + 8) &= 0xFFFFFFF0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v6 + 8) &= ~0x1000u;
      v10 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v10 + 16LL * v6) = *(_DWORD *)(v10 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v6;
    }
  }
}
