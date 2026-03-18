/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C008AD40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C009AD60 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C009AE30 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryStatistics @ 0x1C017D700 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C017DD40 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C017F8F0 (DxgkChangeVideoMemoryReservation.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01936E4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0194244 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01A2790 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01A2B00 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01A2C40 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01A2FD0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C01A3910 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0006C40 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C009B288 (-GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rcx
  ACCESS_MASK v10; // edx
  void *v11; // rcx
  struct _KAPC_STATE *v12; // r15
  _BYTE *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGPROCESS *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *v23; // rcx
  struct DXGPROCESS *v24; // rsi
  struct DXGPROCESS *v25; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  void *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  DXGFASTMUTEX *v41; // [rsp+40h] [rbp-10h] BYREF
  char v42; // [rsp+48h] [rbp-8h]
  struct DXGPROCESS *v43; // [rsp+80h] [rbp+30h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v41 = (struct DXGGLOBAL *)((char *)Global + 200);
  v42 = 0;
  if ( Global == (struct DXGGLOBAL *)-200LL )
  {
    v27 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v27 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v41 + 1) == CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(CurrentThread, v5, v7, v8);
    *(_QWORD *)(v28 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( v42 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v5, v7);
    v29[5] = &v41;
    v29[3] = 275LL;
    v29[4] = 4LL;
    v29[6] = 0LL;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  DXGFASTMUTEX::Acquire(v41);
  v10 = *((_DWORD *)this + 6);
  v11 = (void *)*((_QWORD *)this + 1);
  v12 = (struct _KAPC_STATE *)((char *)this + 32);
  v13 = (char *)this + 29;
  v42 = 1;
  v16 = DXGPROCESS::GetByHandle(
          v11,
          v10,
          a2,
          (bool *)this + 29,
          (bool *)this + 30,
          (struct _KAPC_STATE *)((char *)this + 32),
          &v43);
  if ( v16 >= 0 )
  {
    v19 = v43;
    ++*((_QWORD *)v43 + 3);
    if ( *((__int64 *)v19 + 3) <= 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
      *(_QWORD *)(v30 + 24) = 887LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( !v42 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v17);
      v31[5] = &v41;
      v31[3] = 275LL;
      v31[4] = 4LL;
      v31[6] = 0LL;
      v31[7] = 0LL;
      WdLogEvent5_WdCriticalError(v31);
    }
    v42 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v41, v14, v17, v18);
    v23 = KeGetCurrentThread();
    v24 = v43;
    if ( *(struct _KTHREAD **)(*((_QWORD *)v43 + 10) + 8LL) == v23 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v23, v20, v21, v22);
      *(_QWORD *)(v32 + 24) = 2357LL;
      WdLogEvent5_WdAssertion(v32);
    }
    if ( *((_BYTE *)this + 28) )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v20, v21);
      v33[3] = 275LL;
      v33[4] = 4LL;
      v33[5] = this;
      v33[6] = 0LL;
      v33[7] = 0LL;
      WdLogEvent5_WdCriticalError(v33);
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v24 + 10));
    v25 = v43;
    if ( *((_DWORD *)v43 + 8) == 1 )
    {
      *((_QWORD *)this + 2) = v43;
      v16 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v24 + 10), v14, v17, v18);
      v34 = (void *)*((_QWORD *)v25 + 6);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v41);
      DXGPROCESS::ReleaseReference(v25, v35, v36, v37);
      if ( *v13 )
      {
        KeUnstackDetachProcess(v12);
        *v13 = 0;
      }
      ObfDereferenceObject(v34);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41, v38, v39, v40);
      v16 = -1073741130;
    }
  }
  if ( v42 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41, v14, v17, v18);
  return (unsigned int)v16;
}
