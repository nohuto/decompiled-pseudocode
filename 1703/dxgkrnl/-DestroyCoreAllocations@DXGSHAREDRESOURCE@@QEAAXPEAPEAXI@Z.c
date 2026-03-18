/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C00FED6C
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00FEC20 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0174384 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0007180 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00CE7A8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, __int64 a3, __int64 a4)
{
  void **v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD **Global; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  UINT v17; // r12d
  _QWORD *v18; // r15
  unsigned int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  const HANDLE *pAllocationList; // rax
  ADAPTER_RENDER *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct _DXGKARG_DESTROYALLOCATION v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+80h] [rbp+40h]
  __int64 v34; // [rsp+88h] [rbp+48h] BYREF

  v4 = (void **)*((_QWORD *)this + 20);
  if ( a2 && (unsigned int)a3 >= *((_DWORD *)this + 31) )
    v4 = a2;
  if ( v4 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGSHAREDRESOURCE *)((char *)this + 32));
    if ( *((_DWORD *)this + 6) )
    {
      if ( (*((_DWORD *)this + 3) & 8) != 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        *(_QWORD *)(v30 + 24) = 10722LL;
        WdLogEvent5_WdAssertion(v30);
      }
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v32);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v32);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
      DXGGLOBAL::FreeHandle(Global, *((unsigned int *)this + 6), v15, v16);
      *((_DWORD *)this + 6) = 0;
      if ( LOBYTE(v32.pAllocationList) )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v32, v6, v8, v9);
    }
    v17 = 0;
    v18 = (_QWORD *)*((_QWORD *)this + 16);
    v19 = 0;
    if ( *((_DWORD *)this + 31) )
    {
      do
      {
        v33 = *(v18 - 5);
        if ( v33 )
        {
          v20 = *((_QWORD *)this + 9);
          v21 = *(_QWORD *)(v20 + 440);
          v22 = *(_QWORD *)(v20 + 432);
          Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7);
          DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v34, Current);
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v22 + 8) + 128LL))(0LL, v21, v33);
          if ( v34 )
          {
            v24 = v34 + 112;
            *(_QWORD *)(v34 + 120) = 0LL;
            ExReleasePushLockExclusiveEx(v24, 0LL);
            KeLeaveCriticalRegion();
          }
          *(v18 - 5) = 0LL;
        }
        v7 = v19;
        v4[v19] = (void *)*(v18 - 4);
        if ( *(v18 - 4) )
        {
          if ( v17 != v19 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v19, v6, v8, v9);
            *(_QWORD *)(v31 + 24) = 10755LL;
            WdLogEvent5_WdAssertion(v31);
          }
          ++v17;
        }
        *(v18 - 4) = 0LL;
        ++v19;
        v18 = (_QWORD *)*v18;
      }
      while ( v19 < *((_DWORD *)this + 31) );
      if ( v17 )
        goto LABEL_21;
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_21:
      memset(&v32, 0, sizeof(v32));
      v26 = *((_QWORD *)this + 2) == 0LL;
      v32.hResource = (HANDLE)*((_QWORD *)this + 2);
      v32.NumAllocations = v17;
      pAllocationList = v32.pAllocationList;
      v32.Flags.Value = v32.Flags.Value & 0xFFFFFFFE | !v26;
      v28 = (ADAPTER_RENDER *)*((_QWORD *)this + 9);
      if ( v17 )
        pAllocationList = v4;
      v32.pAllocationList = pAllocationList;
      ADAPTER_RENDER::DdiDestroyAllocation(v28, &v32, v25);
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 31) = 0;
    *((_QWORD *)this + 5) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v29 + 24) = 10714LL;
    WdLogEvent5_WdAssertion(v29);
  }
}
