/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C007CCE0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00F1810 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00F18E0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C00FEAB0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatistics @ 0x1C01810E0 (DxgkQueryStatistics.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01839B0 (DxgkChangeVideoMemoryReservation.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01A8204 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01A8D58 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessDeviceLostSupport @ 0x1C01BA4A0 (DxgkGetProcessDeviceLostSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01BA6D0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01BAA50 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01BAB90 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01BAF20 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C01BB8B0 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002A70 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002AB0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C00F1C50 (-GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  struct DXGGLOBAL *Global; // rax
  struct _KAPC_STATE *v5; // rbp
  _BYTE *v6; // r14
  int v7; // ebx
  PVOID v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v12; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  void *v16; // rdi
  _BYTE v17[16]; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGGLOBAL *)((char *)Global + 200));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v5 = (struct _KAPC_STATE *)((char *)this + 32);
  v6 = (char *)this + 29;
  v7 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         *((_DWORD *)this + 6),
         a2,
         (bool *)this + 29,
         (bool *)this + 30,
         (struct _KAPC_STATE *)((char *)this + 32),
         (struct DXGPROCESS **)&P);
  if ( v7 >= 0 )
  {
    v8 = P;
    DXGPROCESS::AcquireReference((DXGPROCESS *)P);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)v8 + 13) + 8LL) == CurrentThread )
    {
      v14 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v14 + 24) = 2503LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( *((_BYTE *)this + 28) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v9, v10);
      v15[3] = 275LL;
      v15[4] = 4LL;
      v15[5] = this;
      v15[6] = 0LL;
      v15[7] = 0LL;
      WdLogEvent5_WdCriticalError(v15);
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v8 + 13));
    v12 = (__int64 *)P;
    if ( *((_DWORD *)P + 8) == 1 )
    {
      *((_QWORD *)this + 2) = P;
      v7 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v8 + 13));
      v16 = (void *)v12[6];
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      DXGPROCESS::ReleaseReference(v12);
      if ( *v6 )
      {
        KeUnstackDetachProcess(v5);
        *v6 = 0;
      }
      ObfDereferenceObject(v16);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      v7 = -1073741130;
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v7;
}
