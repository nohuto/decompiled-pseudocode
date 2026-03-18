/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C00D8EB8
 * Callers:
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C00D8E88 (DxgkOpenAdapterFromLuidInternal.c)
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00D8EA0 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00A5780 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00F50F8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, __int64 a3)
{
  struct _D3DKMT_OPENADAPTERFROMLUID *v5; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rbx
  ADAPTER_RENDER *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // esi
  _DWORD *p_hAdapter; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  LUID AdapterLuid; // [rsp+20h] [rbp-58h]
  unsigned int hAdapter; // [rsp+28h] [rbp-50h] BYREF
  int v31; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+38h] [rbp-40h]
  _BYTE v33[8]; // [rsp+40h] [rbp-38h] BYREF
  struct DXGADAPTER *v34; // [rsp+48h] [rbp-30h]
  char v35; // [rsp+50h] [rbp-28h]
  unsigned __int64 v36; // [rsp+90h] [rbp+18h] BYREF

  v32 = 0LL;
  v31 = 2082;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2082);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2082);
  if ( a2 )
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v5->AdapterLuid;
    hAdapter = v5->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    Global = DXGGLOBAL::GetGlobal(v6);
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v36);
    v13 = v9;
    if ( v9 )
    {
      v34 = v9;
      v35 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
      if ( *((_DWORD *)v13 + 44) == 1
        && !*((_BYTE *)v13 + 2373)
        && (v14 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 308)) != 0LL
        && ADAPTER_RENDER::IsProcessGpuAccessBlocked(v14, Current) )
      {
        v26 = WdLogNewEntry5_WdEvent(v16, v15);
        *(_QWORD *)(v26 + 24) = v13;
        *(_QWORD *)(v26 + 32) = Current;
        WdLogEvent5_WdEvent(v26);
        DXGADAPTER::ReleaseReferenceNoTracking(v13);
        if ( v35 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v27, &EventProfilerExit, v28, v31);
        return 3221225506LL;
      }
      else
      {
        v17 = DXGADAPTER::CreateHandle(v13, Current, &hAdapter);
        DXGADAPTER::ReleaseReferenceNoTracking(v13);
        if ( a2 )
        {
          p_hAdapter = &a1->hAdapter;
          if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
            p_hAdapter = (_DWORD *)MmUserProbeAddress;
          *p_hAdapter = hAdapter;
        }
        else
        {
          a1->hAdapter = hAdapter;
        }
        if ( v35 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v19, &EventProfilerExit, v20, v31);
        return v17;
      }
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v23[3] = AdapterLuid.LowPart;
    v23[4] = AdapterLuid.HighPart;
    v23[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v31);
  return 3221225485LL;
}
