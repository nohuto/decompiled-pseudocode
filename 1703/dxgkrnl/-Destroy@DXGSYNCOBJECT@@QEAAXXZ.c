/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00D8724
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00D7AB0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0007180 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendDestroySyncObject@@YAXII@Z @ 0x1C002FFD0 (-VmBusSendDestroySyncObject@@YAXII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C00D8560 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00D8680 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C01A57CC (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01A5C10 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *ThreadProperty; // rax
  DXGPROCESS *Current; // rax
  int HostProcess; // eax
  _BYTE v25[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 1579LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_DWORD *)this + 36) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  if ( *((_DWORD *)this + 18) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v25);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((unsigned int *)this + 18), v17, v18);
    *((_DWORD *)this + 18) = 0;
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v19, v20, v21);
  }
  if ( (*((_DWORD *)this + 37) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
  }
  else
  {
    v5 = *((_QWORD *)this + 33);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 33, 0LL, v5) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 408LL) + 8LL) + 528LL))();
  }
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(v5);
  v6[3] = this;
  v7 = *((unsigned int *)this + 18);
  v6[4] = v7;
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v11 = *ThreadProperty;
    }
  }
  v6[5] = v11;
  WdLogEvent5_WdEvent(v6);
  if ( *((_DWORD *)this + 19) )
  {
    Current = DXGPROCESS::GetCurrent(v13);
    if ( Current )
    {
      HostProcess = DXGPROCESS::GetHostProcess(Current);
      VmBusSendDestroySyncObject(HostProcess, *((_DWORD *)this + 19));
    }
    *((_DWORD *)this + 19) = 0;
  }
  if ( (*((_DWORD *)this + 37) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 232), v12, v14, v15);
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this, v12, v14, v15);
  operator delete(this);
}
