/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C008B2C0
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C008BE80 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0002C08 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C00031C8 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C008AA50 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C008C460 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C01BF2C0 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01BF6F4 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this)
{
  _QWORD *v2; // rbp
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v9; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v11; // rsi
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 1609LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 40) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  if ( *((_DWORD *)this + 18) )
  {
    if ( *((_BYTE *)this + 242) )
    {
      Current = DXGPROCESS::GetCurrent();
      v9 = Current;
      if ( (*((_BYTE *)Current + 307) & 8) != 0 )
        v9 = (DXGPROCESS *)*((_QWORD *)Current + 55);
      DXGPROCESS::FreeHandleSafe(v9, *((_DWORD *)this + 18));
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v12);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 18));
      if ( v12[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    }
    *((_DWORD *)this + 18) = 0;
  }
  if ( (*((_DWORD *)this + 41) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
  }
  else if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 35, 0LL, *((_QWORD *)this + 35)) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 504LL) + 8LL) + 528LL))();
  }
  v2 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v2[3] = this;
  v2[4] = *((unsigned int *)this + 18);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v4);
  v6 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v6 = *v11;
      }
    }
  }
  v2[5] = v6;
  WdLogEvent5_WdEvent(v2);
  if ( (*((_DWORD *)this + 41) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 248));
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}
