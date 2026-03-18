/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x1C00D8A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C00E1718 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // r14
  __int64 v11; // rcx
  int PairingAdapters; // esi
  ADAPTER_DISPLAY **v13; // rbx
  struct DXGADAPTER *v14; // rsi
  _DWORD *v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-B0h]
  unsigned int v29[4]; // [rsp+40h] [rbp-A8h] BYREF
  DXGADAPTER *v30; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v32[120]; // [rsp+70h] [rbp-78h] BYREF
  struct DXGADAPTER *v33; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+100h] [rbp+18h] BYREF
  struct DXGADAPTER *v35; // [rsp+108h] [rbp+20h] BYREF

  v28 = 0LL;
  v27 = 2146;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2146);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2146);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v29 = *v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v30, v29[0], Current, &v33);
    v10 = v33;
    if ( v33 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v33, v29[1], &v33, &v34, &v35, &v31);
      if ( PairingAdapters < 0 )
      {
        v13 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v10, v29[1], &v33, &v34, 0LL, 0LL);
      }
      else
      {
        v13 = (ADAPTER_DISPLAY **)v35;
      }
      if ( PairingAdapters < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v24 + 24) = v10;
        *(_QWORD *)(v24 + 32) = v29[1];
        WdLogEvent5_WdError(v24);
      }
      else
      {
        if ( v13 && !v13[307] )
        {
          v25 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v25 + 24) = 9841LL;
          WdLogEvent5_WdAssertion(v25);
        }
        v14 = v33;
        if ( !v33 || !*((_QWORD *)v33 + 308) )
        {
          v26 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v26 + 24) = 9843LL;
          WdLogEvent5_WdAssertion(v26);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v14, (struct DXGADAPTER *const)v13);
        DXGADAPTER::ReleaseReferenceNoTracking(v14);
        if ( v13 )
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v13);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32);
        if ( PairingAdapters >= 0 )
        {
          if ( v13 )
          {
            PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                                v13[307],
                                v29[1],
                                (float *)&v29[2],
                                (float *)&v29[3]);
          }
          else
          {
            v29[2] = 1065353216;
            v29[3] = 1065353216;
          }
          v15 = (_DWORD *)(a1 + 8);
          if ( a1 + 8 >= MmUserProbeAddress )
            v15 = (_DWORD *)MmUserProbeAddress;
          *v15 = v29[2];
          v16 = (_DWORD *)(a1 + 12);
          if ( a1 + 12 >= MmUserProbeAddress )
            v16 = (_DWORD *)MmUserProbeAddress;
          *v16 = v29[3];
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      }
      if ( v30 )
        DXGADAPTER::ReleaseReferenceNoTracking(v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v27);
      return (unsigned int)PairingAdapters;
    }
    v23 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v23 + 24) = v29[0];
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    if ( v30 )
      DXGADAPTER::ReleaseReferenceNoTracking(v30);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v27);
  return 3221225485LL;
}
