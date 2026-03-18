/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F9840
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA230 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00164D0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00169F4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C01C0ACC (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2)
{
  __int64 v2; // rbp
  DXGSYNCOBJECT *v4; // rbx
  int v5; // r12d
  _QWORD *v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r14
  volatile signed __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  int v25; // eax
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v31; // rbx
  __int64 result; // rax
  int v33; // eax
  bool v34; // r15
  __int64 v35; // r13
  bool v36; // si
  bool v37; // di
  struct DXGGLOBAL *Global; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r12d
  __int64 v43; // rax
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  struct DXGPROCESS *Current; // rax
  char v51; // cl
  __int64 v52; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v54; // rsi
  _BYTE v55[16]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0LL;
  v4 = this;
  v5 = 1;
  if ( !*((_BYTE *)this + 249) && (unsigned int)(*((_DWORD *)this + 42) - 5) <= 1 )
  {
    v33 = *((_DWORD *)this + 43);
    if ( (v33 & 0x80u) != 0 )
    {
      v34 = 1;
    }
    else if ( (v33 & 4) != 0 )
    {
      v34 = 0;
    }
    else
    {
      this = *(DXGSYNCOBJECT **)(*((_QWORD *)this + 35) + 16LL);
      v34 = (*((_DWORD *)this + 458) & 0x20) == 0;
    }
    *((_BYTE *)v4 + 248) = v34;
    if ( *((_DWORD *)v4 + 42) == 6 )
      v35 = 0LL;
    else
      v35 = *((_QWORD *)v4 + 22);
    v36 = *((_BYTE *)v4 + 251) != 0;
    v37 = (*((_DWORD *)v4 + 43) & 1) != 0;
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    result = (*(__int64 (__fastcall **)(__int64, bool, bool, _QWORD, __int64, bool))(*(_QWORD *)(*((_QWORD *)Global + 14)
                                                                                               + 8LL)
                                                                                   + 912LL))(
               (__int64)v4 + 120,
               v37,
               v36,
               0LL,
               v35,
               v34);
    if ( (int)result < 0 )
      return result;
    if ( a2 )
      *((_QWORD *)v4 + 18) = *((_QWORD *)a2 + 4);
    else
      *((_QWORD *)v4 + 18) = 0LL;
  }
  if ( (*((_DWORD *)v4 + 43) & 4) != 0 )
  {
    LODWORD(v13) = DXGSYNCOBJECTCA::Initialize(v4);
LABEL_68:
    if ( (int)v13 < 0 )
      return (unsigned int)v13;
    goto LABEL_27;
  }
  v6 = (_QWORD *)((char *)v4 + 264);
  if ( *((_QWORD *)v4 + 37) )
  {
    v40 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v40 + 24) = 1586LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !*((_BYTE *)v4 + 249) )
  {
    v7 = (unsigned int)(*((_DWORD *)v4 + 42) - 5) <= 1 ? (__int64)v4 + 120 : 0LL;
    v8 = (*((_DWORD *)v4 + 43) & 4) != 0 ? *((_QWORD *)v4 + 35) : 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, DXGSYNCOBJECT *, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 35) + 520LL) + 8LL) + 616LL))(
           *(_QWORD *)(*((_QWORD *)v4 + 35) + 528LL),
           v4,
           (__int64)v4 + 168,
           v8,
           0LL,
           (__int64)v4 + 296,
           v7);
    v13 = v9;
    if ( v9 < 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v41 + 24) = v4;
      *(_QWORD *)(v41 + 32) = v13;
      WdLogEvent5_WdWarning(v41);
      goto LABEL_68;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)v4 + 35) + 16LL) + 24LL));
  v14 = *((_QWORD *)v4 + 35);
  v15 = (volatile signed __int64 *)(v14 + 152);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v14 + 160) == KeGetCurrentThread() )
  {
    v42 = *(_DWORD *)(v14 + 176);
    if ( v42 <= 0 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v43 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v43);
      v42 = *(_DWORD *)(v14 + 176);
    }
    v5 = v42 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v44 = *(_DWORD *)(v14 + 180);
        if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v17, &EventBlockThread, v18, v44);
      }
      _InterlockedIncrement64(v15);
      ExAcquirePushLockExclusiveEx(v14 + 168, 0LL);
    }
    if ( *(_QWORD *)(v14 + 160) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v45 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v45);
    }
    if ( *(_DWORD *)(v14 + 176) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v46 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v46);
    }
    *(_QWORD *)(v14 + 160) = KeGetCurrentThread();
  }
  v19 = (_QWORD *)(v14 + 192);
  *(_DWORD *)(v14 + 176) = v5;
  v20 = *(_QWORD *)(v14 + 192);
  if ( *(_QWORD *)(v20 + 8) != v14 + 192 )
    __fastfail(3u);
  *v6 = v20;
  *((_QWORD *)v4 + 34) = v19;
  *(_QWORD *)(v20 + 8) = v6;
  *v19 = v6;
  if ( *(struct _KTHREAD **)(v14 + 160) != KeGetCurrentThread() )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20);
    v47[3] = 275LL;
    v47[4] = 4LL;
    v47[5] = v15;
    v47[6] = 0LL;
    v47[7] = 0LL;
    WdLogEvent5_WdCriticalError(v47);
  }
  v21 = *(_DWORD *)(v14 + 176);
  if ( v21 <= 0 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v48 + 24) = 450LL;
    WdLogEvent5_WdAssertion(v48);
    v21 = *(_DWORD *)(v14 + 176);
  }
  v22 = v21 - 1;
  *(_DWORD *)(v14 + 176) = v22;
  if ( !v22 )
  {
    *(_QWORD *)(v14 + 160) = 0LL;
    ExReleasePushLockExclusiveEx(v14 + 168, 0LL);
  }
  KeLeaveCriticalRegion();
  *((_BYTE *)v4 + 288) = 1;
  *((_BYTE *)v4 + 290) = (*((_DWORD *)v4 + 43) & 4) != 0;
  if ( (*((_DWORD *)v4 + 43) & 4) != 0 )
  {
    v24 = (_QWORD *)*((_QWORD *)v4 + 34);
    v49 = (_QWORD *)((char *)v4 + 304);
    if ( (_QWORD *)*v24 != v6 )
      __fastfail(3u);
    *v49 = v6;
    *((_QWORD *)v4 + 39) = v24;
    *v24 = v49;
    *((_QWORD *)v4 + 34) = v49;
  }
LABEL_27:
  v25 = *((_DWORD *)v4 + 43);
  if ( (v25 & 1) != 0 && ((v25 & 2) == 0 || *((_BYTE *)v4 + 250)) )
  {
    if ( *((_BYTE *)v4 + 250) )
    {
      Current = DXGPROCESS::GetCurrent((__int64)v24, v23);
      v51 = *((_BYTE *)Current + 323);
      if ( (v51 & 8) != 0 )
      {
        v2 = *((_QWORD *)Current + 57);
      }
      else if ( (v51 & 4) != 0 )
      {
        v2 = (__int64)Current;
      }
      *((_DWORD *)v4 + 18) = DXGPROCESS::AllocHandleSafe(v2, (__int64)v4, 8u);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v55);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v55);
      *((_DWORD *)v4 + 18) = DXGGLOBAL::AllocHandle(*((_QWORD *)v4 + 2), (__int64)v4, 8u);
      if ( v55[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v55);
    }
    v39 = *((_DWORD *)v4 + 18);
    if ( !v39 )
    {
      v52 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v52 + 24) = v4;
      *(_QWORD *)(v52 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v52);
      return 3221225495LL;
    }
    *((_DWORD *)v4 + 60) = v39;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23);
  v26[3] = v4;
  v27 = *((unsigned int *)v4 + 18);
  v26[4] = v27;
  CurrentProcess = PsGetCurrentProcess(v27, v28);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v31 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v54 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v31 = *v54;
    }
  }
  v26[5] = v31;
  WdLogEvent5_WdEvent(v26);
  return 0LL;
}
