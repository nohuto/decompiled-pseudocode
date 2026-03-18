/*
 * XREFs of DxgkDestroyProtectedSession @ 0x1C01BCA70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0028708 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BBDB8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

__int64 __fastcall DxgkDestroyProtectedSession(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  void *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2149);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v10 = qword_1C005F010;
    v11 = (qword_1C005F010 & 2) == 0;
LABEL_8:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v9, 2149);
    return 3221225485LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v13 = *a1;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v25, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
  v15 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)Current + 60)
    && (v16 = *((_QWORD *)Current + 28),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0
    && (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x1F) == 0xE )
  {
    v18 = *(void **)(v16 + 16LL * (unsigned int)v15);
  }
  else
  {
    v18 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = v13;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v25);
    v11 = (qword_1C005F010 & 2) == 0;
    goto LABEL_8;
  }
  DXGPROTECTEDSESSION::DestroyProtectedSession(v18, v13);
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v25);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, 2149);
  return 0LL;
}
