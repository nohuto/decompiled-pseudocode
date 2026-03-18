/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1C01C2D10
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00348B8 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C01C1044 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGKEYEDMUTEX *v16; // r14
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+38h] [rbp-30h]
  unsigned int v26[4]; // [rsp+40h] [rbp-28h]
  unsigned __int64 v27; // [rsp+50h] [rbp-18h]
  DXGKEYEDMUTEX *v28; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v29; // [rsp+80h] [rbp+18h] BYREF

  v3 = a1;
  v25 = 0LL;
  v24 = 2055;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2055);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2055);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v24);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v26 = *(_OWORD *)v3;
  v27 = *(_QWORD *)(v3 + 16);
  v12 = v26[0];
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v28, v26[0], Current, &v29);
  v16 = v29;
  if ( !v29 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v12;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    if ( v28 )
      DXGKEYEDMUTEX::ReleaseReference(v28);
    goto LABEL_6;
  }
  v18 = DXGKEYEDMUTEX::ReleaseSync(v29, v12, *(__int64 *)&v26[2], (struct _LIST_ENTRY *)v27, 0LL, 0);
  v20 = v18;
  if ( v18 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v21[3] = v12;
    v21[4] = v16;
    v21[5] = v20;
    WdLogEvent5_WdError(v21);
  }
  if ( v28 )
    DXGKEYEDMUTEX::ReleaseReference(v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v24);
  return (unsigned int)v20;
}
