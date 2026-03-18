/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C007C368
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C007B520 (VidSchInitializeAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0004B24 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiReadNodeConfiguration @ 0x1C007C264 (VidSchiReadNodeConfiguration.c)
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
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  bool IsEnabled; // al
  int v23; // ecx
  _QWORD *v24; // rdx
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  int v30; // r8d
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // edx
  int v34; // ecx
  unsigned int v35; // edx
  DXGADAPTER *v36; // rcx
  bool v37; // cc
  unsigned int v38; // r8d
  __int64 result; // rax
  __int64 v40; // rax
  unsigned int v41; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v43; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v44; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+54h] [rbp-ACh] BYREF
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  int v52; // [rsp+5Ch] [rbp-A4h] BYREF
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  int v54; // [rsp+64h] [rbp-9Ch] BYREF
  int v55; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+74h] [rbp-8Ch] BYREF
  int v59; // [rsp+78h] [rbp-88h] BYREF
  int v60; // [rsp+7Ch] [rbp-84h] BYREF
  int v61; // [rsp+80h] [rbp-80h] BYREF
  int v62; // [rsp+84h] [rbp-7Ch] BYREF
  int v63; // [rsp+88h] [rbp-78h] BYREF
  int v64; // [rsp+8Ch] [rbp-74h] BYREF
  int v65; // [rsp+90h] [rbp-70h] BYREF
  int v66; // [rsp+94h] [rbp-6Ch] BYREF
  int v67; // [rsp+98h] [rbp-68h] BYREF
  int v68; // [rsp+9Ch] [rbp-64h] BYREF
  int v69; // [rsp+A0h] [rbp-60h] BYREF
  int v70; // [rsp+A4h] [rbp-5Ch] BYREF
  int v71; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v72; // [rsp+ACh] [rbp-54h] BYREF
  int v73; // [rsp+B0h] [rbp-50h] BYREF
  int v74; // [rsp+B4h] [rbp-4Ch] BYREF
  int v75; // [rsp+B8h] [rbp-48h] BYREF
  int v76; // [rsp+BCh] [rbp-44h] BYREF
  int v77; // [rsp+C0h] [rbp-40h] BYREF
  int v78; // [rsp+C4h] [rbp-3Ch] BYREF
  int v79; // [rsp+C8h] [rbp-38h] BYREF
  int v80; // [rsp+CCh] [rbp-34h] BYREF
  int v81; // [rsp+D0h] [rbp-30h] BYREF
  int v82; // [rsp+D4h] [rbp-2Ch] BYREF
  int v83; // [rsp+D8h] [rbp-28h] BYREF
  int v84; // [rsp+DCh] [rbp-24h] BYREF
  int v85; // [rsp+E0h] [rbp-20h] BYREF
  int v86; // [rsp+E4h] [rbp-1Ch] BYREF
  int v87; // [rsp+E8h] [rbp-18h] BYREF
  int v88; // [rsp+ECh] [rbp-14h] BYREF
  int v89; // [rsp+F0h] [rbp-10h] BYREF
  int v90; // [rsp+F4h] [rbp-Ch] BYREF
  int v91; // [rsp+F8h] [rbp-8h] BYREF
  int v92; // [rsp+FCh] [rbp-4h] BYREF
  int v93; // [rsp+100h] [rbp+0h] BYREF
  int v94; // [rsp+104h] [rbp+4h] BYREF
  int v95; // [rsp+108h] [rbp+8h] BYREF
  int v96; // [rsp+10Ch] [rbp+Ch] BYREF
  unsigned int v97; // [rsp+110h] [rbp+10h] BYREF
  int v98; // [rsp+114h] [rbp+14h] BYREF
  _QWORD v99[210]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v100[64]; // [rsp+7B0h] [rbp+6B0h] BYREF

  v1 = 0LL;
  v74 = 25000;
  v73 = 0;
  v75 = 50000;
  v79 = 0;
  v3 = 1;
  v80 = 0;
  v4 = *(_DWORD *)(a1 + 204);
  v76 = 1;
  v84 = 20;
  v78 = 3;
  v48 = 7;
  v5 = 16;
  v45 = 3;
  v46 = 20;
  v47 = 7;
  v77 = 2;
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
  v59 = 10;
  v93 = 1;
  v94 = 0;
  v98 = 0;
  v95 = 16;
  v96 = 100;
  v66 = 64;
  v97 = v4;
  v50 = 0;
  v43 = 25000;
  v44 = 50000;
  v52 = 1;
  v49 = 2;
  v72 = 0;
  v51 = 0;
  v53 = 1;
  v68 = 1;
  v69 = 0;
  v70 = 0;
  v71 = 2;
  v54 = 0;
  v61 = 900;
  v62 = 1000;
  v67 = 1;
  v64 = 8;
  v60 = 0;
  memset(v100, 0, sizeof(v100));
  v6 = *(DXGADAPTER **)(a1 + 16);
  v58 = 10;
  v55 = 1;
  v56 = 0;
  v57 = 0;
  v63 = 16;
  v65 = 100;
  v41 = 64;
  v42 = v4;
  if ( (int)DXGADAPTER::GetDriverVersion(v6) >= 1300 && *(_BYTE *)(v7 + 2309) )
  {
    v48 = 1;
    v47 = 1;
  }
  memset(v99, 0, sizeof(v99));
  v99[0] = 0LL;
  LODWORD(v99[1]) = 288;
  LODWORD(v99[4]) = 67108868;
  LODWORD(v99[6]) = 4;
  v99[2] = L"AutoSyncToCPUPriority";
  v99[3] = &v50;
  v99[5] = &v73;
  v99[9] = L"QuantumUnit";
  v99[10] = &v43;
  v99[12] = &v74;
  v99[16] = L"PreemptionQuantumUnit";
  v99[17] = &v44;
  v99[19] = &v75;
  v99[23] = L"EnablePreemption";
  v99[24] = &v52;
  v99[26] = &v76;
  v99[30] = L"HwQueuedRenderPacketGroupLimit";
  v99[31] = &v49;
  v99[33] = &v77;
  v99[37] = L"QueuedPresentLimit";
  v99[38] = &v45;
  v99[40] = &v78;
  v99[44] = L"InitDriverFenceId";
  v99[45] = &v72;
  v99[47] = &v79;
  v99[51] = L"CarryOverUsedQuantum";
  v99[7] = 0LL;
  LODWORD(v99[8]) = 288;
  LODWORD(v99[11]) = 67108868;
  LODWORD(v99[13]) = 4;
  v99[14] = 0LL;
  LODWORD(v99[15]) = 288;
  LODWORD(v99[18]) = 67108868;
  LODWORD(v99[20]) = 4;
  v99[21] = 0LL;
  LODWORD(v99[22]) = 288;
  LODWORD(v99[25]) = 67108868;
  LODWORD(v99[27]) = 4;
  v99[28] = 0LL;
  LODWORD(v99[29]) = 288;
  LODWORD(v99[32]) = 67108868;
  LODWORD(v99[34]) = 4;
  v99[35] = 0LL;
  LODWORD(v99[36]) = 288;
  LODWORD(v99[39]) = 67108868;
  LODWORD(v99[41]) = 4;
  v99[42] = 0LL;
  LODWORD(v99[43]) = 288;
  LODWORD(v99[46]) = 67108868;
  LODWORD(v99[48]) = 4;
  v99[49] = 0LL;
  LODWORD(v99[50]) = 288;
  LODWORD(v99[53]) = 67108868;
  v99[52] = &v51;
  v99[54] = &v80;
  v99[58] = L"EnableFlipImmediateSwFlipQueue";
  v99[59] = &v53;
  v99[61] = &v81;
  v99[65] = L"AdjustWorkerThreadPriority";
  v99[66] = &v68;
  v99[68] = &v82;
  v99[72] = L"CountFlipTowardHwLimit";
  v99[73] = &v69;
  v99[75] = &v83;
  v99[79] = L"NumberOfDmaPacketPool";
  v99[80] = &v46;
  v99[82] = &v84;
  v99[86] = L"ProfileLevel";
  v99[87] = &v71;
  v99[89] = &v85;
  v99[93] = L"VSyncIdleTimeout";
  v99[94] = &v47;
  v99[96] = &v48;
  v99[100] = L"CountPresentTowardHwLimit";
  v99[101] = &v70;
  v99[103] = &v86;
  v99[107] = L"EnableContextDelay";
  LODWORD(v99[55]) = 4;
  v99[56] = 0LL;
  LODWORD(v99[57]) = 288;
  LODWORD(v99[60]) = 67108868;
  LODWORD(v99[62]) = 4;
  v99[63] = 0LL;
  LODWORD(v99[64]) = 288;
  LODWORD(v99[67]) = 67108868;
  LODWORD(v99[69]) = 4;
  v99[70] = 0LL;
  LODWORD(v99[71]) = 288;
  LODWORD(v99[74]) = 67108868;
  LODWORD(v99[76]) = 4;
  v99[77] = 0LL;
  LODWORD(v99[78]) = 288;
  LODWORD(v99[81]) = 67108868;
  LODWORD(v99[83]) = 4;
  v99[84] = 0LL;
  LODWORD(v99[85]) = 288;
  LODWORD(v99[88]) = 67108868;
  LODWORD(v99[90]) = 4;
  v99[91] = 0LL;
  LODWORD(v99[92]) = 288;
  LODWORD(v99[95]) = 67108868;
  LODWORD(v99[97]) = 4;
  v99[98] = 0LL;
  LODWORD(v99[99]) = 288;
  LODWORD(v99[102]) = 67108868;
  LODWORD(v99[104]) = 4;
  v99[105] = 0LL;
  LODWORD(v99[106]) = 288;
  v99[108] = &v67;
  v99[110] = &v87;
  v99[114] = L"LogDriverVSyncCallback";
  v99[115] = &v54;
  v99[117] = &v88;
  v99[121] = L"MaximumAllowedPreemptionDelay";
  v99[122] = &v61;
  v99[124] = &v89;
  v99[128] = L"ContextSchedulingPenaltyDelay";
  v99[129] = &v62;
  v99[131] = &v90;
  v99[135] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v99[136] = &v64;
  v99[138] = &v91;
  v99[142] = L"ForceIndependentFlip";
  v99[143] = &v60;
  v99[145] = &v92;
  v99[149] = L"YieldPercentage";
  v99[150] = &v58;
  v99[152] = &v59;
  v99[156] = L"ForegroundPriorityBoost";
  v99[157] = &v55;
  v99[159] = &v93;
  v99[163] = L"ForceFlipTrueImmediateMode";
  v99[164] = &v56;
  LODWORD(v99[109]) = 67108868;
  LODWORD(v99[111]) = 4;
  v99[112] = 0LL;
  LODWORD(v99[113]) = 288;
  LODWORD(v99[116]) = 67108868;
  LODWORD(v99[118]) = 4;
  v99[119] = 0LL;
  LODWORD(v99[120]) = 288;
  LODWORD(v99[123]) = 67108868;
  LODWORD(v99[125]) = 4;
  v99[126] = 0LL;
  LODWORD(v99[127]) = 288;
  LODWORD(v99[130]) = 67108868;
  LODWORD(v99[132]) = 4;
  v99[133] = 0LL;
  LODWORD(v99[134]) = 288;
  LODWORD(v99[137]) = 67108868;
  LODWORD(v99[139]) = 4;
  v99[140] = 0LL;
  LODWORD(v99[141]) = 288;
  LODWORD(v99[144]) = 67108868;
  LODWORD(v99[146]) = 4;
  v99[147] = 0LL;
  LODWORD(v99[148]) = 288;
  LODWORD(v99[151]) = 67108868;
  LODWORD(v99[153]) = 4;
  v99[154] = 0LL;
  LODWORD(v99[155]) = 288;
  LODWORD(v99[158]) = 67108868;
  LODWORD(v99[160]) = 4;
  v99[161] = 0LL;
  LODWORD(v99[162]) = 288;
  LODWORD(v99[165]) = 67108868;
  v99[166] = &v94;
  LODWORD(v99[169]) = 288;
  v99[170] = L"MaxYieldInterval";
  LODWORD(v99[172]) = 67108868;
  v99[171] = &v63;
  LODWORD(v99[176]) = 288;
  v99[173] = &v95;
  v99[177] = L"MaxFocusGpuQuantumWithoutPresent";
  v99[178] = &v65;
  v99[180] = &v96;
  v99[184] = L"HistoryLogSize";
  v99[185] = &v41;
  v99[187] = &v66;
  v99[191] = L"HwQueuePacketCap";
  v99[192] = &v42;
  v99[194] = &v97;
  v99[198] = L"FlipDoNotFlipMode";
  v99[199] = &v57;
  LODWORD(v99[179]) = 67108868;
  LODWORD(v99[183]) = 288;
  LODWORD(v99[186]) = 67108868;
  LODWORD(v99[190]) = 288;
  LODWORD(v99[193]) = 67108868;
  LODWORD(v99[197]) = 288;
  LODWORD(v99[200]) = 67108868;
  v99[201] = &v98;
  LODWORD(v99[167]) = 4;
  v99[168] = 0LL;
  LODWORD(v99[174]) = 4;
  v99[175] = 0LL;
  LODWORD(v99[181]) = 4;
  v99[182] = 0LL;
  LODWORD(v99[188]) = 4;
  v99[189] = 0LL;
  LODWORD(v99[195]) = 4;
  v99[196] = 0LL;
  LODWORD(v99[202]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v99, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, (char *)v100);
  v9 = 0;
  if ( *(_DWORD *)(a1 + 64) )
  {
    v10 = v49;
    v11 = NodeConfiguration;
    do
    {
      v12 = v9;
      if ( v11 < 0 || (v13 = v100[v9]) == 0 )
      {
        v13 = v10;
        v100[v9] = v10;
      }
      v14 = 1;
      if ( v13 > 1 )
        v14 = v13;
      ++v9;
      *(_DWORD *)(a1 + 4 * v12 + 2216) = v14;
    }
    while ( v9 < *(_DWORD *)(a1 + 64) );
  }
  v15 = v56;
  *(_DWORD *)(a1 + 2192) = (v55 != 0 ? 0x400 : 0) | (v54 != 0 ? 0x100 : 0) | (v53 != 0 ? 0x10 : 0) | (v52 != 0) | (v51 != 0 ? 4 : 0) | (v50 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 2192) & 0xFFFFFAE8;
  if ( v15 <= 2 )
    *(_DWORD *)(a1 + 2204) = v15;
  if ( v57 <= 2 )
    *(_DWORD *)(a1 + 2208) = v57;
  v16 = v59;
  if ( (unsigned int)(v58 - 1) <= 0x53 )
    v16 = v58;
  *(_DWORD *)(a1 + 184) = v16;
  v17 = (unsigned int)(v16 + 15);
  v18 = v60 == 0;
  *(_DWORD *)(a1 + 188) = v17;
  v19 = (unsigned int)(10000 * v61);
  *(_BYTE *)(a1 + 47) |= !v18;
  *(_QWORD *)(a1 + 2616) = v19;
  *(_QWORD *)(a1 + 2624) = (unsigned int)(10000 * v62);
  *(_QWORD *)(a1 + 2712) = (unsigned int)(10000 * v63);
  *(_QWORD *)(a1 + 2632) = (unsigned int)(10000 * v64);
  *(_QWORD *)(a1 + 2720) = (unsigned int)(10000 * v65);
  v20 = v41;
  *(_QWORD *)(a1 + 2640) = 1000LL;
  *(_QWORD *)(a1 + 2648) = 2500LL;
  *(_QWORD *)(a1 + 2656) = 5000LL;
  *(_QWORD *)(a1 + 2664) = 10000LL;
  *(_QWORD *)(a1 + 2672) = 25000LL;
  *(_QWORD *)(a1 + 2680) = 50000LL;
  *(_QWORD *)(a1 + 2688) = 100000LL;
  *(_QWORD *)(a1 + 2696) = 250000LL;
  *(_QWORD *)(a1 + 2704) = 500000LL;
  if ( (unsigned int)v20 < 0x10 )
  {
    LODWORD(v20) = 16;
LABEL_42:
    v41 = v20;
    goto LABEL_20;
  }
  if ( (unsigned int)v20 > 0x10000 )
  {
    LODWORD(v20) = 0x10000;
    v41 = 0x10000;
    goto LABEL_20;
  }
  if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v20, v17);
    *(_QWORD *)(v40 + 24) = v41;
    WdLogEvent5_WdAssertion(v40);
    LODWORD(v20) = v66;
    goto LABEL_42;
  }
LABEL_20:
  *(_DWORD *)(a1 + 200) = v20;
  v21 = 14;
  if ( v42 <= 0xE )
  {
    v21 = v42;
    if ( !v42 )
      v21 = 1;
  }
  v42 = v21;
  *(_DWORD *)(a1 + 204) = v21;
  if ( !v67 || (IsEnabled = TdrIsEnabled(), v23 = 512, !IsEnabled) )
    v23 = 0;
  v24 = (_QWORD *)(a1 + 2528);
  *(_DWORD *)(a1 + 2192) = v23 | *(_DWORD *)(a1 + 2192) & 0xFFFFFDFF;
  do
  {
    v25 = 1;
    if ( v43 > 1 )
      v25 = v43;
    v26 = (unsigned int)(v25 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v1));
    v27 = 1;
    if ( v44 > 1 )
      v27 = v44;
    *(v24 - 6) = v26;
    v28 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v1);
    v1 += 4LL;
    *v24++ = (unsigned int)(v27 * v28);
  }
  while ( v1 < 24 );
  v29 = *(_DWORD *)(a1 + 2192);
  if ( v45 > 1 )
    v3 = v45;
  v30 = v47;
  v31 = v69;
  v32 = -(v68 != 0);
  *(_DWORD *)(a1 + 2212) = v3;
  *(_DWORD *)(a1 + 2064) = v30;
  v33 = (v31 != 0 ? 0x40 : 0) | v32 & 0x20 | v29 & 0xFFFFFF9F;
  v34 = -(v70 != 0);
  *(_DWORD *)(a1 + 6240) = v71;
  v35 = v34 & 0x80 | v33 & 0xFFFFFF7F;
  v36 = *(DXGADAPTER **)(a1 + 16);
  v37 = v46 <= 0x10;
  *(_DWORD *)(a1 + 2192) = v35;
  if ( !v37 )
    v5 = v46;
  *(_DWORD *)(a1 + 2476) = v5;
  if ( (int)DXGADAPTER::GetDriverVersion(v36) < 1300 )
  {
    if ( v38 >= 4 )
    {
      if ( v38 > 0xFFFFFFFD )
        *(_DWORD *)(a1 + 2064) = -3;
    }
    else
    {
      *(_DWORD *)(a1 + 2064) = 4;
    }
  }
  result = v72;
  *(_DWORD *)(a1 + 2608) = v72;
  *(_DWORD *)(a1 + 2600) = result;
  *(_DWORD *)(a1 + 2592) = result;
  *(_DWORD *)(a1 + 2584) = result;
  *(_DWORD *)(a1 + 2576) = result;
  return result;
}
