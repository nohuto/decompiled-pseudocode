/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F9720
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA230 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C001654C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0016A58 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00F9BE0 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C00FA7D0 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C01C03BC (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01C07DC (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this)
{
  __int64 v2; // rdx
  signed __int64 v3; // rcx
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v12; // rsi
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 1756LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 42) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  v2 = *((unsigned int *)this + 18);
  if ( (_DWORD)v2 )
  {
    if ( *((_BYTE *)this + 250) )
    {
      DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 32), v2);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v13);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 18));
      if ( v13[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
    }
    *((_DWORD *)this + 18) = 0;
  }
  if ( (*((_DWORD *)this + 43) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
  }
  else
  {
    v3 = *((_QWORD *)this + 37);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 37, 0LL, v3) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 35) + 520LL) + 8LL) + 624LL))();
  }
  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(v3, v2);
  v4[3] = this;
  v5 = *((unsigned int *)this + 18);
  v4[4] = v5;
  CurrentProcess = PsGetCurrentProcess(v5, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v12 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v12;
      }
    }
  }
  v4[5] = v9;
  WdLogEvent5_WdEvent(v4);
  if ( (*((_DWORD *)this + 43) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 264));
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}
