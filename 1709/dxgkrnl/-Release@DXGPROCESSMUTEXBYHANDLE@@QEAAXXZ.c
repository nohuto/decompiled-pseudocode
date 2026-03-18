/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00F1AA0
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00F1810 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01A8204 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01A8D58 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01BAA50 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01BAB90 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002A70 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000E3B0 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 *v5; // rcx
  void *v6; // rdi
  _QWORD *v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v7[3] = 275LL;
    v7[4] = 4LL;
    v7[5] = this;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v4 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 28) = 0;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 104));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v5 = (__int64 *)*((_QWORD *)this + 2);
  v6 = (void *)v5[6];
  DXGPROCESS::ReleaseReference(v5);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v6);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
