/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x1404E9AF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetWorkingSetLeafSize @ 0x140084BE4 (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x140084C80 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x140084C90 (MmGetResidentAvailablePages.c)
 *     ExQueryPoolUsage @ 0x140084CB0 (ExQueryPoolUsage.c)
 *     MiMaximumCommitmentAvailable @ 0x140085030 (MiMaximumCommitmentAvailable.c)
 *     MiFreePoolPagesLeft @ 0x140085050 (MiFreePoolPagesLeft.c)
 *     MmGetSystemPageCounts @ 0x140085080 (MmGetSystemPageCounts.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x140085094 (MmGetNumberOfFreeSystemPtes.c)
 *     MmGetPeakCommitment @ 0x140085120 (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x14008513C (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x140085158 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x140085174 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x140085190 (MmGetProcessPartitionId.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PsQueryRuntimeProcess @ 0x1404EC620 (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  ULONG v3; // r11d
  LARGE_INTEGER v4; // rax
  ULONG v5; // ebx
  LARGE_INTEGER v6; // r9
  ULONG v7; // edi
  LARGE_INTEGER v8; // r10
  __int64 *v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // edx
  int v14; // r8d
  __int64 *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 AvailablePages; // rax
  unsigned __int16 v19; // r9
  int v20; // ecx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // r10
  int v24; // r8d
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int16 v26; // r9
  unsigned __int64 v27; // r10
  int v28; // ecx
  unsigned __int64 PeakCommitment; // rax
  unsigned int v30; // r8d
  unsigned __int64 v31; // r10
  unsigned int v32; // ecx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r10d
  int v36; // r11d
  int v37; // edi
  int v38; // esi
  int v39; // r15d
  int v40; // r12d
  int v41; // r13d
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 *v45; // rdx
  int v46; // r14d
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  char *WorkingSetLeafSize; // rax
  __int64 v51; // rdx
  char *v52; // rax
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r8
  int v56; // ecx
  ULONG v57; // r10d
  unsigned int v58; // edx
  unsigned int v59; // r8d
  int v60; // r9d
  unsigned int v61; // r11d
  unsigned int v62; // edi
  unsigned int v63; // esi
  unsigned int v64; // r14d
  unsigned int v65; // r15d
  unsigned int v66; // r12d
  int v67; // r13d
  __int64 *v68; // rax
  _DWORD *v69; // rax
  int v70; // ebx
  bool v71; // zf
  int v73; // [rsp+40h] [rbp-C0h]
  unsigned int v74; // [rsp+44h] [rbp-BCh]
  unsigned int v75; // [rsp+48h] [rbp-B8h]
  __int64 v76; // [rsp+50h] [rbp-B0h]
  __int64 v77; // [rsp+50h] [rbp-B0h]
  __int64 *v78; // [rsp+58h] [rbp-A8h]
  _QWORD Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v80; // [rsp+80h] [rbp-80h]
  ULONG v81; // [rsp+84h] [rbp-7Ch]
  ULONG v82; // [rsp+88h] [rbp-78h]
  int v83; // [rsp+8Ch] [rbp-74h]
  int v84; // [rsp+90h] [rbp-70h]
  int v85; // [rsp+94h] [rbp-6Ch]
  unsigned int v86; // [rsp+98h] [rbp-68h]
  int v87; // [rsp+9Ch] [rbp-64h]
  int v88; // [rsp+A0h] [rbp-60h]
  int v89; // [rsp+A4h] [rbp-5Ch]
  int v90; // [rsp+A8h] [rbp-58h]
  int v91; // [rsp+ACh] [rbp-54h]
  int v92; // [rsp+B0h] [rbp-50h]
  int v93; // [rsp+B4h] [rbp-4Ch]
  int v94; // [rsp+B8h] [rbp-48h]
  int v95; // [rsp+BCh] [rbp-44h]
  int v96; // [rsp+C0h] [rbp-40h]
  int v97; // [rsp+C4h] [rbp-3Ch]
  int v98; // [rsp+C8h] [rbp-38h]
  int v99; // [rsp+CCh] [rbp-34h]
  int v100; // [rsp+D0h] [rbp-30h] BYREF
  int v101; // [rsp+D4h] [rbp-2Ch] BYREF
  int v102; // [rsp+D8h] [rbp-28h] BYREF
  int v103; // [rsp+DCh] [rbp-24h] BYREF
  int v104; // [rsp+E0h] [rbp-20h] BYREF
  int v105[5]; // [rsp+E4h] [rbp-1Ch] BYREF
  int v106; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD v107[5]; // [rsp+FCh] [rbp-4h] BYREF
  __int64 v108; // [rsp+110h] [rbp+10h]
  unsigned __int64 v109; // [rsp+118h] [rbp+18h]
  int v110; // [rsp+120h] [rbp+20h]
  ULONG v111; // [rsp+124h] [rbp+24h]
  unsigned __int64 v112; // [rsp+128h] [rbp+28h]
  unsigned __int64 v113; // [rsp+130h] [rbp+30h]
  unsigned __int64 v114; // [rsp+138h] [rbp+38h]
  __int64 v115; // [rsp+140h] [rbp+40h]
  __int64 v116; // [rsp+148h] [rbp+48h]
  __int64 v117; // [rsp+150h] [rbp+50h]
  __int64 v118; // [rsp+158h] [rbp+58h]
  __int64 v119; // [rsp+160h] [rbp+60h]
  __int64 v120; // [rsp+168h] [rbp+68h]
  __int64 v121; // [rsp+170h] [rbp+70h]
  __int64 v122; // [rsp+178h] [rbp+78h]
  __int64 v123; // [rsp+180h] [rbp+80h]
  int v124; // [rsp+188h] [rbp+88h]
  __int64 v125; // [rsp+18Ch] [rbp+8Ch]
  int v126; // [rsp+194h] [rbp+94h]
  __int64 v127; // [rsp+198h] [rbp+98h]
  __int64 v128; // [rsp+1A0h] [rbp+A0h]
  __int64 ResidentAvailablePages; // [rsp+1A8h] [rbp+A8h]
  __int64 SharedCommit; // [rsp+1B0h] [rbp+B0h]
  __int128 v131; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v132[80]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int16 ProcessPartitionId; // [rsp+248h] [rbp+148h]

  v3 = IoOtherOperationCount;
  v4 = IoOtherTransferCount;
  v5 = IoReadOperationCount;
  v6 = IoReadTransferCount;
  v7 = IoWriteOperationCount;
  v8 = IoWriteTransferCount;
  v78 = KiProcessorBlock;
  if ( a1 )
  {
    v9 = KiProcessorBlock;
    v10 = a1;
    do
    {
      v11 = *v9++;
      v3 += *(_DWORD *)(v11 + 11620);
      v5 += *(_DWORD *)(v11 + 11612);
      v7 += *(_DWORD *)(v11 + 11616);
      v8.QuadPart += *(_QWORD *)(v11 + 11632);
      v4.QuadPart += *(_QWORD *)(v11 + 11640);
      v6.QuadPart += *(_QWORD *)(v11 + 11624);
      --v10;
    }
    while ( v10 );
  }
  v80 = v5;
  v12 = 0;
  Src[1] = v6.QuadPart;
  v13 = 0;
  Src[2] = v8.QuadPart;
  v14 = 0;
  Src[3] = v4.QuadPart;
  v81 = v7;
  v82 = v3;
  if ( a1 )
  {
    v15 = KiProcessorBlock;
    v16 = a1;
    do
    {
      v17 = *v15++;
      v14 += *(_DWORD *)(v17 + 11580);
      v13 += *(_DWORD *)(v17 + 11576);
      --v16;
    }
    while ( v16 );
  }
  v124 = v14;
  v125 = 0LL;
  v126 = v13;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  v20 = -1;
  if ( AvailablePages <= 0xFFFFFFFF )
    v20 = AvailablePages;
  v83 = v20;
  TotalCommittedPages = MmGetTotalCommittedPages(v19);
  v24 = v23;
  if ( TotalCommittedPages <= v23 )
    v24 = TotalCommittedPages;
  v84 = v24;
  TotalCommitLimit = MmGetTotalCommitLimit(v22);
  v28 = v27;
  if ( TotalCommitLimit <= v27 )
    v28 = TotalCommitLimit;
  v85 = v28;
  PeakCommitment = MmGetPeakCommitment(v26);
  v32 = v31;
  if ( PeakCommitment <= v31 )
    v32 = PeakCommitment;
  v86 = v32;
  if ( v32 < v30 )
    v86 = v30;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0LL;
  v73 = 0;
  v44 = 0LL;
  v74 = 0;
  v75 = 0;
  if ( a1 )
  {
    v45 = KiProcessorBlock;
    v76 = a1;
    v46 = 0;
    do
    {
      v47 = (_DWORD *)*v45++;
      v33 = (unsigned int)(v47[2884] + v33);
      v34 = (unsigned int)(v47[2885] + v34);
      v35 += v47[2886];
      v36 += v47[5978];
      v37 += v47[2887];
      v38 += v47[2888];
      v39 += v47[2889];
      v40 += v47[5979];
      v41 += v47[5980];
      v46 += v47[2890];
      v73 += v47[2891];
      v74 += v47[2892];
      v75 += v47[2893];
      --v76;
    }
    while ( v76 );
    v42 = v73;
    v43 = v74;
    v44 = v75;
  }
  else
  {
    v46 = 0;
  }
  v87 = v33;
  v88 = v34;
  v89 = v35;
  v90 = v36;
  v91 = v37;
  v92 = v38;
  v93 = v39;
  v94 = v40;
  v95 = v41;
  v96 = v46;
  v97 = v42;
  v98 = v43;
  v99 = v44;
  v105[1] = MmGetNumberOfFreeSystemPtes(v43, v44, v33, v34);
  MmGetSystemPageCounts(&v131);
  v105[2] = v131;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2LL, v48, v49);
  if ( (unsigned __int64)WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  v107[2] = (_DWORD)WorkingSetLeafSize;
  v52 = MmGetWorkingSetLeafSize(3LL, v51, 0xFFFFFFFFLL);
  if ( (unsigned __int64)v52 > v53 )
    LODWORD(v52) = v53;
  v107[3] = (_DWORD)v52;
  v105[4] = DWORD2(v131);
  v107[4] = DWORD1(v131);
  v105[3] = HIDWORD(v131);
  MiFreePoolPagesLeft(6);
  v54 = MiMaximumCommitmentAvailable((__int64)&MiSystemPartition);
  if ( v55 > v54 )
    LODWORD(v55) = v54;
  v107[1] = v55;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess(PsIdleProcess, v132);
  ExQueryPoolUsage(&v100, &v101, &v102, &v103, v107, &v104, v105, &v106);
  v56 = 0;
  v57 = CcFastMdlReadWait;
  v58 = 0;
  v108 = 0LL;
  v59 = 0;
  v109 = 0LL;
  v60 = 0;
  v110 = 0;
  v61 = 0;
  v111 = CcFastMdlReadWait;
  v62 = 0;
  v112 = 0LL;
  v63 = 0;
  v113 = 0LL;
  v64 = 0;
  v114 = 0LL;
  v65 = 0;
  v115 = 0LL;
  v66 = 0;
  v116 = 0LL;
  v67 = 0;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  if ( a1 )
  {
    v77 = a1;
    v68 = KiProcessorBlock;
    do
    {
      v69 = (_DWORD *)*v68;
      LODWORD(v108) = v69[2897] + v12;
      HIDWORD(v115) += v69[5958];
      v56 += v69[2898];
      v58 += v69[5968];
      v59 += v69[2899];
      v60 += v69[5952];
      v57 += v69[5953];
      v61 += v69[5970];
      v62 += v69[5954];
      v63 += v69[5955];
      v64 += v69[5956];
      v65 += v69[5971];
      v66 += v69[5972];
      v67 += v69[5957];
      LODWORD(v116) = v69[5959] + v116;
      HIDWORD(v116) += v69[5973];
      LODWORD(v117) = v69[5974] + v117;
      HIDWORD(v117) += v69[2900];
      LODWORD(v118) = v69[2901] + v118;
      HIDWORD(v118) += v69[2902];
      LODWORD(v119) = v69[5969] + v119;
      HIDWORD(v119) += v69[5960];
      LODWORD(v120) = v69[5961] + v120;
      HIDWORD(v120) += v69[5975];
      LODWORD(v121) = v69[5976] + v121;
      HIDWORD(v121) += v69[5977];
      LODWORD(v122) = v69[5963] + v122;
      HIDWORD(v122) += v69[5964];
      LODWORD(v123) = v69[5965] + v123;
      v70 = v69[5966] + HIDWORD(v123);
      v68 = v78 + 1;
      HIDWORD(v123) = v70;
      v71 = v77-- == 1;
      v12 = v108;
      ++v78;
    }
    while ( !v71 );
    HIDWORD(v108) = v56;
    v109 = __PAIR64__(v59, v58);
    v110 = v60;
    v111 = v57;
    v112 = __PAIR64__(v62, v61);
    v113 = __PAIR64__(v64, v63);
    v114 = __PAIR64__(v66, v65);
    LODWORD(v115) = v67;
  }
  v127 = *(_QWORD *)CcSystemPartitionDirtyPageStatistics;
  v128 = *(_QWORD *)CcSystemPartitionDirtyPageThresholds;
  ResidentAvailablePages = MmGetResidentAvailablePages(ProcessPartitionId);
  SharedCommit = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
