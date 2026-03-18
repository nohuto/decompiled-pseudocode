/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C00BF8A4
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00BF75C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C015BF48 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0016A58 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00A4FC8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  void **v3; // r15
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Global; // rax
  UINT v8; // r12d
  _QWORD *v9; // r14
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
  __int64 v23; // rax
  _DXGKARG_DESTROYALLOCATION v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+80h] [rbp+40h]
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF

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
        *(_QWORD *)(v21 + 24) = 11769LL;
        WdLogEvent5_WdAssertion(v21);
      }
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v24);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v6);
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      *((_DWORD *)this + 6) = 0;
      if ( LOBYTE(v24.pAllocationList) )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v24);
    }
    if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v22 + 24) = 11779LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v8 = 0;
    v9 = (_QWORD *)*((_QWORD *)this + 16);
    v10 = 0;
    if ( *((_DWORD *)this + 31) )
    {
      do
      {
        v25 = *(v9 - 5);
        if ( v25 )
        {
          v11 = *((_QWORD *)this + 9);
          v12 = *(_QWORD *)(v11 + 552);
          v13 = *(_QWORD *)(v11 + 544);
          Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
          DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v26, Current);
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v13 + 8) + 128LL))(0LL, v12, v25);
          if ( v26 )
          {
            v15 = v26 + 144;
            *(_QWORD *)(v26 + 152) = 0LL;
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
            v23 = WdLogNewEntry5_WdAssertion(v10);
            *(_QWORD *)(v23 + 24) = 11808LL;
            WdLogEvent5_WdAssertion(v23);
          }
          ++v8;
        }
        *(v9 - 4) = 0LL;
        ++v10;
        v9 = (_QWORD *)*v9;
      }
      while ( v10 < *((_DWORD *)this + 31) );
      if ( v8 )
        goto LABEL_22;
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_22:
      memset(&v24, 0, sizeof(v24));
      v17 = *((_QWORD *)this + 2) == 0LL;
      v24.hResource = (HANDLE)*((_QWORD *)this + 2);
      v24.NumAllocations = v8;
      pAllocationList = v24.pAllocationList;
      v24.Flags.Value = v24.Flags.Value & 0xFFFFFFFE | !v17;
      v19 = (ADAPTER_RENDER *)*((_QWORD *)this + 9);
      if ( v8 )
        pAllocationList = v3;
      v24.pAllocationList = pAllocationList;
      ADAPTER_RENDER::DdiDestroyAllocation(v19, &v24, v16);
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
    *(_QWORD *)(v20 + 24) = 11761LL;
    WdLogEvent5_WdAssertion(v20);
  }
}
