/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1C01C2A10
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
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01C0D64 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG64 v12; // rax
  DXGGLOBAL *v13; // rcx
  ULONG64 v14; // rdx
  int v15; // r14d
  _DWORD *v16; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h]
  void *v27[2]; // [rsp+40h] [rbp-38h]
  unsigned int v28[10]; // [rsp+50h] [rbp-28h]
  unsigned int v29; // [rsp+88h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v30; // [rsp+90h] [rbp+18h] BYREF
  struct DXGPROCESS *v31; // [rsp+98h] [rbp+20h]

  v26 = 0LL;
  v25 = 2067;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2067);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2067);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v31 = Current;
  if ( Current )
  {
    v12 = a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    *(_OWORD *)v27 = *(_OWORD *)v12;
    *(_QWORD *)v28 = *(_QWORD *)(v12 + 16);
    v30 = 0LL;
    v29 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v15 = DXGGLOBAL::OpenKeyedMutex(v13, (unsigned int)v27[0], &v30, &v29, (char *)v27[1], v28[0]);
    if ( v15 >= 0 )
    {
      v16 = (_DWORD *)(a1 + 4);
      v14 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = v29;
    }
    if ( v15 < 0 )
    {
      if ( v29 )
        DXGKEYEDMUTEX::DestroyHandle(v29, v14);
    }
    else
    {
      v17 = v29;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v18 = ((unsigned int)v17 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v18 < *((_DWORD *)Current + 62) )
      {
        v19 = *((_QWORD *)Current + 29);
        v20 = ((unsigned int)v17 >> 25) & 0x60;
        if ( (((unsigned int)v17 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
          && (*(_DWORD *)(v19 + 16 * v18 + 8) & 0x1F) != 0 )
        {
          v21 = 2 * ((v17 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v19 + 8 * v21 + 8) & 0x2000) == 0 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v22 + 24) = 215LL;
            WdLogEvent5_WdAssertion(v22);
            v19 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v19 + 8 * v21 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v25);
    return (unsigned int)v15;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v25);
    return 3221225485LL;
  }
}
