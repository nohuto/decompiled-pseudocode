/*
 * XREFs of ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007DE70
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C007D944 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007EBA8 (-ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007F0F4 (-ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadVPRConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007F804 (-ReadVPRConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007F9AC (-ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007FD18 (-ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPowerConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008000C (-ReadPowerConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0080100 (-ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0080544 (-ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008075C (-ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0080D30 (-ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ @ 0x1C0080E14 (-ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ.c)
 */

void VIDMM_GLOBAL::ReadConfiguration(void)
{
  int v0; // ebx
  unsigned __int64 v1; // rsi
  __int64 PhysicalMemoryRanges; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int *v10; // rsi
  ULONG v11; // r14d
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v25; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-C4h] BYREF
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  int v29; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+54h] [rbp-B4h] BYREF
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  int v33; // [rsp+60h] [rbp-A8h] BYREF
  int v34; // [rsp+64h] [rbp-A4h] BYREF
  int v35; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v37; // [rsp+70h] [rbp-98h] BYREF
  int v38; // [rsp+74h] [rbp-94h] BYREF
  int v39; // [rsp+78h] [rbp-90h] BYREF
  int v40; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v41; // [rsp+80h] [rbp-88h] BYREF
  int v42; // [rsp+84h] [rbp-84h] BYREF
  int v43; // [rsp+88h] [rbp-80h] BYREF
  int v44; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v45; // [rsp+90h] [rbp-78h] BYREF
  int v46; // [rsp+94h] [rbp-74h] BYREF
  int v47; // [rsp+98h] [rbp-70h] BYREF
  int v48; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v49; // [rsp+A0h] [rbp-68h] BYREF
  int v50; // [rsp+A4h] [rbp-64h] BYREF
  int v51; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v52; // [rsp+ACh] [rbp-5Ch] BYREF
  int v53; // [rsp+B0h] [rbp-58h] BYREF
  int v54; // [rsp+B4h] [rbp-54h] BYREF
  int v55; // [rsp+B8h] [rbp-50h] BYREF
  int v56; // [rsp+BCh] [rbp-4Ch] BYREF
  int v57; // [rsp+C0h] [rbp-48h] BYREF
  int v58; // [rsp+C4h] [rbp-44h] BYREF
  int v59; // [rsp+C8h] [rbp-40h] BYREF
  int v60; // [rsp+CCh] [rbp-3Ch] BYREF
  int v61; // [rsp+D0h] [rbp-38h] BYREF
  int v62; // [rsp+D4h] [rbp-34h] BYREF
  int v63; // [rsp+D8h] [rbp-30h] BYREF
  int v64; // [rsp+DCh] [rbp-2Ch] BYREF
  int v65; // [rsp+E0h] [rbp-28h] BYREF
  int v66; // [rsp+E4h] [rbp-24h] BYREF
  int v67; // [rsp+E8h] [rbp-20h] BYREF
  int v68; // [rsp+ECh] [rbp-1Ch] BYREF
  int v69; // [rsp+F0h] [rbp-18h] BYREF
  int v70; // [rsp+F4h] [rbp-14h] BYREF
  int v71; // [rsp+F8h] [rbp-10h] BYREF
  int v72; // [rsp+FCh] [rbp-Ch] BYREF
  int v73; // [rsp+100h] [rbp-8h] BYREF
  int v74; // [rsp+104h] [rbp-4h] BYREF
  int v75; // [rsp+108h] [rbp+0h] BYREF
  int v76; // [rsp+10Ch] [rbp+4h] BYREF
  int v77; // [rsp+110h] [rbp+8h] BYREF
  int v78; // [rsp+114h] [rbp+Ch] BYREF
  int v79; // [rsp+118h] [rbp+10h] BYREF
  int v80; // [rsp+11Ch] [rbp+14h] BYREF
  int v81; // [rsp+120h] [rbp+18h] BYREF
  int v82; // [rsp+124h] [rbp+1Ch] BYREF
  int v83; // [rsp+128h] [rbp+20h] BYREF
  int v84; // [rsp+12Ch] [rbp+24h] BYREF
  int v85; // [rsp+130h] [rbp+28h] BYREF
  int v86; // [rsp+134h] [rbp+2Ch] BYREF
  struct _UNICODE_STRING Destination; // [rsp+138h] [rbp+30h] BYREF
  struct _UNICODE_STRING String; // [rsp+148h] [rbp+40h] BYREF
  __int128 v89; // [rsp+158h] [rbp+50h]
  __int128 v90; // [rsp+168h] [rbp+60h]
  __int128 v91; // [rsp+178h] [rbp+70h]
  __int64 v92; // [rsp+188h] [rbp+80h]
  struct _UNICODE_STRING DestinationString; // [rsp+190h] [rbp+88h] BYREF
  _OWORD v94[112]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v95; // [rsp+8A8h] [rbp+7A0h] BYREF
  _BYTE v96[64]; // [rsp+8B8h] [rbp+7B0h] BYREF

  v0 = 0;
  v1 = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRangesEx(0LL);
  v4 = (_QWORD *)PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    v5 = *(_QWORD *)(PhysicalMemoryRanges + 8);
    v6 = 0;
    while ( v5 )
    {
      v1 += v5;
      v5 = v4[2 * (unsigned int)++v6 + 1];
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    _InterlockedAdd(&dword_1C004066C, 1u);
    v20 = WdLogNewEntry5_WdLowResource(0LL, v3);
    *(_QWORD *)(v20 + 24) = 44LL;
    WdLogEvent5_WdLowResource(v20);
    v1 = 0x20000000LL;
  }
  qword_1C0040170 = v1;
  qword_1C0040168 = v1;
  v27 = 25;
  v23 = 25;
  v57 = 0;
  v28 = 40;
  v24 = 40;
  v25 = 0;
  v62 = 0;
  v58 = 10;
  v59 = 15;
  v40 = 15;
  v39 = 10;
  v60 = 5;
  v41 = 5;
  v61 = 300;
  v42 = 300;
  v7 = 1024;
  if ( v1 <= 0x20000000 )
    v7 = 256;
  v29 = 0;
  v63 = v7;
  v30 = v7;
  v8 = 0x2000000;
  if ( v1 <= 0x20000000 )
    v8 = 0x800000;
  v64 = 4;
  v65 = v8;
  v32 = v8;
  v9 = 0x1000000;
  if ( v1 <= 0x20000000 )
    v9 = 0x400000;
  v31 = 4;
  v66 = v9;
  v33 = v9;
  v67 = 10;
  v34 = 10;
  v69 = 1;
  v36 = 1;
  v70 = 1;
  v38 = 1;
  v68 = g_IsInternalRelease != 0 ? 0x40 : 0;
  v35 = v68;
  v72 = 0x100000;
  v43 = 0x100000;
  v74 = 60;
  v45 = 60;
  v75 = 60;
  v46 = 60;
  v77 = 8;
  v48 = 8;
  v71 = 1;
  v37 = 1;
  v73 = 0x800000;
  v44 = 0x800000;
  v76 = 1;
  v47 = 1;
  v78 = 2;
  v49 = 2;
  v79 = 0;
  v50 = 0;
  v80 = 0;
  v51 = 0;
  v81 = 200;
  v52 = 200;
  v83 = 4096;
  v54 = 4096;
  v84 = 6;
  v55 = 6;
  v85 = 20;
  v56 = 20;
  *(_QWORD *)&v94[1] = L"PinnedMemoryLimit";
  *((_QWORD *)&v94[1] + 1) = &v23;
  *((_QWORD *)&v94[2] + 1) = &v27;
  *((_QWORD *)&v94[4] + 1) = L"PinnedApertureMemoryLimit";
  *(_QWORD *)&v94[5] = &v24;
  *(_QWORD *)&v94[6] = &v28;
  *(_QWORD *)&v94[8] = L"PagesHistory";
  *((_QWORD *)&v94[8] + 1) = &v25;
  *((_QWORD *)&v94[9] + 1) = &v57;
  *((_QWORD *)&v94[11] + 1) = L"MemTransferThreshold";
  *(_QWORD *)&v94[12] = &v39;
  *(_QWORD *)&v94[13] = &v58;
  *(_QWORD *)&v94[15] = L"ExcessiveMemTransferFlipThreshold";
  *((_QWORD *)&v94[15] + 1) = &v40;
  *((_QWORD *)&v94[16] + 1) = &v59;
  *((_QWORD *)&v94[18] + 1) = L"ExcessiveMemTransferPenalty";
  *(_QWORD *)&v94[19] = &v41;
  *(_QWORD *)&v94[20] = &v60;
  *(_QWORD *)&v94[22] = L"EventThrottleThreshold";
  *((_QWORD *)&v94[22] + 1) = &v42;
  v82 = 1;
  v53 = 1;
  *(_QWORD *)&v94[0] = 0LL;
  DWORD2(v94[0]) = 288;
  LODWORD(v94[2]) = 67108868;
  LODWORD(v94[3]) = 4;
  *((_QWORD *)&v94[3] + 1) = 0LL;
  LODWORD(v94[4]) = 288;
  DWORD2(v94[5]) = 67108868;
  DWORD2(v94[6]) = 4;
  *(_QWORD *)&v94[7] = 0LL;
  DWORD2(v94[7]) = 288;
  LODWORD(v94[9]) = 67108868;
  LODWORD(v94[10]) = 4;
  *((_QWORD *)&v94[10] + 1) = 0LL;
  LODWORD(v94[11]) = 288;
  DWORD2(v94[12]) = 67108868;
  DWORD2(v94[13]) = 4;
  *(_QWORD *)&v94[14] = 0LL;
  DWORD2(v94[14]) = 288;
  LODWORD(v94[16]) = 67108868;
  LODWORD(v94[17]) = 4;
  *((_QWORD *)&v94[17] + 1) = 0LL;
  LODWORD(v94[18]) = 288;
  DWORD2(v94[19]) = 67108868;
  DWORD2(v94[20]) = 4;
  *(_QWORD *)&v94[21] = 0LL;
  DWORD2(v94[21]) = 288;
  LODWORD(v94[23]) = 67108868;
  *((_QWORD *)&v94[23] + 1) = &v61;
  *((_QWORD *)&v94[25] + 1) = L"DisablePrefetching";
  *(_QWORD *)&v94[26] = &v29;
  *(_QWORD *)&v94[27] = &v62;
  *(_QWORD *)&v94[29] = L"NbDmaBufferLimitPerDevice";
  *((_QWORD *)&v94[29] + 1) = &v30;
  *((_QWORD *)&v94[30] + 1) = &v63;
  *((_QWORD *)&v94[32] + 1) = L"NbCddDmaBufferLimitPerDevice";
  *(_QWORD *)&v94[33] = &v31;
  *(_QWORD *)&v94[34] = &v64;
  *(_QWORD *)&v94[36] = L"DmaBufferBytesLimitAllDevices";
  *((_QWORD *)&v94[36] + 1) = &v32;
  *((_QWORD *)&v94[37] + 1) = &v65;
  *((_QWORD *)&v94[39] + 1) = L"DmaBufferListBytesLimitAllDevices";
  *(_QWORD *)&v94[40] = &v33;
  *(_QWORD *)&v94[41] = &v66;
  *(_QWORD *)&v94[43] = L"NbDmaBufferLimitCompareWatermark";
  *((_QWORD *)&v94[43] + 1) = &v34;
  *((_QWORD *)&v94[44] + 1) = &v67;
  *((_QWORD *)&v94[46] + 1) = L"NbPagingHistoryRecords";
  *(_QWORD *)&v94[47] = &v35;
  *(_QWORD *)&v94[48] = &v68;
  *(_QWORD *)&v94[50] = L"PinDWMAllocationBackingStore";
  *((_QWORD *)&v94[50] + 1) = &v36;
  LODWORD(v94[24]) = 4;
  *((_QWORD *)&v94[24] + 1) = 0LL;
  LODWORD(v94[25]) = 288;
  DWORD2(v94[26]) = 67108868;
  DWORD2(v94[27]) = 4;
  *(_QWORD *)&v94[28] = 0LL;
  DWORD2(v94[28]) = 288;
  LODWORD(v94[30]) = 67108868;
  LODWORD(v94[31]) = 4;
  *((_QWORD *)&v94[31] + 1) = 0LL;
  LODWORD(v94[32]) = 288;
  DWORD2(v94[33]) = 67108868;
  DWORD2(v94[34]) = 4;
  *(_QWORD *)&v94[35] = 0LL;
  DWORD2(v94[35]) = 288;
  LODWORD(v94[37]) = 67108868;
  LODWORD(v94[38]) = 4;
  *((_QWORD *)&v94[38] + 1) = 0LL;
  LODWORD(v94[39]) = 288;
  DWORD2(v94[40]) = 67108868;
  DWORD2(v94[41]) = 4;
  *(_QWORD *)&v94[42] = 0LL;
  DWORD2(v94[42]) = 288;
  LODWORD(v94[44]) = 67108868;
  LODWORD(v94[45]) = 4;
  *((_QWORD *)&v94[45] + 1) = 0LL;
  LODWORD(v94[46]) = 288;
  DWORD2(v94[47]) = 67108868;
  DWORD2(v94[48]) = 4;
  *(_QWORD *)&v94[49] = 0LL;
  DWORD2(v94[49]) = 288;
  LODWORD(v94[51]) = 67108868;
  LODWORD(v94[52]) = 4;
  *((_QWORD *)&v94[51] + 1) = &v69;
  *((_QWORD *)&v94[53] + 1) = L"RemovePagesFromWorkingSetOnPagingForDwm";
  *(_QWORD *)&v94[54] = &v38;
  *(_QWORD *)&v94[55] = &v70;
  *(_QWORD *)&v94[57] = L"UseUnreset";
  *((_QWORD *)&v94[57] + 1) = &v37;
  *((_QWORD *)&v94[58] + 1) = &v71;
  *((_QWORD *)&v94[60] + 1) = L"PrivateHeapPackingThreshold";
  *(_QWORD *)&v94[61] = &v43;
  *(_QWORD *)&v94[62] = &v72;
  *(_QWORD *)&v94[64] = L"PrivateHeapPackingBlockSize";
  *((_QWORD *)&v94[64] + 1) = &v44;
  *((_QWORD *)&v94[65] + 1) = &v73;
  *((_QWORD *)&v94[67] + 1) = L"EvictTemporaryPeriod";
  *(_QWORD *)&v94[68] = &v45;
  *(_QWORD *)&v94[69] = &v74;
  *(_QWORD *)&v94[71] = L"EvictUnusedPeriod";
  *((_QWORD *)&v94[71] + 1) = &v46;
  *((_QWORD *)&v94[72] + 1) = &v75;
  *((_QWORD *)&v94[74] + 1) = L"ProcessPendingOfferPeriod";
  *(_QWORD *)&v94[75] = &v47;
  *(_QWORD *)&v94[76] = &v76;
  *(_QWORD *)&v94[78] = L"ProcessSysmemOfferPeriod";
  *((_QWORD *)&v94[78] + 1) = &v48;
  *((_QWORD *)&v94[52] + 1) = 0LL;
  LODWORD(v94[53]) = 288;
  DWORD2(v94[54]) = 67108868;
  DWORD2(v94[55]) = 4;
  *(_QWORD *)&v94[56] = 0LL;
  DWORD2(v94[56]) = 288;
  LODWORD(v94[58]) = 67108868;
  LODWORD(v94[59]) = 4;
  *((_QWORD *)&v94[59] + 1) = 0LL;
  LODWORD(v94[60]) = 288;
  DWORD2(v94[61]) = 67108868;
  DWORD2(v94[62]) = 4;
  *(_QWORD *)&v94[63] = 0LL;
  DWORD2(v94[63]) = 288;
  LODWORD(v94[65]) = 67108868;
  LODWORD(v94[66]) = 4;
  *((_QWORD *)&v94[66] + 1) = 0LL;
  LODWORD(v94[67]) = 288;
  DWORD2(v94[68]) = 67108868;
  DWORD2(v94[69]) = 4;
  *(_QWORD *)&v94[70] = 0LL;
  DWORD2(v94[70]) = 288;
  LODWORD(v94[72]) = 67108868;
  LODWORD(v94[73]) = 4;
  *((_QWORD *)&v94[73] + 1) = 0LL;
  LODWORD(v94[74]) = 288;
  DWORD2(v94[75]) = 67108868;
  DWORD2(v94[76]) = 4;
  *(_QWORD *)&v94[77] = 0LL;
  DWORD2(v94[77]) = 288;
  LODWORD(v94[79]) = 67108868;
  *((_QWORD *)&v94[79] + 1) = &v77;
  *((_QWORD *)&v94[81] + 1) = L"SegmentBalancingPolicy";
  *(_QWORD *)&v94[82] = &v49;
  *(_QWORD *)&v94[83] = &v78;
  *(_QWORD *)&v94[85] = L"BugcheckOnApertureCorruption";
  *((_QWORD *)&v94[85] + 1) = &v50;
  *((_QWORD *)&v94[86] + 1) = &v79;
  *((_QWORD *)&v94[88] + 1) = L"QuickApertureCorruptionCheck";
  *(_QWORD *)&v94[89] = &v51;
  *(_QWORD *)&v94[90] = &v80;
  *(_QWORD *)&v94[92] = L"DirectFlipMemoryRequirement";
  *((_QWORD *)&v94[92] + 1) = &v52;
  *((_QWORD *)&v94[93] + 1) = &v81;
  *((_QWORD *)&v94[95] + 1) = L"CommitProcessHeapOnDemand";
  *(_QWORD *)&v94[96] = &v53;
  *(_QWORD *)&v94[97] = &v82;
  *(_QWORD *)&v94[99] = L"SegmentCleanupSizeThreshold";
  *((_QWORD *)&v94[99] + 1) = &v54;
  *((_QWORD *)&v94[100] + 1) = &v83;
  *((_QWORD *)&v94[102] + 1) = L"SegmentCleanupCountThreshold";
  *(_QWORD *)&v94[103] = &v55;
  *(_QWORD *)&v94[104] = &v84;
  *(_QWORD *)&v94[106] = L"SegmentCleanupTime";
  *((_QWORD *)&v94[106] + 1) = &v56;
  *((_QWORD *)&v94[107] + 1) = &v85;
  LODWORD(v94[80]) = 4;
  *((_QWORD *)&v94[80] + 1) = 0LL;
  LODWORD(v94[81]) = 288;
  DWORD2(v94[82]) = 67108868;
  DWORD2(v94[83]) = 4;
  *(_QWORD *)&v94[84] = 0LL;
  DWORD2(v94[84]) = 288;
  LODWORD(v94[86]) = 67108868;
  LODWORD(v94[87]) = 4;
  *((_QWORD *)&v94[87] + 1) = 0LL;
  LODWORD(v94[88]) = 288;
  DWORD2(v94[89]) = 67108868;
  DWORD2(v94[90]) = 4;
  *(_QWORD *)&v94[91] = 0LL;
  DWORD2(v94[91]) = 288;
  LODWORD(v94[93]) = 67108868;
  LODWORD(v94[94]) = 4;
  *((_QWORD *)&v94[94] + 1) = 0LL;
  LODWORD(v94[95]) = 288;
  DWORD2(v94[96]) = 67108868;
  DWORD2(v94[97]) = 4;
  *(_QWORD *)&v94[98] = 0LL;
  DWORD2(v94[98]) = 288;
  LODWORD(v94[100]) = 67108868;
  LODWORD(v94[101]) = 4;
  *((_QWORD *)&v94[101] + 1) = 0LL;
  LODWORD(v94[102]) = 288;
  DWORD2(v94[103]) = 67108868;
  DWORD2(v94[104]) = 4;
  *(_QWORD *)&v94[105] = 0LL;
  DWORD2(v94[105]) = 288;
  LODWORD(v94[107]) = 67108868;
  LODWORD(v94[108]) = 4;
  memset((char *)&v94[108] + 8, 0, 0x38uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v94, 0LL, 0LL);
  v10 = dword_1C0040198;
  memset(dword_1C0040198, 0, sizeof(dword_1C0040198));
  memset(v94, 0, sizeof(v94));
  v11 = 0;
  v12 = 0LL;
  do
  {
    memset(v96, 0, sizeof(v96));
    *(_DWORD *)&Destination.Length = 0x400000;
    Destination.Buffer = (PWSTR)v96;
    RtlInitUnicodeString(&DestinationString, L"MaxSegmentSize");
    if ( RtlAppendUnicodeStringToString(&Destination, &DestinationString) >= 0 )
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v95;
      if ( RtlIntegerToUnicodeString(v11, 0, &String) >= 0 && RtlAppendUnicodeStringToString(&Destination, &String) >= 0 )
      {
        *(_QWORD *)&v90 = Destination.Buffer;
        *(_QWORD *)&v89 = 0LL;
        *((_QWORD *)&v90 + 1) = &v26;
        DWORD2(v89) = 288;
        *((_QWORD *)&v91 + 1) = &v86;
        v94[1] = v90;
        v94[0] = v89;
        LODWORD(v91) = 67108868;
        LODWORD(v92) = 4;
        v94[2] = v91;
        *(_QWORD *)&v94[3] = v92;
        v86 = 0;
        v26 = 0;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v94, 0LL, 0LL);
        v15 = v26;
        *v10 = v26;
        if ( v15 )
        {
          v21 = (v15 + 4095) & 0xFFFFF000;
          if ( v21 < 0x800000 )
            v21 = 0x800000;
          *v10 = v21;
          v22 = WdLogNewEntry5_WdEvent(v14, v13);
          *(_QWORD *)(v22 + 24) = v12;
          *(_QWORD *)(v22 + 32) = *v10;
          WdLogEvent5_WdEvent(v22);
        }
      }
    }
    ++v11;
    ++v12;
    ++v10;
  }
  while ( v11 < 0x20 );
  v16 = WdLogNewEntry5_WdEvent(v14, v13);
  *(_QWORD *)(v16 + 24) = v23;
  WdLogEvent5_WdEvent(v16);
  v17 = v27;
  if ( v23 < 0x5A )
    v17 = v23;
  dword_1C0040188 = v17;
  v18 = v28;
  if ( v24 < 0x5A )
    v18 = v24;
  dword_1C004018C = v18;
  v19 = 0x7FFFFFF;
  dword_1C0040190 = 0;
  if ( v25 < 0x7FFFFFF )
    v19 = v25;
  dword_1C0040194 = v19;
  dword_1C0040298 = v30;
  dword_1C004029C = v31;
  dword_1C00402A0 = v32;
  dword_1C00402A4 = v33;
  dword_1C00402A8 = v34;
  dword_1C00402AC = v35;
  qword_1C00402B0 = (unsigned int)(v39 << 20);
  dword_1C00402B8 = v40;
  dword_1C00402BC = v41;
  dword_1C00402C8 = v43;
  dword_1C00402CC = v44;
  qword_1C00402C0 = (unsigned int)(10000000 * v42);
  dword_1C00402F0 = v49;
  qword_1C00402D0 = (unsigned int)(10000000 * v45);
  qword_1C00402D8 = (unsigned int)(10000000 * v46);
  qword_1C00402E0 = (unsigned int)(10000000 * v47);
  qword_1C00402E8 = (unsigned int)(10000000 * v48);
  VIDMM_GLOBAL::_Config = (v50 != 0 ? 0x10 : 0) | (v36 != 0 ? 2 : 0) | ((v29 ^ VIDMM_GLOBAL::_Config) & 1 ^ VIDMM_GLOBAL::_Config) & 0xFFFFFFE1 | (4 * (v38 & 1 | (unsigned __int8)(2 * (v37 & 1)))) & 0xEF;
  dword_1C0040154 = v51 != 0;
  qword_1C0040160 = (unsigned __int64)v52 << 20;
  LOBYTE(v0) = v53 != 0;
  qword_1C0040320 = (unsigned int)(v54 << 10);
  dword_1C0040158 = v0;
  qword_1C0040330 = (unsigned int)(10000 * v56);
  dword_1C0040328 = v55;
  VIDMM_GLOBAL::ReadCommitLimitInformation();
  VIDMM_GLOBAL::ReadWorkingSetConfiguration();
  VIDMM_GLOBAL::ReadUnusedAllocationConfiguration();
  VIDMM_GLOBAL::ReadPreparationPeriodConfiguration();
  VIDMM_GLOBAL::ReadPagingConfiguration();
  VIDMM_GLOBAL::ReadHeapConfiguration();
  VIDMM_GLOBAL::ReadPowerConfiguration();
  VIDMM_GLOBAL::ReadGpuVaConfiguration();
  VIDMM_GLOBAL::ReadPagingConfiguration();
  VIDMM_GLOBAL::ReadTestAndStagingConfiguration();
  VIDMM_GLOBAL::ReadVPRConfiguration();
  VIDMM_GLOBAL::ReadBudgetConfiguration();
}
