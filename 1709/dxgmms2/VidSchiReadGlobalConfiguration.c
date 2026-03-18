/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C0075AC4
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0076950 (VidSchInitializeAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016144 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     VidSchiReadNodeConfiguration @ 0x1C0076848 (VidSchiReadNodeConfiguration.c)
 */

__int64 __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // r14d
  unsigned int v4; // ebx
  int v5; // r15d
  DXGADAPTER *v6; // rcx
  __int64 v7; // rcx
  int NodeConfiguration; // eax
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  bool IsEnabled; // al
  int v22; // ecx
  _QWORD *v23; // rdx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // edx
  DXGADAPTER *v35; // rcx
  bool v36; // cc
  unsigned int v37; // r8d
  __int64 result; // rax
  __int64 v39; // rax
  unsigned int v40; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v42; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v43; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-BCh] BYREF
  int v46; // [rsp+50h] [rbp-B8h] BYREF
  int v47; // [rsp+54h] [rbp-B4h] BYREF
  int v48; // [rsp+58h] [rbp-B0h] BYREF
  int v49; // [rsp+5Ch] [rbp-ACh] BYREF
  int v50; // [rsp+60h] [rbp-A8h] BYREF
  int v51; // [rsp+64h] [rbp-A4h] BYREF
  int v52; // [rsp+68h] [rbp-A0h] BYREF
  int v53; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v54; // [rsp+70h] [rbp-98h] BYREF
  int v55; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v56; // [rsp+78h] [rbp-90h] BYREF
  int v57; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v58; // [rsp+80h] [rbp-88h] BYREF
  int v59; // [rsp+84h] [rbp-84h] BYREF
  int v60; // [rsp+88h] [rbp-80h] BYREF
  int v61; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v62; // [rsp+90h] [rbp-78h] BYREF
  int v63; // [rsp+94h] [rbp-74h] BYREF
  int v64; // [rsp+98h] [rbp-70h] BYREF
  int v65; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v66; // [rsp+A0h] [rbp-68h] BYREF
  int v67; // [rsp+A4h] [rbp-64h] BYREF
  int v68; // [rsp+A8h] [rbp-60h] BYREF
  int v69; // [rsp+ACh] [rbp-5Ch] BYREF
  int v70; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v71; // [rsp+B4h] [rbp-54h] BYREF
  int v72; // [rsp+B8h] [rbp-50h] BYREF
  int v73; // [rsp+BCh] [rbp-4Ch] BYREF
  int v74; // [rsp+C0h] [rbp-48h] BYREF
  int v75; // [rsp+C4h] [rbp-44h] BYREF
  int v76; // [rsp+C8h] [rbp-40h] BYREF
  int v77; // [rsp+CCh] [rbp-3Ch] BYREF
  int v78; // [rsp+D0h] [rbp-38h] BYREF
  int v79; // [rsp+D4h] [rbp-34h] BYREF
  int v80; // [rsp+D8h] [rbp-30h] BYREF
  int v81; // [rsp+DCh] [rbp-2Ch] BYREF
  int v82; // [rsp+E0h] [rbp-28h] BYREF
  int v83; // [rsp+E4h] [rbp-24h] BYREF
  int v84; // [rsp+E8h] [rbp-20h] BYREF
  int v85; // [rsp+ECh] [rbp-1Ch] BYREF
  int v86; // [rsp+F0h] [rbp-18h] BYREF
  int v87; // [rsp+F4h] [rbp-14h] BYREF
  int v88; // [rsp+F8h] [rbp-10h] BYREF
  int v89; // [rsp+FCh] [rbp-Ch] BYREF
  int v90; // [rsp+100h] [rbp-8h] BYREF
  int v91; // [rsp+104h] [rbp-4h] BYREF
  int v92; // [rsp+108h] [rbp+0h] BYREF
  int v93; // [rsp+10Ch] [rbp+4h] BYREF
  int v94; // [rsp+110h] [rbp+8h] BYREF
  int v95; // [rsp+114h] [rbp+Ch] BYREF
  int v96; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v97; // [rsp+11Ch] [rbp+14h] BYREF
  _QWORD v98[210]; // [rsp+128h] [rbp+20h] BYREF
  _DWORD v99[64]; // [rsp+7B8h] [rbp+6B0h] BYREF

  v1 = 0LL;
  v73 = 25000;
  v72 = 0;
  v74 = 50000;
  v78 = 0;
  v3 = 1;
  v79 = 0;
  v4 = *(_DWORD *)(a1 + 204);
  v75 = 1;
  v84 = 20;
  v77 = 3;
  v47 = 7;
  v5 = 16;
  v44 = 3;
  v45 = 20;
  v46 = 7;
  v76 = 2;
  v80 = 1;
  v81 = 1;
  v82 = 1;
  v83 = 0;
  v86 = 0;
  v85 = 2;
  v88 = 0;
  v89 = 900;
  v90 = 1000;
  v87 = 1;
  v91 = 8;
  v92 = 0;
  v58 = 10;
  v93 = 1;
  v94 = 0;
  v95 = 16;
  v96 = 100;
  v65 = 64;
  v97 = v4;
  v49 = 0;
  v42 = 25000;
  v43 = 50000;
  v51 = 1;
  v48 = 2;
  v71 = 0;
  v50 = 0;
  v52 = 1;
  v53 = 1;
  v67 = 1;
  v68 = 0;
  v69 = 0;
  v70 = 2;
  v54 = 0;
  v60 = 900;
  v61 = 1000;
  v66 = 1;
  v63 = 8;
  v59 = 0;
  memset(v99, 0, sizeof(v99));
  v6 = *(DXGADAPTER **)(a1 + 16);
  v57 = 10;
  v55 = 1;
  v56 = 0;
  v62 = 16;
  v64 = 100;
  v40 = 64;
  v41 = v4;
  if ( (int)DXGADAPTER::GetDriverVersion(v6) >= 1300 && *(_BYTE *)(v7 + 2173) )
  {
    v47 = 1;
    v46 = 1;
  }
  memset(v98, 0, sizeof(v98));
  v98[0] = 0LL;
  LODWORD(v98[1]) = 288;
  LODWORD(v98[4]) = 67108868;
  LODWORD(v98[6]) = 4;
  v98[2] = L"AutoSyncToCPUPriority";
  v98[3] = &v49;
  v98[5] = &v72;
  v98[9] = L"QuantumUnit";
  v98[10] = &v42;
  v98[12] = &v73;
  v98[16] = L"PreemptionQuantumUnit";
  v98[17] = &v43;
  v98[19] = &v74;
  v98[23] = L"EnablePreemption";
  v98[24] = &v51;
  v98[26] = &v75;
  v98[30] = L"HwQueuedRenderPacketGroupLimit";
  v98[31] = &v48;
  v98[33] = &v76;
  v98[37] = L"QueuedPresentLimit";
  v98[38] = &v44;
  v98[40] = &v77;
  v98[44] = L"InitDriverFenceId";
  v98[45] = &v71;
  v98[47] = &v78;
  v98[51] = L"CarryOverUsedQuantum";
  v98[7] = 0LL;
  LODWORD(v98[8]) = 288;
  LODWORD(v98[11]) = 67108868;
  LODWORD(v98[13]) = 4;
  v98[14] = 0LL;
  LODWORD(v98[15]) = 288;
  LODWORD(v98[18]) = 67108868;
  LODWORD(v98[20]) = 4;
  v98[21] = 0LL;
  LODWORD(v98[22]) = 288;
  LODWORD(v98[25]) = 67108868;
  LODWORD(v98[27]) = 4;
  v98[28] = 0LL;
  LODWORD(v98[29]) = 288;
  LODWORD(v98[32]) = 67108868;
  LODWORD(v98[34]) = 4;
  v98[35] = 0LL;
  LODWORD(v98[36]) = 288;
  LODWORD(v98[39]) = 67108868;
  LODWORD(v98[41]) = 4;
  v98[42] = 0LL;
  LODWORD(v98[43]) = 288;
  LODWORD(v98[46]) = 67108868;
  LODWORD(v98[48]) = 4;
  v98[49] = 0LL;
  LODWORD(v98[50]) = 288;
  LODWORD(v98[53]) = 67108868;
  v98[52] = &v50;
  v98[54] = &v79;
  v98[58] = L"EnableFlipOnVSyncSwFlipQueue";
  v98[59] = &v52;
  v98[61] = &v80;
  v98[65] = L"EnableFlipImmediateSwFlipQueue";
  v98[66] = &v53;
  v98[68] = &v81;
  v98[72] = L"AdjustWorkerThreadPriority";
  v98[73] = &v67;
  v98[75] = &v82;
  v98[79] = L"CountFlipTowardHwLimit";
  v98[80] = &v68;
  v98[82] = &v83;
  v98[86] = L"NumberOfDmaPacketPool";
  v98[87] = &v45;
  v98[89] = &v84;
  v98[93] = L"ProfileLevel";
  v98[94] = &v70;
  v98[96] = &v85;
  v98[100] = L"VSyncIdleTimeout";
  v98[101] = &v46;
  v98[103] = &v47;
  v98[107] = L"CountPresentTowardHwLimit";
  LODWORD(v98[55]) = 4;
  v98[56] = 0LL;
  LODWORD(v98[57]) = 288;
  LODWORD(v98[60]) = 67108868;
  LODWORD(v98[62]) = 4;
  v98[63] = 0LL;
  LODWORD(v98[64]) = 288;
  LODWORD(v98[67]) = 67108868;
  LODWORD(v98[69]) = 4;
  v98[70] = 0LL;
  LODWORD(v98[71]) = 288;
  LODWORD(v98[74]) = 67108868;
  LODWORD(v98[76]) = 4;
  v98[77] = 0LL;
  LODWORD(v98[78]) = 288;
  LODWORD(v98[81]) = 67108868;
  LODWORD(v98[83]) = 4;
  v98[84] = 0LL;
  LODWORD(v98[85]) = 288;
  LODWORD(v98[88]) = 67108868;
  LODWORD(v98[90]) = 4;
  v98[91] = 0LL;
  LODWORD(v98[92]) = 288;
  LODWORD(v98[95]) = 67108868;
  LODWORD(v98[97]) = 4;
  v98[98] = 0LL;
  LODWORD(v98[99]) = 288;
  LODWORD(v98[102]) = 67108868;
  LODWORD(v98[104]) = 4;
  v98[105] = 0LL;
  LODWORD(v98[106]) = 288;
  v98[108] = &v69;
  v98[110] = &v86;
  v98[114] = L"EnableContextDelay";
  v98[115] = &v66;
  v98[117] = &v87;
  v98[121] = L"LogDriverVSyncCallback";
  v98[122] = &v54;
  v98[124] = &v88;
  v98[128] = L"MaximumAllowedPreemptionDelay";
  v98[129] = &v60;
  v98[131] = &v89;
  v98[135] = L"ContextSchedulingPenaltyDelay";
  v98[136] = &v61;
  v98[138] = &v90;
  v98[142] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v98[143] = &v63;
  v98[145] = &v91;
  v98[149] = L"ForceIndependentFlip";
  v98[150] = &v59;
  v98[152] = &v92;
  v98[156] = L"YieldPercentage";
  v98[157] = &v57;
  v98[159] = &v58;
  v98[163] = L"ForegroundPriorityBoost";
  v98[164] = &v55;
  LODWORD(v98[109]) = 67108868;
  LODWORD(v98[111]) = 4;
  v98[112] = 0LL;
  LODWORD(v98[113]) = 288;
  LODWORD(v98[116]) = 67108868;
  LODWORD(v98[118]) = 4;
  v98[119] = 0LL;
  LODWORD(v98[120]) = 288;
  LODWORD(v98[123]) = 67108868;
  LODWORD(v98[125]) = 4;
  v98[126] = 0LL;
  LODWORD(v98[127]) = 288;
  LODWORD(v98[130]) = 67108868;
  LODWORD(v98[132]) = 4;
  v98[133] = 0LL;
  LODWORD(v98[134]) = 288;
  LODWORD(v98[137]) = 67108868;
  LODWORD(v98[139]) = 4;
  v98[140] = 0LL;
  LODWORD(v98[141]) = 288;
  LODWORD(v98[144]) = 67108868;
  LODWORD(v98[146]) = 4;
  v98[147] = 0LL;
  LODWORD(v98[148]) = 288;
  LODWORD(v98[151]) = 67108868;
  LODWORD(v98[153]) = 4;
  v98[154] = 0LL;
  LODWORD(v98[155]) = 288;
  LODWORD(v98[158]) = 67108868;
  LODWORD(v98[160]) = 4;
  v98[161] = 0LL;
  LODWORD(v98[162]) = 288;
  LODWORD(v98[165]) = 67108868;
  v98[166] = &v93;
  LODWORD(v98[169]) = 288;
  v98[170] = L"ForceFlipTrueImmediateMode";
  LODWORD(v98[172]) = 67108868;
  v98[171] = &v56;
  v98[173] = &v94;
  v98[177] = L"MaxYieldInterval";
  v98[178] = &v62;
  v98[180] = &v95;
  v98[184] = L"MaxFocusGpuQuantumWithoutPresent";
  v98[185] = &v64;
  v98[187] = &v96;
  v98[191] = L"HistoryLogSize";
  v98[192] = &v40;
  v98[194] = &v65;
  v98[198] = L"HwQueuePacketCap";
  v98[199] = &v41;
  LODWORD(v98[176]) = 288;
  LODWORD(v98[179]) = 67108868;
  LODWORD(v98[183]) = 288;
  LODWORD(v98[186]) = 67108868;
  LODWORD(v98[190]) = 288;
  LODWORD(v98[193]) = 67108868;
  LODWORD(v98[197]) = 288;
  LODWORD(v98[200]) = 67108868;
  v98[201] = &v97;
  LODWORD(v98[167]) = 4;
  v98[168] = 0LL;
  LODWORD(v98[174]) = 4;
  v98[175] = 0LL;
  LODWORD(v98[181]) = 4;
  v98[182] = 0LL;
  LODWORD(v98[188]) = 4;
  v98[189] = 0LL;
  LODWORD(v98[195]) = 4;
  v98[196] = 0LL;
  LODWORD(v98[202]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v98, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, v99);
  v9 = 0;
  if ( *(_DWORD *)(a1 + 60) )
  {
    v10 = v48;
    v11 = NodeConfiguration;
    do
    {
      if ( v11 < 0 || (v12 = v9, (v13 = v99[v9]) == 0) )
      {
        v12 = v9;
        v13 = v10;
        v99[v9] = v10;
      }
      v14 = 1;
      if ( v13 > 1 )
        v14 = v13;
      ++v9;
      *(_DWORD *)(a1 + 4 * v12 + 2188) = v14;
    }
    while ( v9 < *(_DWORD *)(a1 + 60) );
  }
  v15 = v56;
  v16 = (v55 != 0 ? 0x1000 : 0) | (v54 != 0 ? 0x400 : 0) | (v53 != 0 ? 0x40 : 0) | (v52 != 0 ? 0x20 : 0) | (v51 != 0) | (v50 != 0 ? 4 : 0) | (v49 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 2168) & 0xFFFFEB98;
  *(_DWORD *)(a1 + 2168) = v16;
  if ( v15 <= 2 )
    *(_DWORD *)(a1 + 2180) = v15;
  if ( (unsigned int)(v57 - 1) > 0x53 )
    *(_DWORD *)(a1 + 184) = v58;
  else
    *(_DWORD *)(a1 + 184) = v57;
  v17 = v59 == 0;
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(a1 + 184) + 15;
  v18 = (unsigned int)(10000 * v60);
  *(_BYTE *)(a1 + 47) |= !v17;
  *(_QWORD *)(a1 + 2592) = v18;
  *(_QWORD *)(a1 + 2600) = (unsigned int)(10000 * v61);
  *(_QWORD *)(a1 + 2688) = (unsigned int)(10000 * v62);
  *(_QWORD *)(a1 + 2608) = (unsigned int)(10000 * v63);
  *(_QWORD *)(a1 + 2696) = (unsigned int)(10000 * v64);
  v19 = v40;
  *(_QWORD *)(a1 + 2616) = 1000LL;
  *(_QWORD *)(a1 + 2624) = 2500LL;
  *(_QWORD *)(a1 + 2632) = 5000LL;
  *(_QWORD *)(a1 + 2640) = 10000LL;
  *(_QWORD *)(a1 + 2648) = 25000LL;
  *(_QWORD *)(a1 + 2656) = 50000LL;
  *(_QWORD *)(a1 + 2664) = 100000LL;
  *(_QWORD *)(a1 + 2672) = 250000LL;
  *(_QWORD *)(a1 + 2680) = 500000LL;
  if ( (unsigned int)v19 < 0x10 )
  {
    LODWORD(v19) = 16;
LABEL_41:
    v40 = v19;
    goto LABEL_18;
  }
  if ( (unsigned int)v19 > 0x10000 )
  {
    LODWORD(v19) = 0x10000;
    v40 = 0x10000;
    goto LABEL_18;
  }
  if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v19, v16);
    *(_QWORD *)(v39 + 24) = v40;
    WdLogEvent5_WdAssertion(v39);
    LODWORD(v19) = v65;
    goto LABEL_41;
  }
LABEL_18:
  *(_DWORD *)(a1 + 200) = v19;
  v20 = 14;
  if ( v41 <= 0xE )
  {
    v20 = v41;
    if ( !v41 )
      v20 = 1;
  }
  v41 = v20;
  *(_DWORD *)(a1 + 204) = v20;
  if ( !v66 || (IsEnabled = TdrIsEnabled(), v22 = 2048, !IsEnabled) )
    v22 = 0;
  v23 = (_QWORD *)(a1 + 2504);
  *(_DWORD *)(a1 + 2168) = v22 | *(_DWORD *)(a1 + 2168) & 0xFFFFF7FF;
  do
  {
    v24 = 1;
    if ( v42 > 1 )
      v24 = v42;
    v25 = (unsigned int)(v24 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v1));
    v26 = 1;
    if ( v43 > 1 )
      v26 = v43;
    *(v23 - 6) = v25;
    v27 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v1);
    v1 += 4LL;
    *v23++ = (unsigned int)(v26 * v27);
  }
  while ( v1 < 24 );
  v28 = *(_DWORD *)(a1 + 2168);
  if ( v44 > 1 )
    v3 = v44;
  v29 = v46;
  v30 = v68;
  v31 = -(v67 != 0);
  *(_DWORD *)(a1 + 2184) = v3;
  *(_DWORD *)(a1 + 2048) = v29;
  v32 = (v30 != 0 ? 0x100 : 0) | v31 & 0x80 | v28 & 0xFFFFFE7F;
  v33 = -(v69 != 0);
  *(_DWORD *)(a1 + 6048) = v70;
  v34 = v33 & 0x200 | v32 & 0xFFFFFDFF;
  v35 = *(DXGADAPTER **)(a1 + 16);
  v36 = v45 <= 0x10;
  *(_DWORD *)(a1 + 2168) = v34;
  if ( !v36 )
    v5 = v45;
  *(_DWORD *)(a1 + 2448) = v5;
  if ( (int)DXGADAPTER::GetDriverVersion(v35) < 1300 )
  {
    if ( v37 >= 4 )
    {
      if ( v37 > 0xFFFFFFFD )
        *(_DWORD *)(a1 + 2048) = -3;
    }
    else
    {
      *(_DWORD *)(a1 + 2048) = 4;
    }
  }
  result = v71;
  *(_DWORD *)(a1 + 2584) = v71;
  *(_DWORD *)(a1 + 2576) = result;
  *(_DWORD *)(a1 + 2568) = result;
  *(_DWORD *)(a1 + 2560) = result;
  *(_DWORD *)(a1 + 2552) = result;
  return result;
}
