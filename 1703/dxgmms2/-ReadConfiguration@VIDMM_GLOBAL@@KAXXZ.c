/*
 * XREFs of ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0076FB8
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0076CF4 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?QuerySystemMemorySize@VIDMM_GLOBAL@@KA_KPEAX@Z @ 0x1C0047934 (-QuerySystemMemorySize@VIDMM_GLOBAL@@KA_KPEAX@Z.c)
 *     ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAX_N@Z @ 0x1C00479A4 (-ReadCommitLimitInformation@VIDMM_GLOBAL@@KAX_N@Z.c)
 *     ?ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0077CD0 (-ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007821C (-ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadVPRConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007892C (-ReadVPRConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0078AD4 (-ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0078E40 (-ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPowerConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0079134 (-ReadPowerConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0079230 (-ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0079674 (-ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007988C (-ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0079E5C (-ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 */

void VIDMM_GLOBAL::ReadConfiguration(void)
{
  int v0; // ebx
  int v1; // eax
  int v2; // eax
  int v3; // eax
  unsigned int *v4; // rdi
  ULONG v5; // esi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v18; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  int v26; // [rsp+60h] [rbp-A8h] BYREF
  int v27; // [rsp+64h] [rbp-A4h] BYREF
  int v28; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v30; // [rsp+70h] [rbp-98h] BYREF
  int v31; // [rsp+74h] [rbp-94h] BYREF
  int v32; // [rsp+78h] [rbp-90h] BYREF
  int v33; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v34; // [rsp+80h] [rbp-88h] BYREF
  int v35; // [rsp+84h] [rbp-84h] BYREF
  int v36; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v38; // [rsp+90h] [rbp-78h] BYREF
  int v39; // [rsp+94h] [rbp-74h] BYREF
  int v40; // [rsp+98h] [rbp-70h] BYREF
  int v41; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v42; // [rsp+A0h] [rbp-68h] BYREF
  int v43; // [rsp+A4h] [rbp-64h] BYREF
  int v44; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v45; // [rsp+ACh] [rbp-5Ch] BYREF
  int v46; // [rsp+B0h] [rbp-58h] BYREF
  int v47; // [rsp+B4h] [rbp-54h] BYREF
  int v48; // [rsp+B8h] [rbp-50h] BYREF
  int v49; // [rsp+BCh] [rbp-4Ch] BYREF
  int v50; // [rsp+C0h] [rbp-48h] BYREF
  int v51; // [rsp+C4h] [rbp-44h] BYREF
  int v52; // [rsp+C8h] [rbp-40h] BYREF
  int v53; // [rsp+CCh] [rbp-3Ch] BYREF
  int v54; // [rsp+D0h] [rbp-38h] BYREF
  int v55; // [rsp+D4h] [rbp-34h] BYREF
  int v56; // [rsp+D8h] [rbp-30h] BYREF
  int v57; // [rsp+DCh] [rbp-2Ch] BYREF
  int v58; // [rsp+E0h] [rbp-28h] BYREF
  int v59; // [rsp+E4h] [rbp-24h] BYREF
  int v60; // [rsp+E8h] [rbp-20h] BYREF
  int v61; // [rsp+ECh] [rbp-1Ch] BYREF
  int v62; // [rsp+F0h] [rbp-18h] BYREF
  int v63; // [rsp+F4h] [rbp-14h] BYREF
  int v64; // [rsp+F8h] [rbp-10h] BYREF
  int v65; // [rsp+FCh] [rbp-Ch] BYREF
  int v66; // [rsp+100h] [rbp-8h] BYREF
  int v67; // [rsp+104h] [rbp-4h] BYREF
  int v68; // [rsp+108h] [rbp+0h] BYREF
  int v69; // [rsp+10Ch] [rbp+4h] BYREF
  int v70; // [rsp+110h] [rbp+8h] BYREF
  int v71; // [rsp+114h] [rbp+Ch] BYREF
  int v72; // [rsp+118h] [rbp+10h] BYREF
  int v73; // [rsp+11Ch] [rbp+14h] BYREF
  int v74; // [rsp+120h] [rbp+18h] BYREF
  int v75; // [rsp+124h] [rbp+1Ch] BYREF
  int v76; // [rsp+128h] [rbp+20h] BYREF
  int v77; // [rsp+12Ch] [rbp+24h] BYREF
  int v78; // [rsp+130h] [rbp+28h] BYREF
  int v79; // [rsp+134h] [rbp+2Ch] BYREF
  struct _UNICODE_STRING Destination; // [rsp+138h] [rbp+30h] BYREF
  struct _UNICODE_STRING String; // [rsp+148h] [rbp+40h] BYREF
  __int128 v82; // [rsp+158h] [rbp+50h]
  __int128 v83; // [rsp+168h] [rbp+60h]
  __int128 v84; // [rsp+178h] [rbp+70h]
  __int64 v85; // [rsp+188h] [rbp+80h]
  struct _UNICODE_STRING DestinationString; // [rsp+190h] [rbp+88h] BYREF
  _OWORD v87[112]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v88; // [rsp+8A8h] [rbp+7A0h] BYREF
  _BYTE v89[64]; // [rsp+8B8h] [rbp+7B0h] BYREF

  qword_1C003C130 = VIDMM_GLOBAL::QuerySystemMemorySize(0LL);
  qword_1C003C128 = qword_1C003C130;
  v0 = 0;
  v50 = 0;
  v20 = 25;
  v16 = 25;
  v18 = 0;
  v55 = 0;
  v21 = 40;
  v17 = 40;
  v22 = 0;
  v57 = 4;
  v51 = 10;
  v32 = 10;
  v52 = 15;
  v33 = 15;
  v53 = 5;
  v34 = 5;
  v54 = 300;
  v35 = 300;
  v1 = 1024;
  if ( (unsigned __int64)qword_1C003C130 <= 0x20000000 )
    v1 = 256;
  v24 = 4;
  v56 = v1;
  v23 = v1;
  v2 = 0x2000000;
  if ( (unsigned __int64)qword_1C003C130 <= 0x20000000 )
    v2 = 0x800000;
  v60 = 10;
  v58 = v2;
  v25 = v2;
  v3 = 0x1000000;
  if ( (unsigned __int64)qword_1C003C130 <= 0x20000000 )
    v3 = 0x400000;
  v27 = 10;
  v59 = v3;
  v26 = v3;
  v62 = 1;
  v29 = 1;
  v63 = 1;
  v31 = 1;
  v61 = g_IsInternalRelease != 0 ? 0x40 : 0;
  v28 = v61;
  v65 = 0x100000;
  v36 = 0x100000;
  v67 = 60;
  v38 = 60;
  v68 = 60;
  v39 = 60;
  v70 = 8;
  v41 = 8;
  v64 = 1;
  v30 = 1;
  v66 = 0x800000;
  v37 = 0x800000;
  v69 = 1;
  v40 = 1;
  v71 = 2;
  v42 = 2;
  v72 = 0;
  v43 = 0;
  v74 = 200;
  v45 = 200;
  v76 = 4096;
  v47 = 4096;
  v77 = 6;
  v48 = 6;
  v78 = 20;
  v49 = 20;
  *(_QWORD *)&v87[1] = L"PinnedMemoryLimit";
  *((_QWORD *)&v87[1] + 1) = &v16;
  *((_QWORD *)&v87[2] + 1) = &v20;
  *((_QWORD *)&v87[4] + 1) = L"PinnedApertureMemoryLimit";
  *(_QWORD *)&v87[5] = &v17;
  *(_QWORD *)&v87[6] = &v21;
  *(_QWORD *)&v87[8] = L"PagesHistory";
  *((_QWORD *)&v87[8] + 1) = &v18;
  *((_QWORD *)&v87[9] + 1) = &v50;
  *((_QWORD *)&v87[11] + 1) = L"MemTransferThreshold";
  *(_QWORD *)&v87[12] = &v32;
  *(_QWORD *)&v87[13] = &v51;
  *(_QWORD *)&v87[15] = L"ExcessiveMemTransferFlipThreshold";
  *((_QWORD *)&v87[15] + 1) = &v33;
  *((_QWORD *)&v87[16] + 1) = &v52;
  *((_QWORD *)&v87[18] + 1) = L"ExcessiveMemTransferPenalty";
  *(_QWORD *)&v87[19] = &v34;
  *(_QWORD *)&v87[20] = &v53;
  v73 = 0;
  v44 = 0;
  v75 = 1;
  v46 = 1;
  *(_QWORD *)&v87[0] = 0LL;
  DWORD2(v87[0]) = 288;
  LODWORD(v87[2]) = 67108868;
  LODWORD(v87[3]) = 4;
  *((_QWORD *)&v87[3] + 1) = 0LL;
  LODWORD(v87[4]) = 288;
  DWORD2(v87[5]) = 67108868;
  DWORD2(v87[6]) = 4;
  *(_QWORD *)&v87[7] = 0LL;
  DWORD2(v87[7]) = 288;
  LODWORD(v87[9]) = 67108868;
  LODWORD(v87[10]) = 4;
  *((_QWORD *)&v87[10] + 1) = 0LL;
  LODWORD(v87[11]) = 288;
  DWORD2(v87[12]) = 67108868;
  DWORD2(v87[13]) = 4;
  *(_QWORD *)&v87[14] = 0LL;
  DWORD2(v87[14]) = 288;
  LODWORD(v87[16]) = 67108868;
  LODWORD(v87[17]) = 4;
  *((_QWORD *)&v87[17] + 1) = 0LL;
  LODWORD(v87[18]) = 288;
  DWORD2(v87[19]) = 67108868;
  DWORD2(v87[20]) = 4;
  *(_QWORD *)&v87[21] = 0LL;
  *(_QWORD *)&v87[22] = L"EventThrottleThreshold";
  *((_QWORD *)&v87[22] + 1) = &v35;
  *((_QWORD *)&v87[23] + 1) = &v54;
  *((_QWORD *)&v87[25] + 1) = L"DisablePrefetching";
  *(_QWORD *)&v87[26] = &v22;
  *(_QWORD *)&v87[27] = &v55;
  *(_QWORD *)&v87[29] = L"NbDmaBufferLimitPerDevice";
  *((_QWORD *)&v87[29] + 1) = &v23;
  *((_QWORD *)&v87[30] + 1) = &v56;
  *((_QWORD *)&v87[32] + 1) = L"NbCddDmaBufferLimitPerDevice";
  *(_QWORD *)&v87[33] = &v24;
  *(_QWORD *)&v87[34] = &v57;
  *(_QWORD *)&v87[36] = L"DmaBufferBytesLimitAllDevices";
  *((_QWORD *)&v87[36] + 1) = &v25;
  *((_QWORD *)&v87[37] + 1) = &v58;
  *((_QWORD *)&v87[39] + 1) = L"DmaBufferListBytesLimitAllDevices";
  *(_QWORD *)&v87[40] = &v26;
  *(_QWORD *)&v87[41] = &v59;
  *(_QWORD *)&v87[43] = L"NbDmaBufferLimitCompareWatermark";
  *((_QWORD *)&v87[43] + 1) = &v27;
  *((_QWORD *)&v87[44] + 1) = &v60;
  *((_QWORD *)&v87[46] + 1) = L"NbPagingHistoryRecords";
  *(_QWORD *)&v87[47] = &v28;
  *(_QWORD *)&v87[48] = &v61;
  DWORD2(v87[21]) = 288;
  LODWORD(v87[23]) = 67108868;
  LODWORD(v87[24]) = 4;
  *((_QWORD *)&v87[24] + 1) = 0LL;
  LODWORD(v87[25]) = 288;
  DWORD2(v87[26]) = 67108868;
  DWORD2(v87[27]) = 4;
  *(_QWORD *)&v87[28] = 0LL;
  DWORD2(v87[28]) = 288;
  LODWORD(v87[30]) = 67108868;
  LODWORD(v87[31]) = 4;
  *((_QWORD *)&v87[31] + 1) = 0LL;
  LODWORD(v87[32]) = 288;
  DWORD2(v87[33]) = 67108868;
  DWORD2(v87[34]) = 4;
  *(_QWORD *)&v87[35] = 0LL;
  DWORD2(v87[35]) = 288;
  LODWORD(v87[37]) = 67108868;
  LODWORD(v87[38]) = 4;
  *((_QWORD *)&v87[38] + 1) = 0LL;
  LODWORD(v87[39]) = 288;
  DWORD2(v87[40]) = 67108868;
  DWORD2(v87[41]) = 4;
  *(_QWORD *)&v87[42] = 0LL;
  DWORD2(v87[42]) = 288;
  LODWORD(v87[44]) = 67108868;
  LODWORD(v87[45]) = 4;
  *((_QWORD *)&v87[45] + 1) = 0LL;
  LODWORD(v87[46]) = 288;
  DWORD2(v87[47]) = 67108868;
  DWORD2(v87[48]) = 4;
  *(_QWORD *)&v87[49] = 0LL;
  DWORD2(v87[49]) = 288;
  *(_QWORD *)&v87[50] = L"PinDWMAllocationBackingStore";
  *((_QWORD *)&v87[50] + 1) = &v29;
  *((_QWORD *)&v87[51] + 1) = &v62;
  *((_QWORD *)&v87[53] + 1) = L"RemovePagesFromWorkingSetOnPagingForDwm";
  *(_QWORD *)&v87[54] = &v31;
  *(_QWORD *)&v87[55] = &v63;
  *(_QWORD *)&v87[57] = L"UseUnreset";
  *((_QWORD *)&v87[57] + 1) = &v30;
  *((_QWORD *)&v87[58] + 1) = &v64;
  *((_QWORD *)&v87[60] + 1) = L"PrivateHeapPackingThreshold";
  *(_QWORD *)&v87[61] = &v36;
  *(_QWORD *)&v87[62] = &v65;
  *(_QWORD *)&v87[64] = L"PrivateHeapPackingBlockSize";
  *((_QWORD *)&v87[64] + 1) = &v37;
  *((_QWORD *)&v87[65] + 1) = &v66;
  *((_QWORD *)&v87[67] + 1) = L"EvictTemporaryPeriod";
  *(_QWORD *)&v87[68] = &v38;
  *(_QWORD *)&v87[69] = &v67;
  *(_QWORD *)&v87[71] = L"EvictUnusedPeriod";
  *((_QWORD *)&v87[71] + 1) = &v39;
  *((_QWORD *)&v87[72] + 1) = &v68;
  *((_QWORD *)&v87[74] + 1) = L"ProcessPendingOfferPeriod";
  *(_QWORD *)&v87[75] = &v40;
  *(_QWORD *)&v87[76] = &v69;
  LODWORD(v87[51]) = 67108868;
  LODWORD(v87[52]) = 4;
  *((_QWORD *)&v87[52] + 1) = 0LL;
  LODWORD(v87[53]) = 288;
  DWORD2(v87[54]) = 67108868;
  DWORD2(v87[55]) = 4;
  *(_QWORD *)&v87[56] = 0LL;
  DWORD2(v87[56]) = 288;
  LODWORD(v87[58]) = 67108868;
  LODWORD(v87[59]) = 4;
  *((_QWORD *)&v87[59] + 1) = 0LL;
  LODWORD(v87[60]) = 288;
  DWORD2(v87[61]) = 67108868;
  DWORD2(v87[62]) = 4;
  *(_QWORD *)&v87[63] = 0LL;
  DWORD2(v87[63]) = 288;
  LODWORD(v87[65]) = 67108868;
  LODWORD(v87[66]) = 4;
  *((_QWORD *)&v87[66] + 1) = 0LL;
  LODWORD(v87[67]) = 288;
  DWORD2(v87[68]) = 67108868;
  DWORD2(v87[69]) = 4;
  *(_QWORD *)&v87[70] = 0LL;
  DWORD2(v87[70]) = 288;
  LODWORD(v87[72]) = 67108868;
  LODWORD(v87[73]) = 4;
  *((_QWORD *)&v87[73] + 1) = 0LL;
  LODWORD(v87[74]) = 288;
  DWORD2(v87[75]) = 67108868;
  DWORD2(v87[76]) = 4;
  *(_QWORD *)&v87[77] = 0LL;
  DWORD2(v87[77]) = 288;
  LODWORD(v87[79]) = 67108868;
  *(_QWORD *)&v87[78] = L"ProcessSysmemOfferPeriod";
  *((_QWORD *)&v87[78] + 1) = &v41;
  *((_QWORD *)&v87[79] + 1) = &v70;
  *((_QWORD *)&v87[81] + 1) = L"SegmentBalancingPolicy";
  *(_QWORD *)&v87[82] = &v42;
  *(_QWORD *)&v87[83] = &v71;
  *(_QWORD *)&v87[85] = L"BugcheckOnApertureCorruption";
  *((_QWORD *)&v87[85] + 1) = &v43;
  *((_QWORD *)&v87[86] + 1) = &v72;
  *((_QWORD *)&v87[88] + 1) = L"QuickApertureCorruptionCheck";
  *(_QWORD *)&v87[89] = &v44;
  *(_QWORD *)&v87[90] = &v73;
  *(_QWORD *)&v87[92] = L"DirectFlipMemoryRequirement";
  *((_QWORD *)&v87[92] + 1) = &v45;
  *((_QWORD *)&v87[93] + 1) = &v74;
  *((_QWORD *)&v87[95] + 1) = L"CommitProcessHeapOnDemand";
  *(_QWORD *)&v87[96] = &v46;
  *(_QWORD *)&v87[97] = &v75;
  *(_QWORD *)&v87[99] = L"SegmentCleanupSizeThreshold";
  *((_QWORD *)&v87[99] + 1) = &v47;
  *((_QWORD *)&v87[100] + 1) = &v76;
  *((_QWORD *)&v87[102] + 1) = L"SegmentCleanupCountThreshold";
  *(_QWORD *)&v87[103] = &v48;
  *(_QWORD *)&v87[104] = &v77;
  LODWORD(v87[80]) = 4;
  *((_QWORD *)&v87[80] + 1) = 0LL;
  LODWORD(v87[81]) = 288;
  DWORD2(v87[82]) = 67108868;
  DWORD2(v87[83]) = 4;
  *(_QWORD *)&v87[84] = 0LL;
  DWORD2(v87[84]) = 288;
  LODWORD(v87[86]) = 67108868;
  LODWORD(v87[87]) = 4;
  *((_QWORD *)&v87[87] + 1) = 0LL;
  LODWORD(v87[88]) = 288;
  DWORD2(v87[89]) = 67108868;
  DWORD2(v87[90]) = 4;
  *(_QWORD *)&v87[91] = 0LL;
  DWORD2(v87[91]) = 288;
  LODWORD(v87[93]) = 67108868;
  LODWORD(v87[94]) = 4;
  *((_QWORD *)&v87[94] + 1) = 0LL;
  LODWORD(v87[95]) = 288;
  DWORD2(v87[96]) = 67108868;
  DWORD2(v87[97]) = 4;
  *(_QWORD *)&v87[98] = 0LL;
  DWORD2(v87[98]) = 288;
  LODWORD(v87[100]) = 67108868;
  LODWORD(v87[101]) = 4;
  *((_QWORD *)&v87[101] + 1) = 0LL;
  LODWORD(v87[102]) = 288;
  DWORD2(v87[103]) = 67108868;
  DWORD2(v87[104]) = 4;
  *(_QWORD *)&v87[105] = 0LL;
  DWORD2(v87[105]) = 288;
  *(_QWORD *)&v87[106] = L"SegmentCleanupTime";
  LODWORD(v87[107]) = 67108868;
  *((_QWORD *)&v87[106] + 1) = &v49;
  LODWORD(v87[108]) = 4;
  *((_QWORD *)&v87[107] + 1) = &v78;
  memset((char *)&v87[108] + 8, 0, 0x38uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v87, 0LL, 0LL);
  v4 = dword_1C003C160;
  memset(dword_1C003C160, 0, sizeof(dword_1C003C160));
  memset(v87, 0, sizeof(v87));
  v5 = 0;
  v6 = 0LL;
  do
  {
    memset(v89, 0, sizeof(v89));
    *(_DWORD *)&Destination.Length = 0x400000;
    Destination.Buffer = (PWSTR)v89;
    RtlInitUnicodeString(&DestinationString, L"MaxSegmentSize");
    if ( RtlAppendUnicodeStringToString(&Destination, &DestinationString) >= 0 )
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v88;
      if ( RtlIntegerToUnicodeString(v5, 0, &String) >= 0 && RtlAppendUnicodeStringToString(&Destination, &String) >= 0 )
      {
        *(_QWORD *)&v83 = Destination.Buffer;
        *(_QWORD *)&v82 = 0LL;
        *((_QWORD *)&v83 + 1) = &v19;
        DWORD2(v82) = 288;
        *((_QWORD *)&v84 + 1) = &v79;
        v87[1] = v83;
        v87[0] = v82;
        LODWORD(v84) = 67108868;
        LODWORD(v85) = 4;
        v87[2] = v84;
        *(_QWORD *)&v87[3] = v85;
        v79 = 0;
        v19 = 0;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v87, 0LL, 0LL);
        v9 = v19;
        *v4 = v19;
        if ( v9 )
        {
          v14 = (v9 + 4095) & 0xFFFFF000;
          if ( v14 < 0x800000 )
            v14 = 0x800000;
          *v4 = v14;
          v15 = WdLogNewEntry5_WdEvent(v8, v7);
          *(_QWORD *)(v15 + 24) = v6;
          *(_QWORD *)(v15 + 32) = *v4;
          WdLogEvent5_WdEvent(v15);
        }
      }
    }
    ++v5;
    ++v6;
    ++v4;
  }
  while ( v5 < 0x20 );
  v10 = WdLogNewEntry5_WdEvent(v8, v7);
  *(_QWORD *)(v10 + 24) = v16;
  WdLogEvent5_WdEvent(v10);
  v11 = v20;
  if ( v16 < 0x5A )
    v11 = v16;
  dword_1C003C150 = v11;
  v12 = v21;
  if ( v17 < 0x5A )
    v12 = v17;
  dword_1C003C154 = v12;
  v13 = 0x7FFFFFF;
  dword_1C003C158 = 0;
  if ( v18 < 0x7FFFFFF )
    v13 = v18;
  dword_1C003C15C = v13;
  dword_1C003C260 = v23;
  dword_1C003C264 = v24;
  dword_1C003C268 = v25;
  dword_1C003C26C = v26;
  dword_1C003C270 = v27;
  dword_1C003C274 = v28;
  qword_1C003C278 = (unsigned int)(v32 << 20);
  dword_1C003C280 = v33;
  dword_1C003C284 = v34;
  dword_1C003C290 = v36;
  dword_1C003C294 = v37;
  qword_1C003C288 = (unsigned int)(10000000 * v35);
  dword_1C003C2B8 = v42;
  qword_1C003C298 = (unsigned int)(10000000 * v38);
  qword_1C003C2A0 = (unsigned int)(10000000 * v39);
  qword_1C003C2A8 = (unsigned int)(10000000 * v40);
  qword_1C003C2B0 = (unsigned int)(10000000 * v41);
  VIDMM_GLOBAL::_Config = (v43 != 0 ? 0x10 : 0) | (v29 != 0 ? 2 : 0) | ((v22 ^ VIDMM_GLOBAL::_Config) & 1 ^ VIDMM_GLOBAL::_Config) & 0xFFFFFFE1 | (4 * (v31 & 1 | (unsigned __int8)(2 * (v30 & 1)))) & 0xEF;
  dword_1C003C114 = v44 != 0;
  qword_1C003C120 = (unsigned __int64)v45 << 20;
  LOBYTE(v0) = v46 != 0;
  qword_1C003C2E8 = (unsigned int)(v47 << 10);
  dword_1C003C118 = v0;
  qword_1C003C2F8 = (unsigned int)(10000 * v49);
  dword_1C003C2F0 = v48;
  VIDMM_GLOBAL::ReadCommitLimitInformation(0);
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
