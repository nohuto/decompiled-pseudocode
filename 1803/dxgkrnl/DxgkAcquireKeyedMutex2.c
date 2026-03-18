/*
 * XREFs of DxgkAcquireKeyedMutex2 @ 0x1C01C1D60
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01BFC5C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD *v12; // rax
  union _LARGE_INTEGER *v13; // r9
  __int64 *v14; // rdx
  ULONG64 v15; // rcx
  _QWORD *v16; // r8
  size_t v17; // [rsp+30h] [rbp-58h]
  int v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  unsigned int v20[4]; // [rsp+50h] [rbp-38h]
  __int128 v21; // [rsp+60h] [rbp-28h] BYREF
  void *v22[2]; // [rsp+70h] [rbp-18h]
  __int64 v23; // [rsp+98h] [rbp+10h] BYREF

  v19 = 0LL;
  v18 = 2068;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2068);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2068);
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v7);
    goto LABEL_7;
  }
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v20 = *v12;
  v21 = v12[1];
  *(_OWORD *)v22 = v12[2];
  v13 = 0LL;
  v14 = (__int64 *)v21;
  if ( (_QWORD)v21 )
  {
    if ( (unsigned __int64)v21 >= MmUserProbeAddress )
      v14 = (__int64 *)MmUserProbeAddress;
    v23 = *v14;
    v13 = (union _LARGE_INTEGER *)&v23;
  }
  LODWORD(v17) = v22[1];
  v8 = DXGKEYEDMUTEX::AcquireSync(
         v20[0],
         *(__int64 *)&v20[2],
         0,
         v13,
         (DXGKEYEDMUTEX *)((char *)&v21 + 8),
         v22[0],
         v17,
         0LL);
  if ( v8 >= 0 )
  {
    v16 = (_QWORD *)(a1 + 24);
    v15 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v16 = (_QWORD *)MmUserProbeAddress;
    *v16 = *((_QWORD *)&v21 + 1);
  }
  if ( v8 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v7 + 24) = v20[0];
    *(_QWORD *)(v7 + 32) = v8;
    goto LABEL_6;
  }
LABEL_7:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v18);
  return (unsigned int)v8;
}
