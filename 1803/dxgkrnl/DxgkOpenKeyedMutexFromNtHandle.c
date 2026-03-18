/*
 * XREFs of DxgkOpenKeyedMutexFromNtHandle @ 0x1C01AB9B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01C052C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C01C0EB4 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutexFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD *v12; // rax
  DXGGLOBAL *v13; // rcx
  int v14; // r14d
  _DWORD *v15; // r8
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]
  void *v26[2]; // [rsp+40h] [rbp-38h]
  void *v27[2]; // [rsp+50h] [rbp-28h]
  unsigned int v28; // [rsp+88h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v29; // [rsp+90h] [rbp+18h] BYREF
  struct DXGPROCESS *v30; // [rsp+98h] [rbp+20h]

  v25 = 0LL;
  v24 = 2159;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2159);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2159);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v30 = Current;
  if ( Current )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v26 = *v12;
    *(_OWORD *)v27 = v12[1];
    v29 = 0LL;
    v28 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v14 = DXGGLOBAL::OpenKeyedMutexFromNtHandle(v13, v26[0], &v29, &v28, v27[0], (unsigned int)v27[1]);
    if ( v14 >= 0 )
    {
      v15 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v28;
    }
    if ( v14 < 0 )
    {
      if ( v28 )
        DXGKEYEDMUTEX::DestroyHandle(v28);
    }
    else
    {
      v16 = v28;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v17 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 < *((_DWORD *)Current + 62) )
      {
        v18 = *((_QWORD *)Current + 29);
        v19 = ((unsigned int)v16 >> 25) & 0x60;
        if ( (((unsigned int)v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
          && (*(_DWORD *)(v18 + 16 * v17 + 8) & 0x1F) != 0 )
        {
          v20 = 2 * ((v16 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v18 + 8 * v20 + 8) & 0x2000) == 0 )
          {
            v21 = WdLogNewEntry5_WdAssertion(v19);
            *(_QWORD *)(v21 + 24) = 215LL;
            WdLogEvent5_WdAssertion(v21);
            v18 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v18 + 8 * v20 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v24);
    return (unsigned int)v14;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v24);
    return 3221225485LL;
  }
}
