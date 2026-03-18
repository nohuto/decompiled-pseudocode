/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C006FA64
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00708F0 (VidSchInitializeAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0013E28 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiReadNodeConfiguration @ 0x1C00707E0 (VidSchiReadNodeConfiguration.c)
 */

__int64 __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  int v4; // r14d
  DXGADAPTER *v5; // rcx
  __int64 v6; // rcx
  int NodeConfiguration; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rcx
  bool IsEnabled; // al
  int v20; // ecx
  _QWORD *v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // r8d
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // edx
  int v31; // ecx
  unsigned int v32; // edx
  DXGADAPTER *v33; // rcx
  bool v34; // cc
  unsigned int v35; // r8d
  __int64 result; // rax
  __int64 v37; // rax
  unsigned int v38; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v40; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v42; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch] BYREF
  int v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-94h] BYREF
  int v54; // [rsp+70h] [rbp-90h] BYREF
  int v55; // [rsp+74h] [rbp-8Ch] BYREF
  int v56; // [rsp+78h] [rbp-88h] BYREF
  int v57; // [rsp+7Ch] [rbp-84h] BYREF
  int v58; // [rsp+80h] [rbp-80h] BYREF
  int v59; // [rsp+84h] [rbp-7Ch] BYREF
  int v60; // [rsp+88h] [rbp-78h] BYREF
  int v61; // [rsp+8Ch] [rbp-74h] BYREF
  int v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+94h] [rbp-6Ch] BYREF
  int v64; // [rsp+98h] [rbp-68h] BYREF
  int v65; // [rsp+9Ch] [rbp-64h] BYREF
  int v66; // [rsp+A0h] [rbp-60h] BYREF
  int v67; // [rsp+A4h] [rbp-5Ch] BYREF
  int v68; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v69; // [rsp+ACh] [rbp-54h] BYREF
  int v70; // [rsp+B0h] [rbp-50h] BYREF
  int v71; // [rsp+B4h] [rbp-4Ch] BYREF
  int v72; // [rsp+B8h] [rbp-48h] BYREF
  int v73; // [rsp+BCh] [rbp-44h] BYREF
  int v74; // [rsp+C0h] [rbp-40h] BYREF
  int v75; // [rsp+C4h] [rbp-3Ch] BYREF
  int v76; // [rsp+C8h] [rbp-38h] BYREF
  int v77; // [rsp+CCh] [rbp-34h] BYREF
  int v78; // [rsp+D0h] [rbp-30h] BYREF
  int v79; // [rsp+D4h] [rbp-2Ch] BYREF
  int v80; // [rsp+D8h] [rbp-28h] BYREF
  int v81; // [rsp+DCh] [rbp-24h] BYREF
  int v82; // [rsp+E0h] [rbp-20h] BYREF
  int v83; // [rsp+E4h] [rbp-1Ch] BYREF
  int v84; // [rsp+E8h] [rbp-18h] BYREF
  int v85; // [rsp+ECh] [rbp-14h] BYREF
  int v86; // [rsp+F0h] [rbp-10h] BYREF
  int v87; // [rsp+F4h] [rbp-Ch] BYREF
  int v88; // [rsp+F8h] [rbp-8h] BYREF
  int v89; // [rsp+FCh] [rbp-4h] BYREF
  int v90; // [rsp+100h] [rbp+0h] BYREF
  int v91; // [rsp+104h] [rbp+4h] BYREF
  int v92; // [rsp+108h] [rbp+8h] BYREF
  int v93; // [rsp+10Ch] [rbp+Ch] BYREF
  int v94; // [rsp+110h] [rbp+10h] BYREF
  int v95; // [rsp+114h] [rbp+14h] BYREF
  _QWORD v96[210]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v97[64]; // [rsp+7B0h] [rbp+6B0h] BYREF

  v1 = 0LL;
  v71 = 25000;
  v70 = 0;
  v72 = 50000;
  v76 = 0;
  v3 = 1;
  v77 = 0;
  v73 = 1;
  v83 = 20;
  v42 = 20;
  v75 = 3;
  v44 = 7;
  v4 = 16;
  v41 = 3;
  v43 = 7;
  v74 = 2;
  v78 = 1;
  v79 = 1;
  v80 = 1;
  v81 = 0;
  v85 = 0;
  v82 = 1;
  v84 = 2;
  v87 = 0;
  v88 = 900;
  v89 = 1000;
  v86 = 1;
  v90 = 8;
  v91 = 0;
  v55 = 10;
  v92 = 1;
  v93 = 0;
  v94 = 16;
  v95 = 100;
  v62 = 64;
  v46 = 0;
  v39 = 25000;
  v40 = 50000;
  v48 = 1;
  v45 = 2;
  v69 = 0;
  v47 = 0;
  v49 = 1;
  v50 = 1;
  v64 = 1;
  v65 = 0;
  v66 = 0;
  v67 = 1;
  v68 = 2;
  v51 = 0;
  v57 = 900;
  v58 = 1000;
  v63 = 1;
  v60 = 8;
  v56 = 0;
  memset(v97, 0, sizeof(v97));
  v5 = *(DXGADAPTER **)(a1 + 16);
  v54 = 10;
  v52 = 1;
  v53 = 0;
  v59 = 16;
  v61 = 100;
  v38 = 64;
  if ( (int)DXGADAPTER::GetDriverVersion(v5) >= 1300 && *(_BYTE *)(v6 + 2149) )
  {
    v44 = 1;
    v43 = 1;
  }
  memset(v96, 0, sizeof(v96));
  v96[0] = 0LL;
  LODWORD(v96[1]) = 288;
  LODWORD(v96[4]) = 67108868;
  LODWORD(v96[6]) = 4;
  v96[2] = L"AutoSyncToCPUPriority";
  v96[3] = &v46;
  v96[5] = &v70;
  v96[9] = L"QuantumUnit";
  v96[10] = &v39;
  v96[12] = &v71;
  v96[16] = L"PreemptionQuantumUnit";
  v96[17] = &v40;
  v96[19] = &v72;
  v96[23] = L"EnablePreemption";
  v96[24] = &v48;
  v96[26] = &v73;
  v96[30] = L"HwQueuedRenderPacketGroupLimit";
  v96[31] = &v45;
  v96[33] = &v74;
  v96[37] = L"QueuedPresentLimit";
  v96[38] = &v41;
  v96[40] = &v75;
  v96[44] = L"InitDriverFenceId";
  v96[45] = &v69;
  v96[47] = &v76;
  v96[51] = L"CarryOverUsedQuantum";
  v96[7] = 0LL;
  LODWORD(v96[8]) = 288;
  LODWORD(v96[11]) = 67108868;
  LODWORD(v96[13]) = 4;
  v96[14] = 0LL;
  LODWORD(v96[15]) = 288;
  LODWORD(v96[18]) = 67108868;
  LODWORD(v96[20]) = 4;
  v96[21] = 0LL;
  LODWORD(v96[22]) = 288;
  LODWORD(v96[25]) = 67108868;
  LODWORD(v96[27]) = 4;
  v96[28] = 0LL;
  LODWORD(v96[29]) = 288;
  LODWORD(v96[32]) = 67108868;
  LODWORD(v96[34]) = 4;
  v96[35] = 0LL;
  LODWORD(v96[36]) = 288;
  LODWORD(v96[39]) = 67108868;
  LODWORD(v96[41]) = 4;
  v96[42] = 0LL;
  LODWORD(v96[43]) = 288;
  LODWORD(v96[46]) = 67108868;
  LODWORD(v96[48]) = 4;
  v96[49] = 0LL;
  LODWORD(v96[50]) = 288;
  LODWORD(v96[53]) = 67108868;
  v96[52] = &v47;
  v96[54] = &v77;
  v96[58] = L"EnableFlipOnVSyncSwFlipQueue";
  v96[59] = &v49;
  v96[61] = &v78;
  v96[65] = L"EnableFlipImmediateSwFlipQueue";
  v96[66] = &v50;
  v96[68] = &v79;
  v96[72] = L"AdjustWorkerThreadPriority";
  v96[73] = &v64;
  v96[75] = &v80;
  v96[79] = L"CountFlipTowardHwLimit";
  v96[80] = &v65;
  v96[82] = &v81;
  v96[86] = L"AllowUserModeToSetFlipLimit";
  v96[87] = &v67;
  v96[89] = &v82;
  v96[93] = L"NumberOfDmaPacketPool";
  v96[94] = &v42;
  v96[96] = &v83;
  v96[100] = L"ProfileLevel";
  v96[101] = &v68;
  v96[103] = &v84;
  v96[107] = L"VSyncIdleTimeout";
  LODWORD(v96[55]) = 4;
  v96[56] = 0LL;
  LODWORD(v96[57]) = 288;
  LODWORD(v96[60]) = 67108868;
  LODWORD(v96[62]) = 4;
  v96[63] = 0LL;
  LODWORD(v96[64]) = 288;
  LODWORD(v96[67]) = 67108868;
  LODWORD(v96[69]) = 4;
  v96[70] = 0LL;
  LODWORD(v96[71]) = 288;
  LODWORD(v96[74]) = 67108868;
  LODWORD(v96[76]) = 4;
  v96[77] = 0LL;
  LODWORD(v96[78]) = 288;
  LODWORD(v96[81]) = 67108868;
  LODWORD(v96[83]) = 4;
  v96[84] = 0LL;
  LODWORD(v96[85]) = 288;
  LODWORD(v96[88]) = 67108868;
  LODWORD(v96[90]) = 4;
  v96[91] = 0LL;
  LODWORD(v96[92]) = 288;
  LODWORD(v96[95]) = 67108868;
  LODWORD(v96[97]) = 4;
  v96[98] = 0LL;
  LODWORD(v96[99]) = 288;
  LODWORD(v96[102]) = 67108868;
  LODWORD(v96[104]) = 4;
  v96[105] = 0LL;
  LODWORD(v96[106]) = 288;
  v96[108] = &v43;
  v96[110] = &v44;
  v96[114] = L"CountPresentTowardHwLimit";
  v96[115] = &v66;
  v96[117] = &v85;
  v96[121] = L"EnableContextDelay";
  v96[122] = &v63;
  v96[124] = &v86;
  v96[128] = L"LogDriverVSyncCallback";
  v96[129] = &v51;
  v96[131] = &v87;
  v96[135] = L"MaximumAllowedPreemptionDelay";
  v96[136] = &v57;
  v96[138] = &v88;
  v96[142] = L"ContextSchedulingPenaltyDelay";
  v96[143] = &v58;
  v96[145] = &v89;
  v96[149] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v96[150] = &v60;
  v96[152] = &v90;
  v96[156] = L"ForceIndependentFlip";
  v96[157] = &v56;
  v96[159] = &v91;
  v96[163] = L"YieldPercentage";
  v96[164] = &v54;
  LODWORD(v96[109]) = 67108868;
  LODWORD(v96[111]) = 4;
  v96[112] = 0LL;
  LODWORD(v96[113]) = 288;
  LODWORD(v96[116]) = 67108868;
  LODWORD(v96[118]) = 4;
  v96[119] = 0LL;
  LODWORD(v96[120]) = 288;
  LODWORD(v96[123]) = 67108868;
  LODWORD(v96[125]) = 4;
  v96[126] = 0LL;
  LODWORD(v96[127]) = 288;
  LODWORD(v96[130]) = 67108868;
  LODWORD(v96[132]) = 4;
  v96[133] = 0LL;
  LODWORD(v96[134]) = 288;
  LODWORD(v96[137]) = 67108868;
  LODWORD(v96[139]) = 4;
  v96[140] = 0LL;
  LODWORD(v96[141]) = 288;
  LODWORD(v96[144]) = 67108868;
  LODWORD(v96[146]) = 4;
  v96[147] = 0LL;
  LODWORD(v96[148]) = 288;
  LODWORD(v96[151]) = 67108868;
  LODWORD(v96[153]) = 4;
  v96[154] = 0LL;
  LODWORD(v96[155]) = 288;
  LODWORD(v96[158]) = 67108868;
  LODWORD(v96[160]) = 4;
  v96[161] = 0LL;
  LODWORD(v96[162]) = 288;
  LODWORD(v96[165]) = 67108868;
  v96[166] = &v55;
  LODWORD(v96[169]) = 288;
  v96[170] = L"ForegroundPriorityBoost";
  LODWORD(v96[172]) = 67108868;
  v96[171] = &v52;
  v96[173] = &v92;
  v96[177] = L"ForceFlipTrueImmediateMode";
  v96[178] = &v53;
  v96[180] = &v93;
  v96[184] = L"MaxYieldInterval";
  v96[185] = &v59;
  v96[187] = &v94;
  v96[191] = L"MaxFocusGpuQuantumWithoutPresent";
  v96[192] = &v61;
  v96[194] = &v95;
  v96[198] = L"HistoryLogSize";
  v96[199] = &v38;
  LODWORD(v96[176]) = 288;
  LODWORD(v96[179]) = 67108868;
  LODWORD(v96[183]) = 288;
  LODWORD(v96[186]) = 67108868;
  LODWORD(v96[190]) = 288;
  LODWORD(v96[193]) = 67108868;
  LODWORD(v96[197]) = 288;
  LODWORD(v96[200]) = 67108868;
  v96[201] = &v62;
  LODWORD(v96[167]) = 4;
  v96[168] = 0LL;
  LODWORD(v96[174]) = 4;
  v96[175] = 0LL;
  LODWORD(v96[181]) = 4;
  v96[182] = 0LL;
  LODWORD(v96[188]) = 4;
  v96[189] = 0LL;
  LODWORD(v96[195]) = 4;
  v96[196] = 0LL;
  LODWORD(v96[202]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v96, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, v97);
  v8 = 0;
  if ( *(_DWORD *)(a1 + 60) )
  {
    v9 = v45;
    v10 = NodeConfiguration;
    do
    {
      if ( v10 < 0 || (v11 = v8, (v12 = v97[v8]) == 0) )
      {
        v11 = v8;
        v12 = v9;
        v97[v8] = v9;
      }
      v13 = 1;
      if ( v12 > 1 )
        v13 = v12;
      ++v8;
      *(_DWORD *)(a1 + 4 * v11 + 2176) = v13;
    }
    while ( v8 < *(_DWORD *)(a1 + 60) );
  }
  v14 = v53;
  v15 = (v52 != 0 ? 0x4000 : 0) | (v51 != 0 ? 0x1000 : 0) | (v50 != 0 ? 0x80 : 0) | (v49 != 0 ? 0x40 : 0) | (v48 != 0) | (v47 != 0 ? 4 : 0) | (v46 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 2152) & 0xFFFFAF38;
  *(_DWORD *)(a1 + 2152) = v15;
  if ( v14 <= 2 )
    *(_DWORD *)(a1 + 2168) = v14;
  if ( (unsigned int)(v54 - 1) > 0x53 )
    *(_DWORD *)(a1 + 184) = v55;
  else
    *(_DWORD *)(a1 + 184) = v54;
  v16 = v56 == 0;
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(a1 + 184) + 15;
  v17 = (unsigned int)(10000 * v57);
  *(_BYTE *)(a1 + 47) |= !v16;
  *(_QWORD *)(a1 + 2576) = v17;
  *(_QWORD *)(a1 + 2584) = (unsigned int)(10000 * v58);
  *(_QWORD *)(a1 + 2672) = (unsigned int)(10000 * v59);
  *(_QWORD *)(a1 + 2592) = (unsigned int)(10000 * v60);
  *(_QWORD *)(a1 + 2680) = (unsigned int)(10000 * v61);
  v18 = v38;
  *(_QWORD *)(a1 + 2600) = 1000LL;
  *(_QWORD *)(a1 + 2608) = 2500LL;
  *(_QWORD *)(a1 + 2616) = 5000LL;
  *(_QWORD *)(a1 + 2624) = 10000LL;
  *(_QWORD *)(a1 + 2632) = 25000LL;
  *(_QWORD *)(a1 + 2640) = 50000LL;
  *(_QWORD *)(a1 + 2648) = 100000LL;
  *(_QWORD *)(a1 + 2656) = 250000LL;
  *(_QWORD *)(a1 + 2664) = 500000LL;
  if ( (unsigned int)v18 < 0x10 )
  {
    LODWORD(v18) = 16;
LABEL_38:
    v38 = v18;
    goto LABEL_18;
  }
  if ( (unsigned int)v18 > 0x10000 )
  {
    LODWORD(v18) = 0x10000;
    v38 = 0x10000;
    goto LABEL_18;
  }
  if ( (((_DWORD)v18 - 1) & (unsigned int)v18) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v18, v15);
    *(_QWORD *)(v37 + 24) = v38;
    WdLogEvent5_WdAssertion(v37);
    LODWORD(v18) = v62;
    goto LABEL_38;
  }
LABEL_18:
  *(_DWORD *)(a1 + 200) = v18;
  if ( !v63 || (IsEnabled = TdrIsEnabled(), v20 = 0x2000, !IsEnabled) )
    v20 = 0;
  v21 = (_QWORD *)(a1 + 2488);
  *(_DWORD *)(a1 + 2152) = v20 | *(_DWORD *)(a1 + 2152) & 0xFFFFDFFF;
  do
  {
    v22 = 1;
    if ( v39 > 1 )
      v22 = v39;
    v23 = (unsigned int)(v22 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v1));
    v24 = 1;
    if ( v40 > 1 )
      v24 = v40;
    *(v21 - 6) = v23;
    v25 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v1);
    v1 += 4LL;
    *v21++ = (unsigned int)(v24 * v25);
  }
  while ( v1 < 24 );
  v26 = *(_DWORD *)(a1 + 2152);
  if ( v41 > 1 )
    v3 = v41;
  v27 = v43;
  v28 = v65;
  v29 = -(v64 != 0);
  *(_DWORD *)(a1 + 2172) = v3;
  *(_DWORD *)(a1 + 2032) = v27;
  v30 = (v66 != 0 ? 0x400 : 0) | (v28 != 0 ? 0x200 : 0) | v29 & 0x100 | v26 & 0xFFFFF8FF;
  v31 = -(v67 != 0);
  *(_DWORD *)(a1 + 5536) = v68;
  v32 = v31 & 0x800 | v30 & 0xFFFFF7FF;
  v33 = *(DXGADAPTER **)(a1 + 16);
  v34 = v42 <= 0x10;
  *(_DWORD *)(a1 + 2152) = v32;
  if ( !v34 )
    v4 = v42;
  *(_DWORD *)(a1 + 2436) = v4;
  if ( (int)DXGADAPTER::GetDriverVersion(v33) < 1300 )
  {
    if ( v35 >= 4 )
    {
      if ( v35 > 0xFFFFFFFD )
        *(_DWORD *)(a1 + 2032) = -3;
    }
    else
    {
      *(_DWORD *)(a1 + 2032) = 4;
    }
  }
  result = v69;
  *(_DWORD *)(a1 + 2568) = v69;
  *(_DWORD *)(a1 + 2560) = result;
  *(_DWORD *)(a1 + 2552) = result;
  *(_DWORD *)(a1 + 2544) = result;
  *(_DWORD *)(a1 + 2536) = result;
  return result;
}
