/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C010F9D0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0009844 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A718 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001A72C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00D2EF4 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01471FC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  _OWORD *v8; // rax
  void *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _DWORD *v17; // rdx
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // [rsp+20h] [rbp-108h] BYREF
  __int64 v31; // [rsp+28h] [rbp-100h]
  __int64 v32; // [rsp+30h] [rbp-F8h]
  _QWORD v33[4]; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE v34[24]; // [rsp+58h] [rbp-D0h] BYREF
  void *v35[2]; // [rsp+70h] [rbp-B8h]
  __int128 v36; // [rsp+80h] [rbp-A8h]
  int v37; // [rsp+90h] [rbp-98h]
  int v38; // [rsp+94h] [rbp-94h]
  int v39; // [rsp+98h] [rbp-90h]
  int v40; // [rsp+9Ch] [rbp-8Ch]
  _BYTE v41[32]; // [rsp+A0h] [rbp-88h] BYREF
  int v42; // [rsp+C0h] [rbp-68h]
  char v43; // [rsp+C4h] [rbp-64h]

  v31 = 0LL;
  v30 = 2126;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2126);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2126);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v8 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v35 = *v8;
    v36 = v8[1];
    memset(v33, 0, sizeof(v33));
    LODWORD(v33[2]) = -1;
    v9 = v35[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v41, v35[0], 4096);
    LODWORD(v11) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v41, 1);
    if ( (_DWORD)v11 == -1073741790 )
    {
      if ( v43 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v25 + 24) = 1396LL;
        WdLogEvent5_WdAssertion(v25);
      }
      v42 = 1024;
      LODWORD(v11) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v41, 1);
    }
    if ( (int)v11 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v26 + 24) = v9;
      WdLogEvent5_WdError(v26);
    }
    else
    {
      v33[0] = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v41);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v34, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v34, 1u);
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        LODWORD(v32) = (v39 + v37) / 2;
        HIDWORD(v32) = (v40 + v38) / 2;
        v33[1] = v32;
        Global = DXGGLOBAL::GetGlobal(v12);
        v14 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)v33,
                1);
        v11 = v14;
        if ( v14 < 0 )
        {
          v28 = *((unsigned int *)DXGGLOBAL::GetGlobal(v15) + 296);
          if ( (v28 & 2) != 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
            v29[3] = 275LL;
            v29[4] = 33LL;
            v29[5] = v11;
            v29[6] = 0LL;
            v29[7] = 0LL;
            WdLogEvent5_WdCriticalError(v29);
          }
        }
        else
        {
          v16 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v16 = (_QWORD *)MmUserProbeAddress;
          *v16 = *(_QWORD *)((char *)&v33[2] + 4);
          v17 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v17 = (_DWORD *)MmUserProbeAddress;
          *v17 = v33[2];
          v18 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v18 = (_DWORD *)MmUserProbeAddress;
          *v18 = HIDWORD(v33[3]);
        }
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v27 + 24) = 8919LL;
        WdLogEvent5_WdError(v27);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v34);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v30);
    return (unsigned int)v11;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v22 + 24) = 8875LL;
    WdLogEvent5_WdError(v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v30);
    return 3221225485LL;
  }
}
