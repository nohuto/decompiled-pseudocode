/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C009AB00 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00D2C90 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C010F9D0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0168B08 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C016BBEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019AE78 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C019B9D0 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C01B8670 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01B88D0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01B8C80 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01B9220 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01B97B0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C01B9AF0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkTrimProcessCommitment @ 0x1C01BA380 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C001637C (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00165AC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAU_EPROCESS@@PEAPEAV1@@Z @ 0x1C00D3018 (-GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAU_EPROCESS@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  PVOID *v4; // r14
  struct _KAPC_STATE *v5; // rbp
  _BYTE *v6; // r15
  int v7; // ebx
  DXGPROCESS *v8; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  DXGPROCESS *v10; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  void *v14; // rdi
  _BYTE v15[16]; // [rsp+40h] [rbp-28h] BYREF
  DXGPROCESS *v16; // [rsp+70h] [rbp+8h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v4 = (PVOID *)((char *)this + 24);
  v5 = (struct _KAPC_STATE *)((char *)this + 40);
  v6 = (char *)this + 37;
  v7 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         *((_DWORD *)this + 8),
         a2,
         (bool *)this + 37,
         (bool *)this + 38,
         (PRKAPC_STATE)((char *)this + 40),
         (struct _EPROCESS **)this + 3,
         &v16);
  if ( v7 >= 0 )
  {
    v8 = v16;
    DXGPROCESS::AcquireReference(v16);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)v8 + 14) + 8LL) == CurrentThread )
    {
      v12 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v12 + 24) = 2690LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( *((_BYTE *)this + 36) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
      v13[3] = 275LL;
      v13[4] = 4LL;
      v13[5] = this;
      v13[6] = 0LL;
      v13[7] = 0LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v8 + 14));
    v10 = v16;
    if ( *((_DWORD *)v16 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v16;
      v7 = 0;
      *((_BYTE *)this + 36) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v8 + 14));
      v14 = (void *)*((_QWORD *)v10 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      DXGPROCESS::ReleaseReference(v10);
      if ( *v6 )
      {
        KeUnstackDetachProcess(v5);
        *v6 = 0;
      }
      ObfDereferenceObject(v14);
      ObfDereferenceObject(*v4);
      *v4 = 0LL;
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
      v7 = -1073741130;
    }
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v7;
}
