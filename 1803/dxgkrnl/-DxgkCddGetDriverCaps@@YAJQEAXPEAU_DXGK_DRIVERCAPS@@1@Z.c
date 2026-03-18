/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00DE560
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *a1,
        struct _DXGK_DRIVERCAPS *a2,
        struct _DXGK_DRIVERCAPS *a3)
{
  struct _DXGK_DRIVERCAPS *v3; // rdi
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  struct DXGADAPTER *v15; // r14
  DXGADAPTER *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rax
  struct _DXGK_DRIVERCAPS *v20; // rcx
  __int64 v21; // r8
  __int128 v22; // xmm1
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v32; // xmm1
  unsigned __int64 v33; // [rsp+30h] [rbp-39h] BYREF
  int v34; // [rsp+38h] [rbp-31h] BYREF
  __int64 v35; // [rsp+40h] [rbp-29h]
  _BYTE v36[8]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v37[32]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v38[72]; // [rsp+78h] [rbp+Fh] BYREF
  struct DXGADAPTER *v39; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGADAPTER *v40; // [rsp+E8h] [rbp+7Fh] BYREF

  v35 = 0LL;
  v3 = a3;
  v34 = 3005;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3005);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 3005);
  memset(a2, 0, sizeof(struct _DXGK_DRIVERCAPS));
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0, &v40, (unsigned __int64 *)&v39, 0LL, 0LL);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v29 + 24) = a1;
    *(_QWORD *)(v29 + 32) = v8;
    WdLogEvent5_WdError(v29);
  }
  else
  {
    v9 = DxgkpGetPairingAdapters(a1, 0, 0LL, 0LL, &v39, &v33);
    v14 = v9;
    if ( v9 < 0 )
    {
      v30 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      *(_QWORD *)(v30 + 24) = a1;
      v15 = 0LL;
      *(_QWORD *)(v30 + 32) = v14;
    }
    else
    {
      v15 = v39;
    }
    v16 = v40;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v40, v15);
    DXGADAPTER::ReleaseReferenceNoTracking(v16);
    if ( v15 )
      DXGADAPTER::ReleaseReferenceNoTracking(v15);
    LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
    if ( (int)v8 >= 0 )
    {
      if ( !v16 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v31 + 24) = 3198LL;
        WdLogEvent5_WdAssertion(v31);
      }
      v18 = 4LL;
      v19 = (_OWORD *)((char *)v16 + 1768);
      v20 = v3;
      v21 = 4LL;
      do
      {
        *(_OWORD *)&v20->HighestAcceptableAddress.LowPart = *v19;
        *(_OWORD *)&v20->ApertureSegmentCommitLimit = v19[1];
        *(_OWORD *)&v20->PointerCaps.0 = v19[2];
        *(_OWORD *)&v20->GammaRampCaps.0 = v19[3];
        *(_OWORD *)&v20->SchedulingCaps.0 = v19[4];
        *(_OWORD *)v20->GpuEngineTopology.Reserved = v19[5];
        *(_OWORD *)&v20->GpuEngineTopology.Reserved[4] = v19[6];
        v20 = (struct _DXGK_DRIVERCAPS *)((char *)v20 + 128);
        v22 = v19[7];
        v19 += 8;
        *(_OWORD *)&v20[-1].SupportSurpriseRemoval = v22;
        --v21;
      }
      while ( v21 );
      *(_OWORD *)&v20->HighestAcceptableAddress.LowPart = *v19;
      *(_OWORD *)&v20->ApertureSegmentCommitLimit = v19[1];
      *(_OWORD *)&v20->PointerCaps.0 = v19[2];
      *(_OWORD *)&v20->GammaRampCaps.0 = v19[3];
      *(_QWORD *)&v20->SchedulingCaps.0 = *((_QWORD *)v19 + 8);
      if ( v15 )
      {
        v23 = (_OWORD *)((char *)v15 + 1768);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v23;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v23[1];
          *(_OWORD *)&a2->PointerCaps.0 = v23[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v23[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v23[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v23[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v23[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v24 = v23[7];
          v23 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v24;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v23;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v23[1];
        *(_OWORD *)&a2->PointerCaps.0 = v23[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v23[3];
        v25 = *((_QWORD *)v23 + 8);
      }
      else
      {
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v3->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v3->ApertureSegmentCommitLimit;
          *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v3->PointerCaps.0;
          *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v3->GammaRampCaps.0;
          *(_OWORD *)&a2->SchedulingCaps.0 = *(_OWORD *)&v3->SchedulingCaps.0;
          *(_OWORD *)a2->GpuEngineTopology.Reserved = *(_OWORD *)v3->GpuEngineTopology.Reserved;
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = *(_OWORD *)&v3->GpuEngineTopology.Reserved[4];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v32 = *(_OWORD *)&v3->GpuEngineTopology.Reserved[8];
          v3 = (struct _DXGK_DRIVERCAPS *)((char *)v3 + 128);
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v32;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v3->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v3->ApertureSegmentCommitLimit;
        *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v3->PointerCaps.0;
        *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v3->GammaRampCaps.0;
        v25 = *(_QWORD *)&v3->SchedulingCaps.0;
      }
      *(_QWORD *)&a2->SchedulingCaps.0 = v25;
      LODWORD(v8) = 0;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v34);
  return (unsigned int)v8;
}
