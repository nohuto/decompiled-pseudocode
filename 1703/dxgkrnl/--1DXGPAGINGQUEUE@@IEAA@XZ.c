/*
 * XREFs of ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00FEA04
 * Callers:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C00203B0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1D74 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusSendDestroyPagingQueue@DXGADAPTER@@QEAAXII@Z @ 0x1C002FF44 (-VmBusSendDestroyPagingQueue@DXGADAPTER@@QEAAXII@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00FF678 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGPAGINGQUEUE::~DXGPAGINGQUEUE(DXGPAGINGQUEUE *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rbx
  unsigned int v6; // ebp
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  DXGADAPTER *v12; // rbx
  int HostProcess; // eax

  if ( !*((_BYTE *)this + 56) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 36LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v5 = (void *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(*((DXGDEVICESYNCOBJECT **)this + 5));
    ExFreePoolWithTag(v5, 0);
  }
  v6 = *((_DWORD *)this + 6);
  if ( v6 )
  {
    v7 = *(_QWORD **)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 21));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v7 + 24), v6, v8, v9);
    v7[22] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 21, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_DWORD *)this + 7) )
  {
    v11 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v11 + 408) != 4 )
    {
      v12 = *(DXGADAPTER **)(*(_QWORD *)(v11 + 16) + 16LL);
      HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v11 + 40));
      DXGADAPTER::VmBusSendDestroyPagingQueue(v12, HostProcess, *((_DWORD *)this + 7));
    }
  }
  *((_QWORD *)this + 2) = 0LL;
}
