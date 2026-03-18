/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00D2E50
 * Callers:
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01471FC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019AE78 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C019B9D0 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01B8C80 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01B9220 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C01B9AF0 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C001637C (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this)
{
  __int64 v2; // rcx
  DXGPROCESS *v3; // rcx
  void *v4; // rdi
  _QWORD *v5; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 36) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v5[3] = 275LL;
    v5[4] = 4LL;
    v5[5] = this;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  v2 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 36) = 0;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v2 + 112));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v6);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = (DXGPROCESS *)*((_QWORD *)this + 2);
  v4 = (void *)*((_QWORD *)v3 + 7);
  DXGPROCESS::ReleaseReference(v3);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 37) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 40));
    *((_BYTE *)this + 37) = 0;
  }
  ObfDereferenceObject(v4);
  ObfDereferenceObject(*((PVOID *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
