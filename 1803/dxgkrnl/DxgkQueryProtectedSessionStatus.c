/*
 * XREFs of DxgkQueryProtectedSessionStatus @ 0x1C01BBEE0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0033344 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionStatus(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v13; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ebx
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h]
  _BYTE v29[56]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 454LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v28 = 0LL;
  v27 = 2150;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2150);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2150);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v27);
    return 3221225485LL;
  }
  v13 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  v30 = *v13;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v29, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v15 = ((unsigned int)v30 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)Current + 62)
    && (v16 = *((_QWORD *)Current + 29),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        (unsigned int)v30 >> 30 == ((v17 >> 5) & 3))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) == 0xE )
  {
    v18 = *(_QWORD *)(v16 + 16LL * (unsigned int)v15);
  }
  else
  {
    v18 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = (unsigned int)v30;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
    goto LABEL_8;
  }
  v23 = *(_DWORD *)(v18 + 140);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  v24 = (_DWORD *)(a1 + 4);
  if ( a1 + 4 >= MmUserProbeAddress )
    v24 = (_DWORD *)MmUserProbeAddress;
  *v24 = v23;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v27);
  return 0LL;
}
