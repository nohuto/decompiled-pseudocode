/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x140540C50
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetWorkingSetLeafSize @ 0x1400F065C (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x1400F069C (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1400F06AC (MmGetResidentAvailablePages.c)
 *     ExQueryPoolUsage @ 0x1400F06D0 (ExQueryPoolUsage.c)
 *     MmGetSystemPageCounts @ 0x1400F08F0 (MmGetSystemPageCounts.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x1400F0904 (MmGetNumberOfFreeSystemPtes.c)
 *     MmGetPeakCommitment @ 0x1400F095C (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x1400F0978 (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x1400F0994 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x1400F09B0 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x1400F09CC (MmGetProcessPartitionId.c)
 *     MiMaximumCommitmentAvailable @ 0x1400F0B60 (MiMaximumCommitmentAvailable.c)
 *     MiFreePoolPagesLeft @ 0x1400F0B80 (MiFreePoolPagesLeft.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PsQueryRuntimeProcess @ 0x14054125C (PsQueryRuntimeProcess.c)
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
  int v33; // r8d
  int v34; // r9d
  int v35; // r10d
  int v36; // r11d
  int v37; // edi
  int v38; // esi
  int v39; // r15d
  int v40; // r12d
  int v41; // r13d
  int v42; // eax
  int v43; // ecx
  int v44; // edx
  __int64 *v45; // rdx
  int v46; // r14d
  _DWORD *v47; // rcx
  char *WorkingSetLeafSize; // rax
  char *v49; // rax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r8
  int v53; // ecx
  ULONG v54; // r10d
  unsigned int v55; // edx
  unsigned int v56; // r8d
  int v57; // r9d
  unsigned int v58; // r11d
  unsigned int v59; // edi
  unsigned int v60; // esi
  unsigned int v61; // r14d
  unsigned int v62; // r15d
  unsigned int v63; // r12d
  int v64; // r13d
  __int64 *v65; // rax
  _DWORD *v66; // rax
  int v67; // ebx
  bool v68; // zf
  int v70; // [rsp+40h] [rbp-C0h]
  int v71; // [rsp+44h] [rbp-BCh]
  int v72; // [rsp+48h] [rbp-B8h]
  __int64 v73; // [rsp+50h] [rbp-B0h]
  __int64 v74; // [rsp+50h] [rbp-B0h]
  __int64 *v75; // [rsp+58h] [rbp-A8h]
  _QWORD Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v77; // [rsp+80h] [rbp-80h]
  ULONG v78; // [rsp+84h] [rbp-7Ch]
  ULONG v79; // [rsp+88h] [rbp-78h]
  int v80; // [rsp+8Ch] [rbp-74h]
  int v81; // [rsp+90h] [rbp-70h]
  int v82; // [rsp+94h] [rbp-6Ch]
  unsigned int v83; // [rsp+98h] [rbp-68h]
  int v84; // [rsp+9Ch] [rbp-64h]
  int v85; // [rsp+A0h] [rbp-60h]
  int v86; // [rsp+A4h] [rbp-5Ch]
  int v87; // [rsp+A8h] [rbp-58h]
  int v88; // [rsp+ACh] [rbp-54h]
  int v89; // [rsp+B0h] [rbp-50h]
  int v90; // [rsp+B4h] [rbp-4Ch]
  int v91; // [rsp+B8h] [rbp-48h]
  int v92; // [rsp+BCh] [rbp-44h]
  int v93; // [rsp+C0h] [rbp-40h]
  int v94; // [rsp+C4h] [rbp-3Ch]
  int v95; // [rsp+C8h] [rbp-38h]
  int v96; // [rsp+CCh] [rbp-34h]
  int v97; // [rsp+D0h] [rbp-30h] BYREF
  int v98; // [rsp+D4h] [rbp-2Ch] BYREF
  int v99; // [rsp+D8h] [rbp-28h] BYREF
  int v100; // [rsp+DCh] [rbp-24h] BYREF
  int v101; // [rsp+E0h] [rbp-20h] BYREF
  int v102[5]; // [rsp+E4h] [rbp-1Ch] BYREF
  int v103; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD v104[5]; // [rsp+FCh] [rbp-4h] BYREF
  __int64 v105; // [rsp+110h] [rbp+10h]
  unsigned __int64 v106; // [rsp+118h] [rbp+18h]
  int v107; // [rsp+120h] [rbp+20h]
  ULONG v108; // [rsp+124h] [rbp+24h]
  unsigned __int64 v109; // [rsp+128h] [rbp+28h]
  unsigned __int64 v110; // [rsp+130h] [rbp+30h]
  unsigned __int64 v111; // [rsp+138h] [rbp+38h]
  __int64 v112; // [rsp+140h] [rbp+40h]
  __int64 v113; // [rsp+148h] [rbp+48h]
  __int64 v114; // [rsp+150h] [rbp+50h]
  __int64 v115; // [rsp+158h] [rbp+58h]
  __int64 v116; // [rsp+160h] [rbp+60h]
  __int64 v117; // [rsp+168h] [rbp+68h]
  __int64 v118; // [rsp+170h] [rbp+70h]
  __int64 v119; // [rsp+178h] [rbp+78h]
  __int64 v120; // [rsp+180h] [rbp+80h]
  int v121; // [rsp+188h] [rbp+88h]
  __int64 v122; // [rsp+18Ch] [rbp+8Ch]
  int v123; // [rsp+194h] [rbp+94h]
  __int64 v124; // [rsp+198h] [rbp+98h]
  __int64 v125; // [rsp+1A0h] [rbp+A0h]
  __int64 ResidentAvailablePages; // [rsp+1A8h] [rbp+A8h]
  __int64 SharedCommit; // [rsp+1B0h] [rbp+B0h]
  __int128 v128; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v129[80]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int16 ProcessPartitionId; // [rsp+248h] [rbp+148h]

  v3 = IoOtherOperationCount;
  v4 = IoOtherTransferCount;
  v5 = IoReadOperationCount;
  v6 = IoReadTransferCount;
  v7 = IoWriteOperationCount;
  v8 = IoWriteTransferCount;
  v75 = KiProcessorBlock;
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
  v77 = v5;
  v12 = 0;
  Src[1] = v6.QuadPart;
  v13 = 0;
  Src[2] = v8.QuadPart;
  v14 = 0;
  Src[3] = v4.QuadPart;
  v78 = v7;
  v79 = v3;
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
  v121 = v14;
  v122 = 0LL;
  v123 = v13;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  v20 = -1;
  if ( AvailablePages <= 0xFFFFFFFF )
    v20 = AvailablePages;
  v80 = v20;
  TotalCommittedPages = MmGetTotalCommittedPages(v19);
  v24 = v23;
  if ( TotalCommittedPages <= v23 )
    v24 = TotalCommittedPages;
  v81 = v24;
  TotalCommitLimit = MmGetTotalCommitLimit(v22);
  v28 = v27;
  if ( TotalCommitLimit <= v27 )
    v28 = TotalCommitLimit;
  v82 = v28;
  PeakCommitment = MmGetPeakCommitment(v26);
  v32 = v31;
  if ( PeakCommitment <= v31 )
    v32 = PeakCommitment;
  v83 = v32;
  if ( v32 < v30 )
    v83 = v30;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v70 = 0;
  v44 = 0;
  v71 = 0;
  v72 = 0;
  if ( a1 )
  {
    v45 = KiProcessorBlock;
    v73 = a1;
    v46 = 0;
    do
    {
      v47 = (_DWORD *)*v45++;
      v33 += v47[2884];
      v34 += v47[2885];
      v35 += v47[2886];
      v36 += v47[5946];
      v37 += v47[2887];
      v38 += v47[2888];
      v39 += v47[2889];
      v40 += v47[5947];
      v41 += v47[5948];
      v46 += v47[2890];
      v70 += v47[2891];
      v71 += v47[2892];
      v72 += v47[2893];
      --v73;
    }
    while ( v73 );
    v42 = v70;
    v43 = v71;
    v44 = v72;
  }
  else
  {
    v46 = 0;
  }
  v84 = v33;
  v85 = v34;
  v86 = v35;
  v87 = v36;
  v88 = v37;
  v89 = v38;
  v90 = v39;
  v91 = v40;
  v92 = v41;
  v93 = v46;
  v94 = v42;
  v95 = v43;
  v96 = v44;
  v102[1] = MmGetNumberOfFreeSystemPtes();
  MmGetSystemPageCounts(&v128);
  v102[2] = v128;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2);
  if ( (unsigned __int64)WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  v104[2] = (_DWORD)WorkingSetLeafSize;
  v49 = MmGetWorkingSetLeafSize(3);
  if ( (unsigned __int64)v49 > v50 )
    LODWORD(v49) = v50;
  v104[3] = (_DWORD)v49;
  v102[4] = DWORD2(v128);
  v104[4] = DWORD1(v128);
  v102[3] = HIDWORD(v128);
  MiFreePoolPagesLeft(6);
  v51 = MiMaximumCommitmentAvailable((__int64)&MiSystemPartition);
  if ( v52 > v51 )
    LODWORD(v52) = v51;
  v104[1] = v52;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess(PsIdleProcess, v129);
  ExQueryPoolUsage(&v97, &v98, &v99, &v100, v104, &v101, v102, &v103);
  v53 = 0;
  v54 = CcFastMdlReadWait;
  v55 = 0;
  v105 = 0LL;
  v56 = 0;
  v106 = 0LL;
  v57 = 0;
  v107 = 0;
  v58 = 0;
  v108 = CcFastMdlReadWait;
  v59 = 0;
  v109 = 0LL;
  v60 = 0;
  v110 = 0LL;
  v61 = 0;
  v111 = 0LL;
  v62 = 0;
  v112 = 0LL;
  v63 = 0;
  v113 = 0LL;
  v64 = 0;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  if ( a1 )
  {
    v74 = a1;
    v65 = KiProcessorBlock;
    do
    {
      v66 = (_DWORD *)*v65;
      LODWORD(v105) = v66[2897] + v12;
      HIDWORD(v112) += v66[5926];
      v53 += v66[2898];
      v55 += v66[5936];
      v56 += v66[2899];
      v57 += v66[5920];
      v54 += v66[5921];
      v58 += v66[5938];
      v59 += v66[5922];
      v60 += v66[5923];
      v61 += v66[5924];
      v62 += v66[5939];
      v63 += v66[5940];
      v64 += v66[5925];
      LODWORD(v113) = v66[5927] + v113;
      HIDWORD(v113) += v66[5941];
      LODWORD(v114) = v66[5942] + v114;
      HIDWORD(v114) += v66[2900];
      LODWORD(v115) = v66[2901] + v115;
      HIDWORD(v115) += v66[2902];
      LODWORD(v116) = v66[5937] + v116;
      HIDWORD(v116) += v66[5928];
      LODWORD(v117) = v66[5929] + v117;
      HIDWORD(v117) += v66[5943];
      LODWORD(v118) = v66[5944] + v118;
      HIDWORD(v118) += v66[5945];
      LODWORD(v119) = v66[5931] + v119;
      HIDWORD(v119) += v66[5932];
      LODWORD(v120) = v66[5933] + v120;
      v67 = v66[5934] + HIDWORD(v120);
      v65 = v75 + 1;
      HIDWORD(v120) = v67;
      v68 = v74-- == 1;
      v12 = v105;
      ++v75;
    }
    while ( !v68 );
    HIDWORD(v105) = v53;
    v106 = __PAIR64__(v56, v55);
    v107 = v57;
    v108 = v54;
    v109 = __PAIR64__(v59, v58);
    v110 = __PAIR64__(v61, v60);
    v111 = __PAIR64__(v63, v62);
    LODWORD(v112) = v64;
  }
  v124 = *(_QWORD *)CcSystemPartitionDirtyPageStatistics;
  v125 = *(_QWORD *)CcSystemPartitionDirtyPageThresholds;
  ResidentAvailablePages = MmGetResidentAvailablePages(ProcessPartitionId);
  SharedCommit = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
