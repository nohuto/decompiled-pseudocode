/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0091590
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0091444 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0177F14 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C00031C8 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C0081E2C (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  void **v3; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Global; // rax
  UINT v8; // r12d
  _QWORD *v9; // r15
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  const HANDLE *pAllocationList; // rax
  ADAPTER_RENDER *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DXGKARG_DESTROYALLOCATION v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h]
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

  v3 = (void **)*((_QWORD *)this + 20);
  if ( a2 && a3 >= *((_DWORD *)this + 31) )
    v3 = a2;
  if ( v3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGSHAREDRESOURCE *)((char *)this + 32));
    if ( *((_DWORD *)this + 6) )
    {
      if ( (*((_DWORD *)this + 3) & 8) != 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v21 + 24) = 11570LL;
        WdLogEvent5_WdAssertion(v21);
      }
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v23);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v23);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v6);
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      *((_DWORD *)this + 6) = 0;
      if ( LOBYTE(v23.pAllocationList) )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v23);
    }
    v8 = 0;
    v9 = (_QWORD *)*((_QWORD *)this + 16);
    v10 = 0;
    if ( *((_DWORD *)this + 31) )
    {
      do
      {
        v24 = *(v9 - 5);
        if ( v24 )
        {
          v11 = *((_QWORD *)this + 9);
          v12 = *(_QWORD *)(v11 + 536);
          v13 = *(_QWORD *)(v11 + 528);
          Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
          DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v25, Current);
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v13 + 8) + 128LL))(0LL, v12, v24);
          if ( v25 )
          {
            v15 = v25 + 136;
            *(_QWORD *)(v25 + 144) = 0LL;
            ExReleasePushLockExclusiveEx(v15, 0LL);
            KeLeaveCriticalRegion();
          }
          *(v9 - 5) = 0LL;
        }
        v3[v10] = (void *)*(v9 - 4);
        if ( *(v9 - 4) )
        {
          if ( v8 != v10 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v10);
            *(_QWORD *)(v22 + 24) = 11603LL;
            WdLogEvent5_WdAssertion(v22);
          }
          ++v8;
        }
        *(v9 - 4) = 0LL;
        ++v10;
        v9 = (_QWORD *)*v9;
      }
      while ( v10 < *((_DWORD *)this + 31) );
      if ( v8 )
        goto LABEL_21;
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_21:
      memset(&v23, 0, sizeof(v23));
      v17 = *((_QWORD *)this + 2) == 0LL;
      v23.hResource = (HANDLE)*((_QWORD *)this + 2);
      v23.NumAllocations = v8;
      pAllocationList = v23.pAllocationList;
      v23.Flags.Value = v23.Flags.Value & 0xFFFFFFFE | !v17;
      v19 = (ADAPTER_RENDER *)*((_QWORD *)this + 9);
      if ( v8 )
        pAllocationList = v3;
      v23.pAllocationList = pAllocationList;
      ADAPTER_RENDER::DdiDestroyAllocation(v19, &v23, v16);
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 31) = 0;
    *((_QWORD *)this + 5) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v20 + 24) = 11562LL;
    WdLogEvent5_WdAssertion(v20);
  }
}
