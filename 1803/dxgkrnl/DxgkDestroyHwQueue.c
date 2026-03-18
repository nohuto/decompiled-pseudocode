/*
 * XREFs of DxgkDestroyHwQueue @ 0x1C01A5600
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C001B6B0 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // r14d
  __int64 v9; // r9
  int v10; // esi
  DXGHWQUEUE *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+28h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  _BYTE v20[24]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+10h]

  v3 = (unsigned int *)a1;
  v19 = 0LL;
  v18 = 2154;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2154);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2154);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v21 = *v3;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v20,
    (struct _KTHREAD **)Current);
  v7 = (v21 >> 6) & 0xFFFFFF;
  v8 = *((_DWORD *)Current + 62);
  if ( (unsigned int)v7 < v8
    && (v9 = *((_QWORD *)Current + 29),
        v6 = *(unsigned int *)(v9 + 16LL * (unsigned int)v7 + 8),
        v10 = (*(_DWORD *)(v9 + 16LL * (unsigned int)v7 + 8) >> 5) & 3,
        v21 >> 30 == v10)
    && (v6 & 0x2000) == 0
    && (v6 & 0x1F) != 0
    && (v6 &= 0x1Fu, (_BYTE)v6 == 15)
    && (v11 = *(DXGHWQUEUE **)(v9 + 16LL * (unsigned int)v7)) != 0LL )
  {
    if ( (unsigned int)v7 < v8 && v21 >> 30 == v10 && (*(_DWORD *)(v9 + 16LL * (unsigned int)v7 + 8) & 0x1F) != 0 )
      *(_DWORD *)(v9 + 16LL * ((v21 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    DXGHWQUEUE::ReleaseReference(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v18);
    return 0LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v7, v21, v6);
    *(_QWORD *)(v15 + 24) = v21;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v18);
    return 3221225485LL;
  }
}
