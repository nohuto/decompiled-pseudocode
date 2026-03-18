/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x14052C950
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetWorkingSetLeafSize @ 0x1400803D8 (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x140080498 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1400804A8 (MmGetResidentAvailablePages.c)
 *     ExQueryPoolUsage @ 0x1400804D0 (ExQueryPoolUsage.c)
 *     MiMaximumCommitmentAvailable @ 0x14008070C (MiMaximumCommitmentAvailable.c)
 *     MiFreePoolPagesLeft @ 0x14008072C (MiFreePoolPagesLeft.c)
 *     MmGetSystemPageCounts @ 0x14008075C (MmGetSystemPageCounts.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x140080770 (MmGetNumberOfFreeSystemPtes.c)
 *     MmGetPeakCommitment @ 0x140081390 (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x1400813AC (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x1400813C8 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x1400813E4 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x140081400 (MmGetProcessPartitionId.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PsQueryRuntimeProcess @ 0x1404FCEA0 (PsQueryRuntimeProcess.c)
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
  unsigned __int16 v19; // cx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int16 v21; // cx
  unsigned __int64 v22; // r9
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // r9
  unsigned __int64 PeakCommitment; // rax
  unsigned int v27; // r8d
  unsigned __int64 v28; // r9
  int v29; // r8d
  int v30; // r9d
  int v31; // r10d
  int v32; // r11d
  int v33; // edi
  int v34; // esi
  int v35; // r15d
  int v36; // r12d
  int v37; // r13d
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  __int64 *v41; // rdx
  int v42; // r14d
  _DWORD *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  char *WorkingSetLeafSize; // rax
  __int64 v47; // rdx
  char *v48; // rax
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r8
  int v52; // ecx
  ULONG v53; // r10d
  unsigned int v54; // edx
  unsigned int v55; // r8d
  int v56; // r9d
  unsigned int v57; // r11d
  unsigned int v58; // edi
  unsigned int v59; // esi
  unsigned int v60; // r14d
  unsigned int v61; // r15d
  unsigned int v62; // r12d
  int v63; // r13d
  __int64 *v64; // rax
  _DWORD *v65; // rax
  int v66; // ebx
  bool v67; // zf
  int v69; // [rsp+40h] [rbp-C0h]
  int v70; // [rsp+44h] [rbp-BCh]
  int v71; // [rsp+48h] [rbp-B8h]
  __int64 v72; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+50h] [rbp-B0h]
  _QWORD Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v75; // [rsp+80h] [rbp-80h]
  ULONG v76; // [rsp+84h] [rbp-7Ch]
  ULONG v77; // [rsp+88h] [rbp-78h]
  int v78; // [rsp+8Ch] [rbp-74h]
  int v79; // [rsp+90h] [rbp-70h]
  int v80; // [rsp+94h] [rbp-6Ch]
  int v81; // [rsp+98h] [rbp-68h]
  int v82; // [rsp+9Ch] [rbp-64h]
  int v83; // [rsp+A0h] [rbp-60h]
  int v84; // [rsp+A4h] [rbp-5Ch]
  int v85; // [rsp+A8h] [rbp-58h]
  int v86; // [rsp+ACh] [rbp-54h]
  int v87; // [rsp+B0h] [rbp-50h]
  int v88; // [rsp+B4h] [rbp-4Ch]
  int v89; // [rsp+B8h] [rbp-48h]
  int v90; // [rsp+BCh] [rbp-44h]
  int v91; // [rsp+C0h] [rbp-40h]
  int v92; // [rsp+C4h] [rbp-3Ch]
  int v93; // [rsp+C8h] [rbp-38h]
  int v94; // [rsp+CCh] [rbp-34h]
  int v95; // [rsp+D0h] [rbp-30h] BYREF
  int v96; // [rsp+D4h] [rbp-2Ch] BYREF
  int v97; // [rsp+D8h] [rbp-28h] BYREF
  int v98; // [rsp+DCh] [rbp-24h] BYREF
  int v99; // [rsp+E0h] [rbp-20h] BYREF
  int v100[5]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v101; // [rsp+F8h] [rbp-8h] BYREF
  int v102; // [rsp+100h] [rbp+0h]
  int v103; // [rsp+104h] [rbp+4h]
  int v104; // [rsp+108h] [rbp+8h]
  int v105; // [rsp+10Ch] [rbp+Ch]
  __int64 v106; // [rsp+110h] [rbp+10h]
  unsigned __int64 v107; // [rsp+118h] [rbp+18h]
  int v108; // [rsp+120h] [rbp+20h]
  ULONG v109; // [rsp+124h] [rbp+24h]
  unsigned __int64 v110; // [rsp+128h] [rbp+28h]
  unsigned __int64 v111; // [rsp+130h] [rbp+30h]
  unsigned __int64 v112; // [rsp+138h] [rbp+38h]
  __int64 v113; // [rsp+140h] [rbp+40h]
  __int64 v114; // [rsp+148h] [rbp+48h]
  __int64 v115; // [rsp+150h] [rbp+50h]
  __int64 v116; // [rsp+158h] [rbp+58h]
  __int64 v117; // [rsp+160h] [rbp+60h]
  __int64 v118; // [rsp+168h] [rbp+68h]
  __int64 v119; // [rsp+170h] [rbp+70h]
  __int64 v120; // [rsp+178h] [rbp+78h]
  __int64 v121; // [rsp+180h] [rbp+80h]
  int v122; // [rsp+188h] [rbp+88h]
  __int64 v123; // [rsp+18Ch] [rbp+8Ch]
  int v124; // [rsp+194h] [rbp+94h]
  __int64 v125; // [rsp+198h] [rbp+98h]
  __int64 v126; // [rsp+1A0h] [rbp+A0h]
  __int64 ResidentAvailablePages; // [rsp+1A8h] [rbp+A8h]
  __int64 SharedCommit; // [rsp+1B0h] [rbp+B0h]
  __int64 *v129; // [rsp+1C0h] [rbp+C0h]
  __int128 v130; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD v131[18]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int16 ProcessPartitionId; // [rsp+248h] [rbp+148h]

  v3 = IoOtherOperationCount;
  v4 = IoOtherTransferCount;
  v5 = IoReadOperationCount;
  v6 = IoReadTransferCount;
  v7 = IoWriteOperationCount;
  v8 = IoWriteTransferCount;
  v129 = KiProcessorBlock;
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
  v75 = v5;
  v12 = 0;
  Src[1] = v6.QuadPart;
  v13 = 0;
  Src[2] = v8.QuadPart;
  v14 = 0;
  Src[3] = v4.QuadPart;
  v76 = v7;
  v77 = v3;
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
  v122 = v14;
  v123 = 0LL;
  v124 = v13;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  if ( AvailablePages > 0xFFFFFFFF )
    v78 = -1;
  else
    v78 = AvailablePages;
  TotalCommittedPages = MmGetTotalCommittedPages(v19);
  if ( TotalCommittedPages > v22 )
    v79 = v22;
  else
    v79 = TotalCommittedPages;
  TotalCommitLimit = MmGetTotalCommitLimit(v21);
  if ( TotalCommitLimit > v25 )
    v80 = v25;
  else
    v80 = TotalCommitLimit;
  PeakCommitment = MmGetPeakCommitment(v24);
  if ( PeakCommitment > v28 )
    LODWORD(PeakCommitment) = v28;
  v81 = PeakCommitment;
  if ( (unsigned int)PeakCommitment < v27 )
    v81 = v27;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v69 = 0;
  v40 = 0;
  v70 = 0;
  v71 = 0;
  if ( a1 )
  {
    v41 = KiProcessorBlock;
    v72 = a1;
    v42 = 0;
    do
    {
      v43 = (_DWORD *)*v41++;
      v29 += v43[2884];
      v30 += v43[2885];
      v31 += v43[2886];
      v32 += v43[5946];
      v33 += v43[2887];
      v34 += v43[2888];
      v35 += v43[2889];
      v36 += v43[5947];
      v37 += v43[5948];
      v42 += v43[2890];
      v69 += v43[2891];
      v70 += v43[2892];
      v71 += v43[2893];
      --v72;
    }
    while ( v72 );
    v38 = v69;
    v39 = v70;
    v40 = v71;
  }
  else
  {
    v42 = 0;
  }
  v82 = v29;
  v83 = v30;
  v84 = v31;
  v85 = v32;
  v86 = v33;
  v87 = v34;
  v88 = v35;
  v89 = v36;
  v90 = v37;
  v91 = v42;
  v92 = v38;
  v93 = v39;
  v94 = v40;
  v100[1] = MmGetNumberOfFreeSystemPtes();
  MmGetSystemPageCounts(&v130);
  v100[2] = v130;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2LL, v44, v45);
  if ( (unsigned __int64)WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  v103 = (int)WorkingSetLeafSize;
  v48 = MmGetWorkingSetLeafSize(3LL, v47, 0xFFFFFFFFLL);
  if ( (unsigned __int64)v48 > v49 )
    LODWORD(v48) = v49;
  v104 = (int)v48;
  v100[4] = DWORD2(v130);
  v105 = DWORD1(v130);
  v100[3] = HIDWORD(v130);
  MiFreePoolPagesLeft(6);
  v50 = MiMaximumCommitmentAvailable((__int64)&MiSystemPartition);
  if ( v51 > v50 )
    LODWORD(v51) = v50;
  v102 = v51;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess((__int64)PsIdleProcess, v131);
  ExQueryPoolUsage(&v95, &v96, &v97, &v98, (_DWORD *)&v101 + 1, &v99, v100, &v101);
  v52 = 0;
  v53 = CcFastMdlReadWait;
  v54 = 0;
  v106 = 0LL;
  v55 = 0;
  v107 = 0LL;
  v56 = 0;
  v108 = 0;
  v57 = 0;
  v109 = CcFastMdlReadWait;
  v58 = 0;
  v110 = 0LL;
  v59 = 0;
  v111 = 0LL;
  v60 = 0;
  v112 = 0LL;
  v61 = 0;
  v113 = 0LL;
  v62 = 0;
  v114 = 0LL;
  v63 = 0;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  if ( a1 )
  {
    v73 = a1;
    v64 = KiProcessorBlock;
    do
    {
      v65 = (_DWORD *)*v64;
      LODWORD(v106) = v65[2897] + v12;
      HIDWORD(v113) += v65[5926];
      v52 += v65[2898];
      v54 += v65[5936];
      v55 += v65[2899];
      v56 += v65[5920];
      v53 += v65[5921];
      v57 += v65[5938];
      v58 += v65[5922];
      v59 += v65[5923];
      v60 += v65[5924];
      v61 += v65[5939];
      v62 += v65[5940];
      v63 += v65[5925];
      LODWORD(v114) = v65[5927] + v114;
      HIDWORD(v114) += v65[5941];
      LODWORD(v115) = v65[5942] + v115;
      HIDWORD(v115) += v65[2900];
      LODWORD(v116) = v65[2901] + v116;
      HIDWORD(v116) += v65[2902];
      LODWORD(v117) = v65[5937] + v117;
      HIDWORD(v117) += v65[5928];
      LODWORD(v118) = v65[5929] + v118;
      HIDWORD(v118) += v65[5943];
      LODWORD(v119) = v65[5944] + v119;
      HIDWORD(v119) += v65[5945];
      LODWORD(v120) = v65[5931] + v120;
      HIDWORD(v120) += v65[5932];
      LODWORD(v121) = v65[5933] + v121;
      v66 = v65[5934] + HIDWORD(v121);
      v64 = v129 + 1;
      HIDWORD(v121) = v66;
      v67 = v73-- == 1;
      v12 = v106;
      ++v129;
    }
    while ( !v67 );
    HIDWORD(v106) = v52;
    v107 = __PAIR64__(v55, v54);
    v108 = v56;
    v109 = v53;
    v110 = __PAIR64__(v58, v57);
    v111 = __PAIR64__(v60, v59);
    v112 = __PAIR64__(v62, v61);
    LODWORD(v113) = v63;
  }
  v125 = *(_QWORD *)CcSystemPartitionDirtyPageStatistics;
  v126 = *(_QWORD *)CcSystemPartitionDirtyPageThresholds;
  ResidentAvailablePages = MmGetResidentAvailablePages(ProcessPartitionId);
  SharedCommit = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
