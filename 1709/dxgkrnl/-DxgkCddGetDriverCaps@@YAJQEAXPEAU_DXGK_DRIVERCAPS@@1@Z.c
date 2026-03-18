/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00F82B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *a1,
        struct _DXGK_DRIVERCAPS *a2,
        struct _DXGK_DRIVERCAPS *a3)
{
  struct _DXGK_DRIVERCAPS *v3; // rbx
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  struct DXGADAPTER *v13; // rsi
  DXGADAPTER *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  struct _DXGK_DRIVERCAPS *v18; // rax
  __int64 v19; // r8
  __int128 v20; // xmm1
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 v28; // xmm1
  unsigned __int64 v29; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v30[8]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v31[32]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v32[40]; // [rsp+68h] [rbp-40h] BYREF
  struct DXGADAPTER *v33; // [rsp+B0h] [rbp+8h] BYREF
  struct DXGADAPTER *v34; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a2;
  memset(a2, 0, 0x240uLL);
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0, &v34, (unsigned __int64 *)&v33, 0LL, 0LL);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v25 + 24) = a1;
    *(_QWORD *)(v25 + 32) = v8;
    WdLogEvent5_WdError(v25);
  }
  else
  {
    v9 = DxgkpGetPairingAdapters(a1, 0, 0LL, 0LL, &v33, &v29);
    v12 = v9;
    if ( v9 < 0 )
    {
      v26 = WdLogNewEntry5_WdTrace(v11, v10);
      *(_QWORD *)(v26 + 24) = a1;
      v13 = 0LL;
      *(_QWORD *)(v26 + 32) = v12;
    }
    else
    {
      v13 = v33;
    }
    v14 = v34;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v34, v13);
    DXGADAPTER::ReleaseReferenceNoTracking(v14);
    if ( v13 )
      DXGADAPTER::ReleaseReferenceNoTracking(v13);
    LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30);
    if ( (int)v8 >= 0 )
    {
      if ( !v14 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v27 + 24) = 3134LL;
        WdLogEvent5_WdAssertion(v27);
      }
      v16 = 4LL;
      v17 = (_OWORD *)((char *)v14 + 1632);
      v18 = a3;
      v19 = 4LL;
      do
      {
        *(_OWORD *)&v18->HighestAcceptableAddress.LowPart = *v17;
        *(_OWORD *)&v18->ApertureSegmentCommitLimit = v17[1];
        *(_OWORD *)&v18->PointerCaps.0 = v17[2];
        *(_OWORD *)&v18->GammaRampCaps.0 = v17[3];
        *(_OWORD *)&v18->SchedulingCaps.0 = v17[4];
        *(_OWORD *)v18->GpuEngineTopology.Reserved = v17[5];
        *(_OWORD *)&v18->GpuEngineTopology.Reserved[4] = v17[6];
        v18 = (struct _DXGK_DRIVERCAPS *)((char *)v18 + 128);
        v20 = v17[7];
        v17 += 8;
        *(_OWORD *)&v18[-1].SupportSurpriseRemoval = v20;
        --v19;
      }
      while ( v19 );
      *(_OWORD *)&v18->HighestAcceptableAddress.LowPart = *v17;
      *(_OWORD *)&v18->ApertureSegmentCommitLimit = v17[1];
      *(_OWORD *)&v18->PointerCaps.0 = v17[2];
      *(_OWORD *)&v18->GammaRampCaps.0 = v17[3];
      if ( v13 )
      {
        v21 = (_OWORD *)((char *)v13 + 1632);
        do
        {
          *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *v21;
          *(_OWORD *)&v3->ApertureSegmentCommitLimit = v21[1];
          *(_OWORD *)&v3->PointerCaps.0 = v21[2];
          *(_OWORD *)&v3->GammaRampCaps.0 = v21[3];
          *(_OWORD *)&v3->SchedulingCaps.0 = v21[4];
          *(_OWORD *)v3->GpuEngineTopology.Reserved = v21[5];
          *(_OWORD *)&v3->GpuEngineTopology.Reserved[4] = v21[6];
          v3 = (struct _DXGK_DRIVERCAPS *)((char *)v3 + 128);
          v22 = v21[7];
          v21 += 8;
          *(_OWORD *)&v3[-1].SupportSurpriseRemoval = v22;
          --v16;
        }
        while ( v16 );
        *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *v21;
        *(_OWORD *)&v3->ApertureSegmentCommitLimit = v21[1];
        *(_OWORD *)&v3->PointerCaps.0 = v21[2];
        v23 = v21[3];
      }
      else
      {
        do
        {
          *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *(_OWORD *)&a3->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&v3->ApertureSegmentCommitLimit = *(_OWORD *)&a3->ApertureSegmentCommitLimit;
          *(_OWORD *)&v3->PointerCaps.0 = *(_OWORD *)&a3->PointerCaps.0;
          *(_OWORD *)&v3->GammaRampCaps.0 = *(_OWORD *)&a3->GammaRampCaps.0;
          *(_OWORD *)&v3->SchedulingCaps.0 = *(_OWORD *)&a3->SchedulingCaps.0;
          *(_OWORD *)v3->GpuEngineTopology.Reserved = *(_OWORD *)a3->GpuEngineTopology.Reserved;
          *(_OWORD *)&v3->GpuEngineTopology.Reserved[4] = *(_OWORD *)&a3->GpuEngineTopology.Reserved[4];
          v3 = (struct _DXGK_DRIVERCAPS *)((char *)v3 + 128);
          v28 = *(_OWORD *)&a3->GpuEngineTopology.Reserved[8];
          a3 = (struct _DXGK_DRIVERCAPS *)((char *)a3 + 128);
          *(_OWORD *)&v3[-1].SupportSurpriseRemoval = v28;
          --v16;
        }
        while ( v16 );
        *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *(_OWORD *)&a3->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&v3->ApertureSegmentCommitLimit = *(_OWORD *)&a3->ApertureSegmentCommitLimit;
        *(_OWORD *)&v3->PointerCaps.0 = *(_OWORD *)&a3->PointerCaps.0;
        v23 = *(_OWORD *)&a3->GammaRampCaps.0;
      }
      *(_OWORD *)&v3->GammaRampCaps.0 = v23;
      LODWORD(v8) = 0;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
  }
  return (unsigned int)v8;
}
