/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C008B3E0
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C008BE80 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0002B8C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0003164 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C01BF9E4 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2)
{
  DXGSYNCOBJECT *v3; // rbx
  int v4; // r8d
  _QWORD *v5; // rsi
  __int64 v6; // r10
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rbp
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v22; // eax
  _QWORD *v23; // rdi
  __int64 CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v27; // rbx
  __int64 result; // rax
  int v29; // edx
  bool v30; // r14
  __int64 v31; // rbp
  bool v32; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v50; // rsi
  _BYTE v51[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = this;
  if ( !*((_BYTE *)this + 241) )
  {
    v4 = *((_DWORD *)this + 40);
    if ( (unsigned int)(v4 - 5) <= 1 )
    {
      v29 = *((_DWORD *)this + 41);
      if ( (v29 & 0x80u) != 0 )
      {
        *((_BYTE *)this + 240) = 1;
      }
      else if ( (v29 & 4) != 0 )
      {
        *((_BYTE *)this + 240) = 0;
      }
      else
      {
        this = *(DXGSYNCOBJECT **)(*((_QWORD *)this + 33) + 16LL);
        *((_BYTE *)v3 + 240) = (*((_DWORD *)this + 424) & 0x20) == 0;
      }
      v30 = *((_BYTE *)v3 + 240) != 0;
      if ( v4 == 6 )
        v31 = 0LL;
      else
        v31 = *((_QWORD *)v3 + 21);
      v32 = (v29 & 1) != 0;
      Global = DXGGLOBAL::GetGlobal((__int64)this);
      result = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, __int64, bool))(*(_QWORD *)(*((_QWORD *)Global + 14)
                                                                                           + 8LL)
                                                                               + 912LL))(
                 (__int64)v3 + 112,
                 v32,
                 0LL,
                 v31,
                 v30);
      if ( (int)result < 0 )
        return result;
      if ( a2 )
        *((_QWORD *)v3 + 17) = *((_QWORD *)a2 + 4);
      else
        *((_QWORD *)v3 + 17) = 0LL;
    }
  }
  if ( (*((_DWORD *)v3 + 41) & 4) != 0 )
  {
    LODWORD(v12) = DXGSYNCOBJECTCA::Initialize(v3);
LABEL_66:
    if ( (int)v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_27;
  }
  v5 = (_QWORD *)((char *)v3 + 248);
  if ( *((_QWORD *)v3 + 35) )
  {
    v37 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v37 + 24) = 1457LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !*((_BYTE *)v3 + 241) )
  {
    v6 = (unsigned int)(*((_DWORD *)v3 + 40) - 5) <= 1 ? (__int64)v3 + 112 : 0LL;
    v7 = (*((_DWORD *)v3 + 41) & 4) != 0 ? *((_QWORD *)v3 + 33) : 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, DXGSYNCOBJECT *, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 33) + 504LL) + 8LL) + 520LL))(
           *(_QWORD *)(*((_QWORD *)v3 + 33) + 512LL),
           v3,
           (__int64)v3 + 160,
           v7,
           0LL,
           (__int64)v3 + 280,
           v6);
    v12 = v8;
    if ( v8 < 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v38 + 24) = v3;
      *(_QWORD *)(v38 + 32) = v12;
      WdLogEvent5_WdWarning(v38);
      goto LABEL_66;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)v3 + 33) + 16LL) + 24LL));
  v13 = *((_QWORD *)v3 + 33);
  v14 = (volatile signed __int64 *)(v13 + 152);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v13 + 160) == KeGetCurrentThread() )
  {
    if ( *(int *)(v13 + 176) <= 0 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v39 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v39);
    }
    ++*(_DWORD *)(v13 + 176);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v36 = *(_DWORD *)(v13 + 180);
        if ( v36 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v18, &EventBlockThread, v17, v36);
      }
      _InterlockedIncrement64(v14);
      ExAcquirePushLockExclusiveEx(v13 + 168, 0LL);
    }
    if ( *(_QWORD *)(v13 + 160) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v40 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v40);
    }
    if ( *(_DWORD *)(v13 + 176) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v41 + 24) = 387LL;
      WdLogEvent5_WdAssertion(v41);
    }
    *(_QWORD *)(v13 + 160) = KeGetCurrentThread();
    *(_DWORD *)(v13 + 176) = 1;
  }
  v19 = (_QWORD *)(v13 + 192);
  v20 = *(_QWORD *)(v13 + 192);
  if ( *(_QWORD *)(v20 + 8) != v13 + 192 )
    __fastfail(3u);
  *v5 = v20;
  *((_QWORD *)v3 + 32) = v19;
  *(_QWORD *)(v20 + 8) = v5;
  *v19 = v5;
  if ( *(struct _KTHREAD **)(v13 + 160) != KeGetCurrentThread() )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v15, v17);
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[5] = v14;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  if ( *(int *)(v13 + 176) <= 0 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v43 + 24) = 406LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( (*(_DWORD *)(v13 + 176))-- == 1 )
  {
    *(_QWORD *)(v13 + 160) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 168, 0LL);
  }
  KeLeaveCriticalRegion();
  *((_BYTE *)v3 + 272) = 1;
  *((_BYTE *)v3 + 274) = (*((_DWORD *)v3 + 41) & 4) != 0;
  if ( (*((_DWORD *)v3 + 41) & 4) != 0 )
  {
    v44 = (_QWORD *)*((_QWORD *)v3 + 32);
    v45 = (_QWORD *)((char *)v3 + 288);
    if ( (_QWORD *)*v44 != v5 )
      __fastfail(3u);
    *v45 = v5;
    *((_QWORD *)v3 + 37) = v44;
    *v44 = v45;
    *((_QWORD *)v3 + 32) = v45;
  }
LABEL_27:
  v22 = *((_DWORD *)v3 + 41);
  if ( (v22 & 1) != 0 && (v22 & 2) == 0 )
  {
    if ( *((_BYTE *)v3 + 242) )
    {
      Current = DXGPROCESS::GetCurrent();
      v47 = (__int64)Current;
      if ( (*((_BYTE *)Current + 307) & 8) != 0 )
        v47 = *((_QWORD *)Current + 55);
      *((_DWORD *)v3 + 18) = DXGPROCESS::AllocHandleSafe(v47, (__int64)v3, 8u);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v51);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
      *((_DWORD *)v3 + 18) = DXGGLOBAL::AllocHandle(*((_QWORD *)v3 + 2), (__int64)v3, 8u);
      if ( v51[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51);
    }
    v35 = *((_DWORD *)v3 + 18);
    if ( !v35 )
    {
      v48 = WdLogNewEntry5_WdLowResource(v34);
      *(_QWORD *)(v48 + 24) = v3;
      *(_QWORD *)(v48 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v48);
      return 3221225495LL;
    }
    *((_DWORD *)v3 + 58) = v35;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v23[3] = v3;
  v23[4] = *((unsigned int *)v3 + 18);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v25);
  v27 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v50 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v27 = *v50;
    }
  }
  v23[5] = v27;
  WdLogEvent5_WdEvent(v23);
  return 0LL;
}
