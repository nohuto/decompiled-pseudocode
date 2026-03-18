/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C017DD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0001BD8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001C04 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00139F0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C009B108 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C016CA50 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _OWORD *v11; // rax
  void *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  struct DXGGLOBAL *Global; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rdx
  _DWORD *v37; // rdx
  _DWORD *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  _BYTE v43[24]; // [rsp+20h] [rbp-C8h] BYREF
  void *v44[2]; // [rsp+38h] [rbp-B0h]
  __int128 v45; // [rsp+48h] [rbp-A0h]
  _QWORD v46[5]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v47[24]; // [rsp+80h] [rbp-68h] BYREF
  int v48; // [rsp+98h] [rbp-50h]
  char v49; // [rsp+9Ch] [rbp-4Ch]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2126);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v11 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v44 = *v11;
    v45 = v11[1];
    memset(v46, 0, sizeof(v46));
    LODWORD(v46[3]) = -1;
    v12 = v44[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v47, v44[0], 4096);
    LODWORD(v15) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v47, 1);
    if ( (_DWORD)v15 == -1073741790 )
    {
      if ( v49 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14, v13, v16, v17);
        *(_QWORD *)(v18 + 24) = 1200LL;
        WdLogEvent5_WdAssertion(v18);
      }
      v48 = 1024;
      LODWORD(v15) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v47, 1);
    }
    if ( (int)v15 >= 0 )
    {
      v46[0] = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v47);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v43, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v43, 1u);
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        Global = DXGGLOBAL::GetGlobal(v26, v25, v27, v28);
        v31 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)v46,
                1LL);
        v15 = v31;
        if ( v31 < 0 )
        {
          v40 = *((unsigned int *)DXGGLOBAL::GetGlobal(v33, v32, v34, v35) + 276);
          if ( (v40 & 2) != 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
            v42[3] = 275LL;
            v42[4] = 33LL;
            v42[5] = v15;
            v42[6] = 0LL;
            v42[7] = 0LL;
            WdLogEvent5_WdCriticalError(v42);
          }
        }
        else
        {
          v36 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v36 = (_QWORD *)MmUserProbeAddress;
          *v36 = *(_QWORD *)((char *)&v46[3] + 4);
          v37 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v37 = (_DWORD *)MmUserProbeAddress;
          *v37 = v46[3];
          v38 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v38 = (_DWORD *)MmUserProbeAddress;
          *v38 = HIDWORD(v46[4]);
        }
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v26, v25);
        *(_QWORD *)(v29 + 24) = 7866LL;
        WdLogEvent5_WdError(v29);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v43);
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v19 + 24) = v12;
      WdLogEvent5_WdError(v19);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v47, v20, v21, v22);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v23, &EventProfilerExit, v24, 2126);
    return (unsigned int)v15;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = 7823LL;
    WdLogEvent5_WdError(v7);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2126);
    return 3221225485LL;
  }
}
