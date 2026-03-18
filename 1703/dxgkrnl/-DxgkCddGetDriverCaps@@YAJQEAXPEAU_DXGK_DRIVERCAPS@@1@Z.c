/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00A5450
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *a1,
        struct _DXGK_DRIVERCAPS *a2,
        struct _DXGK_DRIVERCAPS *a3)
{
  struct _DXGK_DRIVERCAPS *v3; // rbx
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  struct DXGADAPTER *v16; // rsi
  DXGADAPTER *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  struct _DXGK_DRIVERCAPS *v24; // rax
  __int64 v25; // r8
  __int128 v26; // xmm1
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int128 v34; // xmm1
  unsigned __int64 v35; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v36[8]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v37[32]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v38[40]; // [rsp+68h] [rbp-40h] BYREF
  struct DXGADAPTER *v39; // [rsp+B0h] [rbp+8h] BYREF
  struct DXGADAPTER *v40; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a2;
  memset(a2, 0, 0x240uLL);
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0, &v40, (unsigned __int64 *)&v39, 0LL, 0LL);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v31 + 24) = a1;
    *(_QWORD *)(v31 + 32) = v9;
    WdLogEvent5_WdError(v31);
  }
  else
  {
    v10 = DxgkpGetPairingAdapters(a1, 0, 0LL, 0LL, &v39, &v35);
    v15 = v10;
    if ( v10 < 0 )
    {
      v32 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      *(_QWORD *)(v32 + 24) = a1;
      v16 = 0LL;
      *(_QWORD *)(v32 + 32) = v15;
    }
    else
    {
      v16 = v39;
    }
    v17 = v40;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v40, v16);
    DXGADAPTER::ReleaseReference(v17);
    if ( v16 )
      DXGADAPTER::ReleaseReference(v16);
    LODWORD(v9) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
    if ( (int)v9 >= 0 )
    {
      if ( !v17 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        *(_QWORD *)(v33 + 24) = 3091LL;
        WdLogEvent5_WdAssertion(v33);
      }
      v22 = 4LL;
      v23 = (_OWORD *)((char *)v17 + 1608);
      v24 = a3;
      v25 = 4LL;
      do
      {
        *(_OWORD *)&v24->HighestAcceptableAddress.LowPart = *v23;
        *(_OWORD *)&v24->ApertureSegmentCommitLimit = v23[1];
        *(_OWORD *)&v24->PointerCaps.0 = v23[2];
        *(_OWORD *)&v24->GammaRampCaps.0 = v23[3];
        *(_OWORD *)&v24->SchedulingCaps.0 = v23[4];
        *(_OWORD *)v24->GpuEngineTopology.Reserved = v23[5];
        *(_OWORD *)&v24->GpuEngineTopology.Reserved[4] = v23[6];
        v24 = (struct _DXGK_DRIVERCAPS *)((char *)v24 + 128);
        v26 = v23[7];
        v23 += 8;
        *(_OWORD *)&v24[-1].SupportSurpriseRemoval = v26;
        --v25;
      }
      while ( v25 );
      *(_OWORD *)&v24->HighestAcceptableAddress.LowPart = *v23;
      *(_OWORD *)&v24->ApertureSegmentCommitLimit = v23[1];
      *(_OWORD *)&v24->PointerCaps.0 = v23[2];
      *(_OWORD *)&v24->GammaRampCaps.0 = v23[3];
      if ( v16 )
      {
        v27 = (_OWORD *)((char *)v16 + 1608);
        do
        {
          *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *v27;
          *(_OWORD *)&v3->ApertureSegmentCommitLimit = v27[1];
          *(_OWORD *)&v3->PointerCaps.0 = v27[2];
          *(_OWORD *)&v3->GammaRampCaps.0 = v27[3];
          *(_OWORD *)&v3->SchedulingCaps.0 = v27[4];
          *(_OWORD *)v3->GpuEngineTopology.Reserved = v27[5];
          *(_OWORD *)&v3->GpuEngineTopology.Reserved[4] = v27[6];
          v3 = (struct _DXGK_DRIVERCAPS *)((char *)v3 + 128);
          v28 = v27[7];
          v27 += 8;
          *(_OWORD *)&v3[-1].SupportSurpriseRemoval = v28;
          --v22;
        }
        while ( v22 );
        *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *v27;
        *(_OWORD *)&v3->ApertureSegmentCommitLimit = v27[1];
        *(_OWORD *)&v3->PointerCaps.0 = v27[2];
        v29 = v27[3];
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
          v34 = *(_OWORD *)&a3->GpuEngineTopology.Reserved[8];
          a3 = (struct _DXGK_DRIVERCAPS *)((char *)a3 + 128);
          *(_OWORD *)&v3[-1].SupportSurpriseRemoval = v34;
          --v22;
        }
        while ( v22 );
        *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *(_OWORD *)&a3->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&v3->ApertureSegmentCommitLimit = *(_OWORD *)&a3->ApertureSegmentCommitLimit;
        *(_OWORD *)&v3->PointerCaps.0 = *(_OWORD *)&a3->PointerCaps.0;
        v29 = *(_OWORD *)&a3->GammaRampCaps.0;
      }
      *(_OWORD *)&v3->GammaRampCaps.0 = v29;
      LODWORD(v9) = 0;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
  }
  return (unsigned int)v9;
}
