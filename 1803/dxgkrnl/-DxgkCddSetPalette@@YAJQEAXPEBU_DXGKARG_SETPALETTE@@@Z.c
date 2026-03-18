/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C016F530
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C0161D58 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  int PairingAdapters; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rsi
  ADAPTER_DISPLAY **v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // [rsp+30h] [rbp-39h] BYREF
  __int64 v28; // [rsp+38h] [rbp-31h]
  __int64 v29; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v30[32]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v31[88]; // [rsp+68h] [rbp-1h] BYREF
  struct DXGADAPTER *v32; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGADAPTER *v33; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned __int64 v34; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v35; // [rsp+E8h] [rbp+7Fh] BYREF

  v28 = 0LL;
  v27 = 3010;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3010);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 3010);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, &v33, &v35, &v32, &v34);
  v10 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v12 = (__int64 *)v33;
    v13 = (ADAPTER_DISPLAY **)v32;
    if ( !v33 || !v32 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v14 + 24) = 2314LL;
      WdLogEvent5_WdAssertion(v14);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)&v29,
      (struct DXGADAPTER *const)v12,
      (struct DXGADAPTER *const)v13);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v12);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v13);
    v15 = COREADAPTERACCESS::AcquireExclusive(&v29);
    v10 = v15;
    if ( v15 >= 0 )
    {
      if ( !v12[308] )
      {
        v19 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v19 + 24) = 2331LL;
        WdLogEvent5_WdAssertion(v19);
      }
      if ( !v13[307] )
      {
        v20 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v20 + 24) = 2332LL;
        WdLogEvent5_WdAssertion(v20);
      }
      ADAPTER_RENDER::FlushScheduler(v12[308], 6, 0xFFFFFFFF, 0);
      v10 = (int)ADAPTER_DISPLAY::DdiSetPalette(v13[307], a2, v21);
      ADAPTER_RENDER::FlushScheduler(v12[308], 7, 0xFFFFFFFF, 0);
      if ( (int)v10 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v23[3] = v10;
        v23[4] = v13;
        v23[5] = a2->VidPnSourceId;
        v23[6] = Current;
        WdLogEvent5_WdError(v23);
      }
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
      v18[3] = v10;
      v18[4] = v12;
      v18[5] = v13;
      v18[6] = Current;
      WdLogEvent5_WdEvent(v18);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    COREACCESS::~COREACCESS((COREACCESS *)v30);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = a1;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdError(v11);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v27);
  return (unsigned int)v10;
}
