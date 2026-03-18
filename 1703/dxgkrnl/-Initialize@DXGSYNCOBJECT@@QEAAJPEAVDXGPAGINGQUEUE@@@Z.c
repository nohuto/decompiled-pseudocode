/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00D8840
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00D7AB0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C000711C (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C01A5DF8 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2, __int64 a3, __int64 a4)
{
  DXGSYNCOBJECT *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rbp
  volatile signed __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v25; // rcx
  int v26; // eax
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  __int64 CurrentProcess; // rax
  __int64 v30; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v32; // rbx
  __int64 result; // rax
  __int64 v34; // rdx
  bool v35; // r14
  __int64 v36; // rbp
  _QWORD *v37; // rax
  bool v38; // si
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 *ThreadProperty; // rax
  char v59[8]; // [rsp+40h] [rbp-28h] BYREF
  char v60; // [rsp+48h] [rbp-20h]

  v5 = this;
  if ( !*((_BYTE *)this + 225) )
  {
    a3 = *((unsigned int *)this + 36);
    if ( (unsigned int)(a3 - 5) <= 1 )
    {
      v34 = *((unsigned int *)this + 37);
      if ( (v34 & 0x80u) != 0LL )
      {
        *((_BYTE *)this + 224) = 1;
      }
      else if ( (v34 & 4) != 0 )
      {
        *((_BYTE *)this + 224) = 0;
      }
      else
      {
        this = *(DXGSYNCOBJECT **)(*((_QWORD *)this + 31) + 16LL);
        *((_BYTE *)v5 + 224) = (*((_DWORD *)this + 418) & 0x20) == 0;
      }
      v35 = *((_BYTE *)v5 + 224) != 0;
      if ( (_DWORD)a3 == 6 )
        v36 = 0LL;
      else
        v36 = *((_QWORD *)v5 + 19);
      v37 = DXGGLOBAL::m_pGlobal;
      v38 = (v34 & 1) != 0;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v44 = WdLogNewEntry5_WdAssertion(this, v34, a3, a4);
        *(_QWORD *)(v44 + 24) = 1815LL;
        WdLogEvent5_WdAssertion(v44);
        v37 = DXGGLOBAL::m_pGlobal;
      }
      result = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, __int64, bool))(*(_QWORD *)(v37[14] + 8LL) + 912LL))(
                 (__int64)v5 + 96,
                 v38,
                 0LL,
                 v36,
                 v35);
      if ( (int)result < 0 )
        return result;
      if ( a2 )
        *((_QWORD *)v5 + 15) = *((_QWORD *)a2 + 4);
      else
        *((_QWORD *)v5 + 15) = 0LL;
    }
  }
  if ( (*((_DWORD *)v5 + 37) & 4) != 0 )
  {
    LODWORD(v14) = DXGSYNCOBJECTCA::Initialize(v5);
LABEL_66:
    if ( (int)v14 < 0 )
      return (unsigned int)v14;
    goto LABEL_27;
  }
  v6 = (_QWORD *)((char *)v5 + 232);
  if ( *((_QWORD *)v5 + 33) )
  {
    v45 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v45 + 24) = 1427LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !*((_BYTE *)v5 + 225) )
  {
    v7 = (unsigned int)(*((_DWORD *)v5 + 36) - 5) <= 1 ? (__int64)v5 + 96 : 0LL;
    v8 = (*((_DWORD *)v5 + 37) & 4) != 0 ? *((_QWORD *)v5 + 31) : 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, DXGSYNCOBJECT *, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 31) + 408LL) + 8LL) + 520LL))(
           *(_QWORD *)(*((_QWORD *)v5 + 31) + 416LL),
           v5,
           (__int64)v5 + 144,
           v8,
           0LL,
           (__int64)v5 + 264,
           v7);
    v14 = v9;
    if ( v9 < 0 )
    {
      v46 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v46 + 24) = v5;
      *(_QWORD *)(v46 + 32) = v14;
      WdLogEvent5_WdWarning(v46);
      goto LABEL_66;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)v5 + 31) + 16LL) + 24LL));
  v15 = *((_QWORD *)v5 + 31);
  v16 = (volatile signed __int64 *)(v15 + 152);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v15 + 160) == KeGetCurrentThread() )
  {
    if ( *(int *)(v15 + 176) <= 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      *(_QWORD *)(v47 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v47);
    }
    ++*(_DWORD *)(v15 + 176);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v48 = *(_DWORD *)(v15 + 180);
        if ( v48 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v21, &EventBlockThread, v19, v48);
      }
      _InterlockedIncrement64(v16);
      ExAcquirePushLockExclusiveEx(v15 + 168, 0LL);
    }
    if ( *(_QWORD *)(v15 + 160) )
    {
      v49 = WdLogNewEntry5_WdAssertion(v21, v17, v19, v20);
      *(_QWORD *)(v49 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v49);
    }
    if ( *(_DWORD *)(v15 + 176) )
    {
      v50 = WdLogNewEntry5_WdAssertion(v21, v17, v19, v20);
      *(_QWORD *)(v50 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v50);
    }
    *(_QWORD *)(v15 + 160) = KeGetCurrentThread();
    *(_DWORD *)(v15 + 176) = 1;
  }
  v22 = (_QWORD *)(v15 + 192);
  v23 = *(_QWORD *)(v15 + 192);
  if ( *(_QWORD *)(v23 + 8) != v15 + 192 )
    __fastfail(3u);
  *v6 = v23;
  *((_QWORD *)v5 + 30) = v22;
  *(_QWORD *)(v23 + 8) = v6;
  *v22 = v6;
  if ( *(struct _KTHREAD **)(v15 + 160) != KeGetCurrentThread() )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v17, v19);
    v51[3] = 275LL;
    v51[4] = 4LL;
    v51[5] = v16;
    v51[6] = 0LL;
    v51[7] = 0LL;
    WdLogEvent5_WdCriticalError(v51);
  }
  if ( *(int *)(v15 + 176) <= 0 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v23, v17, v19, v20);
    *(_QWORD *)(v52 + 24) = 395LL;
    WdLogEvent5_WdAssertion(v52);
  }
  if ( (*(_DWORD *)(v15 + 176))-- == 1 )
  {
    *(_QWORD *)(v15 + 160) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 168, 0LL);
  }
  KeLeaveCriticalRegion();
  *((_BYTE *)v5 + 256) = 1;
  *((_BYTE *)v5 + 258) = (*((_DWORD *)v5 + 37) & 4) != 0;
  if ( (*((_DWORD *)v5 + 37) & 4) != 0 )
  {
    v25 = (_QWORD *)*((_QWORD *)v5 + 30);
    v53 = (_QWORD *)((char *)v5 + 272);
    if ( (_QWORD *)*v25 != v6 )
      __fastfail(3u);
    *v53 = v6;
    *((_QWORD *)v5 + 35) = v25;
    *v25 = v53;
    *((_QWORD *)v5 + 30) = v53;
  }
LABEL_27:
  v26 = *((_DWORD *)v5 + 37);
  if ( (v26 & 1) == 0 || (v26 & 2) != 0 )
  {
LABEL_28:
    v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v25);
    v27[3] = v5;
    v28 = *((unsigned int *)v5 + 18);
    v27[4] = v28;
    CurrentProcess = PsGetCurrentProcess(v28);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v30);
    v32 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v32 = *ThreadProperty;
    }
    v27[5] = v32;
    WdLogEvent5_WdEvent(v27);
    return 0LL;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v59);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v59);
  v40 = DXGGLOBAL::AllocHandle(*((_QWORD *)v5 + 2), (__int64)v5, 8LL, v39);
  *((_DWORD *)v5 + 18) = v40;
  if ( v40 )
  {
    *((_DWORD *)v5 + 54) = v40;
    if ( v60 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v59, v41, v42, v43);
    goto LABEL_28;
  }
  v54 = WdLogNewEntry5_WdLowResource(v25);
  *(_QWORD *)(v54 + 24) = v5;
  *(_QWORD *)(v54 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v54);
  if ( v60 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v59, v55, v56, v57);
  return 3221225495LL;
}
