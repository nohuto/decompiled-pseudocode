/*
 * XREFs of DpiGetAdapterInfo @ 0x1C0117154
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0110B90 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C0117E80 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFreeAdapterInfo @ 0x1C01DBC80 (DpiFreeAdapterInfo.c)
 */

__int64 __fastcall DpiGetAdapterInfo(__int64 a1, __int64 a2, _QWORD *a3, _OWORD *a4)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  char v29; // al
  __int64 v30; // rbx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v80[36]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v80, 0, 0x118uLL);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(v8 + 40);
  if ( a3 )
  {
    memset(a3, 0, 0x388uLL);
    v10 = 1;
    *a3 = *(_QWORD *)(v8 + 48);
    v11 = 0;
    if ( *(_DWORD *)(v8 + 504) )
      v10 = *(_DWORD *)(v8 + 504);
    *((_DWORD *)a3 + 2) = v10;
    *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)(v8 + 2520);
    *(_QWORD *)((char *)a3 + 28) = *(_QWORD *)(v8 + 2536);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v8 + 1108);
    *((_DWORD *)a3 + 10) = *(_DWORD *)(v8 + 1112);
    *((_DWORD *)a3 + 11) = *(_DWORD *)(v8 + 1116);
    *((_DWORD *)a3 + 12) = *(_DWORD *)(v8 + 1120);
    *((_DWORD *)a3 + 13) = *(_DWORD *)(v8 + 1124);
    *((_DWORD *)a3 + 14) = *(_DWORD *)(v8 + 1104);
    LOBYTE(v11) = *(_BYTE *)(v8 + 1136) != 0;
    v12 = *((_DWORD *)a3 + 15) & 0xFFFFFFFE | v11;
    *((_DWORD *)a3 + 15) = v12;
    v13 = v12 & 0xFFFFFFFD | (*(_BYTE *)(v8 + 1137) != 0 ? 2 : 0);
    *((_DWORD *)a3 + 15) = v13;
    v14 = v13 & 0xFFFFFFFB | (*(_BYTE *)(v8 + 480) != 0 ? 4 : 0);
    *((_DWORD *)a3 + 15) = v14;
    v15 = v14 & 0xFFFFFFF7 | (*(_BYTE *)(v8 + 2556) != 0 ? 8 : 0);
    *((_DWORD *)a3 + 15) = v15;
    v16 = v15 & 0xFFFFFFEF | (*(_BYTE *)(v8 + 2557) != 0 ? 0x10 : 0);
    *((_DWORD *)a3 + 15) = v16;
    v17 = v16 & 0xFFFFFFDF | (*(_BYTE *)(v8 + 1139) != 0 ? 0x20 : 0);
    *((_DWORD *)a3 + 15) = v17;
    v18 = v17 & 0xFFFFBFFF | (*(_BYTE *)(v8 + 2561) != 0 ? 0x4000 : 0);
    *((_DWORD *)a3 + 15) = v18;
    v19 = v18 & 0xFFFFEFFF | (*(_DWORD *)(v8 + 3348) != -1 ? 0x1000 : 0);
    *((_DWORD *)a3 + 15) = v19;
    v20 = v19 & 0xFFFFFFBF | (*(_DWORD *)(v8 + 3088) != -1 ? 0x40 : 0);
    *((_DWORD *)a3 + 15) = v20;
    v21 = v20 & 0xFFFFFF7F | (*(_BYTE *)(v8 + 2604) != 0 ? 0x80 : 0);
    *((_DWORD *)a3 + 15) = v21;
    v22 = v21 & 0xFFFFFEFF | (*(_BYTE *)(v8 + 1143) != 0 ? 0x100 : 0);
    *((_DWORD *)a3 + 15) = v22;
    v23 = v22 & 0xFFFFFDFF | (*(_BYTE *)(v8 + 2559) != 0 ? 0x200 : 0);
    *((_DWORD *)a3 + 15) = v23;
    v24 = v23 & 0xFFFFDFFF | (*(_BYTE *)(v8 + 2558) != 0 ? 0x2000 : 0);
    *((_DWORD *)a3 + 15) = v24;
    v25 = v24 & 0xFFFFFBFF | (*(_BYTE *)(v8 + 2562) != 0 ? 0x400 : 0);
    *((_DWORD *)a3 + 15) = v25;
    v26 = v25 & 0xFFFFF7FF | (*(_BYTE *)(v8 + 2563) != 0 ? 0x800 : 0);
    *((_DWORD *)a3 + 15) = v26;
    v27 = v26 & 0xFFFF7FFF | ((*(_BYTE *)(v8 + 2605) != 0) << 15);
    *((_DWORD *)a3 + 15) = v27;
    v28 = v27 & 0xFFFEFFFF | ((*(_BYTE *)(v8 + 2606) != 0) << 16);
    *((_DWORD *)a3 + 15) = v28;
    *((_DWORD *)a3 + 15) = v28 ^ (v28 ^ (*(_DWORD *)(v8 + 1164) << 13)) & 0x20000;
    if ( !*(_QWORD *)(v9 + 184) || (v29 = 1, !*(_QWORD *)(v9 + 192)) )
      v29 = 0;
    *((_BYTE *)a3 + 64) = v29;
    a3[9] = *(_QWORD *)(v9 + 272);
    a3[10] = *(_QWORD *)(v9 + 280);
    a3[11] = *(_QWORD *)(v9 + 288);
    a3[12] = *(_QWORD *)(v9 + 296);
    a3[13] = *(_QWORD *)(v9 + 304);
    a3[14] = *(_QWORD *)(v9 + 312);
    a3[15] = *(_QWORD *)(v9 + 320);
    a3[16] = *(_QWORD *)(v9 + 328);
    a3[17] = *(_QWORD *)(v9 + 336);
    a3[18] = *(_QWORD *)(v9 + 344);
    a3[19] = *(_QWORD *)(v9 + 352);
    a3[20] = *(_QWORD *)(v9 + 360);
    a3[21] = *(_QWORD *)(v9 + 368);
    a3[22] = *(_QWORD *)(v9 + 376);
    a3[23] = *(_QWORD *)(v9 + 384);
    a3[24] = *(_QWORD *)(v9 + 392);
    a3[25] = *(_QWORD *)(v9 + 400);
    a3[26] = *(_QWORD *)(v9 + 408);
    a3[27] = *(_QWORD *)(v9 + 416);
    a3[28] = *(_QWORD *)(v9 + 424);
    a3[29] = *(_QWORD *)(v9 + 432);
    a3[30] = *(_QWORD *)(v9 + 440);
    a3[31] = *(_QWORD *)(v9 + 448);
    a3[32] = *(_QWORD *)(v9 + 456);
    a3[33] = *(_QWORD *)(v9 + 464);
    a3[34] = *(_QWORD *)(v9 + 472);
    a3[35] = *(_QWORD *)(v9 + 480);
    a3[36] = *(_QWORD *)(v9 + 488);
    a3[37] = *(_QWORD *)(v9 + 496);
    a3[38] = *(_QWORD *)(v9 + 504);
    a3[39] = *(_QWORD *)(v9 + 512);
    a3[40] = *(_QWORD *)(v9 + 520);
    a3[41] = *(_QWORD *)(v9 + 528);
    a3[42] = *(_QWORD *)(v9 + 536);
    a3[43] = *(_QWORD *)(v9 + 544);
    a3[44] = *(_QWORD *)(v9 + 552);
    a3[45] = *(_QWORD *)(v9 + 560);
    a3[46] = *(_QWORD *)(v9 + 568);
    a3[47] = *(_QWORD *)(v9 + 576);
    a3[48] = *(_QWORD *)(v9 + 584);
    a3[49] = *(_QWORD *)(v9 + 592);
    a3[50] = *(_QWORD *)(v9 + 600);
    a3[51] = *(_QWORD *)(v9 + 608);
    a3[52] = *(_QWORD *)(v9 + 624);
    if ( *(_DWORD *)(v9 + 28) >= 0x2002u )
      a3[53] = *(_QWORD *)(v9 + 680);
    if ( *(_DWORD *)(v9 + 28) >= 0x2003u )
      a3[54] = *(_QWORD *)(v9 + 696);
    if ( *(_DWORD *)(v9 + 28) >= 0x3001u )
    {
      a3[55] = *(_QWORD *)(v9 + 712);
      a3[56] = *(_QWORD *)(v9 + 720);
      a3[57] = *(_QWORD *)(v9 + 728);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x3004u )
      a3[62] = *(_QWORD *)(v9 + 760);
    if ( *(_DWORD *)(v9 + 28) >= 0x3005u )
    {
      a3[59] = *(_QWORD *)(v9 + 704);
      a3[60] = *(_QWORD *)(v9 + 776);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x3000u )
      a3[58] = *(_QWORD *)(v9 + 1192);
    if ( *(_DWORD *)(v9 + 28) >= 0x4000u )
    {
      a3[65] = *(_QWORD *)(v9 + 808);
      a3[66] = *(_QWORD *)(v9 + 816);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x300Bu )
      a3[63] = *(_QWORD *)(v9 + 784);
    if ( *(_DWORD *)(v9 + 28) >= 0x4001u )
      a3[67] = *(_QWORD *)(v9 + 824);
    if ( *(_DWORD *)(v9 + 28) >= 0x4000u )
      a3[64] = *(_QWORD *)(v9 + 800);
    if ( *(_DWORD *)(v9 + 28) >= 0x4002u )
    {
      a3[68] = *(_QWORD *)(v9 + 832);
      a3[69] = *(_QWORD *)(v9 + 840);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x5001u )
    {
      a3[70] = *(_QWORD *)(v9 + 848);
      a3[71] = *(_QWORD *)(v9 + 856);
      a3[72] = *(_QWORD *)(v9 + 864);
      a3[73] = *(_QWORD *)(v9 + 872);
      a3[74] = *(_QWORD *)(v9 + 880);
      a3[75] = *(_QWORD *)(v9 + 888);
      a3[76] = *(_QWORD *)(v9 + 904);
      a3[77] = *(_QWORD *)(v9 + 912);
      a3[78] = *(_QWORD *)(v9 + 896);
      a3[79] = *(_QWORD *)(v9 + 920);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x5006u )
      a3[61] = *(_QWORD *)(v9 + 944);
    if ( *(_DWORD *)(v9 + 28) >= 0x5008u )
    {
      a3[80] = *(_QWORD *)(v9 + 952);
      a3[81] = *(_QWORD *)(v9 + 960);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x6000u )
    {
      a3[82] = *(_QWORD *)(v9 + 968);
      a3[83] = *(_QWORD *)(v9 + 976);
      a3[84] = *(_QWORD *)(v9 + 984);
      a3[85] = v8 + 4672;
      a3[87] = v8 + 4800;
      a3[86] = v8 + 4936;
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x6002u )
    {
      a3[88] = *(_QWORD *)(v9 + 1000);
      a3[89] = *(_QWORD *)(v9 + 1008);
      a3[90] = *(_QWORD *)(v9 + 992);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x7000u )
    {
      a3[91] = *(_QWORD *)(v9 + 1016);
      a3[92] = *(_QWORD *)(v9 + 1024);
      a3[93] = *(_QWORD *)(v9 + 1032);
      a3[94] = *(_QWORD *)(v9 + 1040);
      a3[95] = *(_QWORD *)(v9 + 1048);
      a3[96] = *(_QWORD *)(v9 + 1056);
      a3[97] = *(_QWORD *)(v9 + 1064);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x7002u )
    {
      a3[98] = *(_QWORD *)(v9 + 1072);
      a3[99] = *(_QWORD *)(v9 + 1080);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x7003u )
    {
      a3[100] = *(_QWORD *)(v9 + 1088);
      a3[101] = *(_QWORD *)(v9 + 1096);
      a3[102] = *(_QWORD *)(v9 + 1104);
      a3[103] = *(_QWORD *)(v9 + 1112);
      a3[104] = *(_QWORD *)(v9 + 1120);
      a3[105] = *(_QWORD *)(v9 + 1128);
      a3[106] = *(_QWORD *)(v9 + 1136);
      a3[107] = *(_QWORD *)(v9 + 1144);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x7004u )
    {
      a3[108] = *(_QWORD *)(v9 + 1152);
      a3[109] = *(_QWORD *)(v9 + 1160);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x8000u )
      a3[110] = *(_QWORD *)(v9 + 1168);
    if ( *(_DWORD *)(v9 + 28) >= 0x8001u )
    {
      a3[111] = *(_QWORD *)(v9 + 1176);
      a3[112] = *(_QWORD *)(v9 + 1184);
    }
  }
  *(_BYTE *)a2 = 0;
  if ( *(_BYTE *)(v8 + 2557) )
  {
    *(_DWORD *)(a2 + 8) = 7471218;
    *(_QWORD *)(a2 + 16) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 32) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 120) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 136) = L"d3d10warp.dll";
    *(_DWORD *)(a2 + 24) = 7471218;
    *(_DWORD *)(a2 + 112) = 1966110;
    *(_DWORD *)(a2 + 128) = 1966110;
LABEL_53:
    LODWORD(v30) = 0;
    *(_QWORD *)(a2 + 96) = *(_QWORD *)(v8 + 4608);
    *(_QWORD *)(a2 + 104) = v8 + 2608;
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(v8 + 2548);
    *(_DWORD *)(a2 + 44) = *(_DWORD *)(v8 + 3344);
    *(_QWORD *)(a2 + 176) = *(_QWORD *)(v8 + 4616);
    *(_QWORD *)(a2 + 184) = *(_QWORD *)(v8 + 4624);
    *(_DWORD *)(a2 + 192) = *(_DWORD *)(v8 + 4632);
    *a4 = *(_OWORD *)(v8 + 1000);
    a4[1] = *(_OWORD *)(v8 + 1016);
    a4[2] = *(_OWORD *)(v8 + 1032);
    a4[3] = *(_OWORD *)(v8 + 1048);
    a4[4] = *(_OWORD *)(v8 + 1064);
    a4[5] = *(_OWORD *)(v8 + 1080);
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v8 + 2559) )
  {
    *(_DWORD *)(a2 + 8) = 8388736;
    *(_QWORD *)(a2 + 16) = L"DX9NotSupported.dll";
    *(_QWORD *)(a2 + 32) = L"DX9NotSupported.dll";
    *(_DWORD *)(a2 + 24) = 8388736;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 133LL) || *(_BYTE *)(v8 + 2561) )
    goto LABEL_53;
  *(_BYTE *)a2 = 1;
  v32 = DpiOpenPnpRegistryKey(a1, 2, 0x20019u, &Handle);
  v30 = v32;
  if ( v32 < 0 )
  {
    v72 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v72 + 24) = v30;
    WdLogEvent5_WdError(v72);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverName");
    v34 = DxgkRetrieveStringFromRegistry(Handle, &DestinationString);
    v30 = v34;
    if ( v34 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v74 = WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
        *(_QWORD *)(v74 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v74);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v44 = WdLogNewEntry5_WdEvent(v41, v40, v42, v43);
        *(_QWORD *)(v44 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v44);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v49 = WdLogNewEntry5_WdEvent(v46, v45, v47, v48);
        *(_QWORD *)(v49 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v49);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v75 = WdLogNewEntry5_WdEvent(v51, v50, v52, v53);
        *(_QWORD *)(v75 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v75);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v76 = WdLogNewEntry5_WdEvent(v55, v54, v56, v57);
        *(_QWORD *)(v76 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v76);
      }
      RtlInitUnicodeString(&DestinationString, L"ContentProtectionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v62 = WdLogNewEntry5_WdEvent(v59, v58, v60, v61);
        *(_QWORD *)(v62 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v62);
      }
      RtlInitUnicodeString(&DestinationString, L"MiracastCompanionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v67 = WdLogNewEntry5_WdEvent(v64, v63, v65, v66);
        *(_QWORD *)(v67 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v67);
      }
      ZwClose(Handle);
      if ( *(_QWORD *)(a2 + 56) )
      {
        v80[5] = 0LL;
        LODWORD(v80[4]) = 0x4000000;
        LODWORD(v80[11]) = 0x4000000;
        v80[2] = L"OpenGLVersion";
        LODWORD(v80[18]) = 0x4000000;
        v80[3] = a2 + 64;
        LODWORD(v80[25]) = 0x4000000;
        v80[9] = L"OpenGLFlags";
        LODWORD(v80[1]) = 288;
        v80[10] = a2 + 68;
        v80[16] = L"OpenGLVersionWow";
        v80[17] = a2 + 88;
        v80[23] = L"OpenGLFlagsWow";
        v80[24] = a2 + 92;
        LODWORD(v80[6]) = 0;
        LODWORD(v80[8]) = 288;
        v80[12] = 0LL;
        LODWORD(v80[13]) = 0;
        LODWORD(v80[15]) = 288;
        v80[19] = 0LL;
        LODWORD(v80[20]) = 0;
        LODWORD(v80[22]) = 288;
        v80[26] = 0LL;
        LODWORD(v80[27]) = 0;
        if ( (int)RtlQueryRegistryValuesEx(0LL, *(_QWORD *)(v8 + 536), v80, 0LL, 0LL) < 0 )
        {
          v77 = WdLogNewEntry5_WdEvent(v69, v68, v70, v71);
          *(_QWORD *)(v77 + 24) = RtlQueryRegistryValuesEx;
          WdLogEvent5_WdEvent(v77);
        }
      }
      goto LABEL_53;
    }
    v73 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v73 + 24) = v30;
    WdLogEvent5_WdError(v73);
    ZwClose(Handle);
  }
LABEL_54:
  if ( (int)v30 < 0 )
  {
    DpiFreeAdapterInfo(a2);
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 176) = 0LL;
  }
  return (unsigned int)v30;
}
