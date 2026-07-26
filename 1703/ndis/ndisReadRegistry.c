/*
 * XREFs of ndisReadRegistry @ 0x1C0111404
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 ndisReadRegistry()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 result; // rax
  _BYTE VersionInformation[284]; // [rsp+38h] [rbp-D0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+158h] [rbp+50h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+190h] [rbp+88h]
  int v7; // [rsp+198h] [rbp+90h]
  const wchar_t *v8; // [rsp+1A0h] [rbp+98h]
  ULONG *v9; // [rsp+1A8h] [rbp+A0h]
  int v10; // [rsp+1B0h] [rbp+A8h]
  ULONG *v11; // [rsp+1B8h] [rbp+B0h]
  int v12; // [rsp+1C0h] [rbp+B8h]
  __int64 (__fastcall *v13)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+1C8h] [rbp+C0h]
  _QWORD v14[7]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v15; // [rsp+208h] [rbp+100h]
  const wchar_t *v16; // [rsp+210h] [rbp+108h]
  unsigned int *v17; // [rsp+218h] [rbp+110h]
  int v18; // [rsp+220h] [rbp+118h]
  unsigned int *v19; // [rsp+228h] [rbp+120h]
  int v20; // [rsp+230h] [rbp+128h]
  __int64 v21; // [rsp+238h] [rbp+130h]
  _BYTE v22[48]; // [rsp+240h] [rbp+138h] BYREF
  _RTL_QUERY_REGISTRY_TABLE v23; // [rsp+278h] [rbp+170h] BYREF
  __int64 (__fastcall *v24)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+2B0h] [rbp+1A8h]
  int v25; // [rsp+2B8h] [rbp+1B0h]
  const wchar_t *v26; // [rsp+2C0h] [rbp+1B8h]
  int *v27; // [rsp+2C8h] [rbp+1C0h]
  int v28; // [rsp+2D0h] [rbp+1C8h]
  int *v29; // [rsp+2D8h] [rbp+1D0h]
  int v30; // [rsp+2E0h] [rbp+1D8h]
  __int64 (__fastcall *v31)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+2E8h] [rbp+1E0h]
  int v32; // [rsp+2F0h] [rbp+1E8h]
  const wchar_t *v33; // [rsp+2F8h] [rbp+1F0h]
  unsigned int *v34; // [rsp+300h] [rbp+1F8h]
  int v35; // [rsp+308h] [rbp+200h]
  unsigned int *v36; // [rsp+310h] [rbp+208h]
  int v37; // [rsp+318h] [rbp+210h]
  __int64 (__fastcall *v38)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+320h] [rbp+218h]
  int v39; // [rsp+328h] [rbp+220h]
  const wchar_t *v40; // [rsp+330h] [rbp+228h]
  enum _NDIS_PORT_CONTROL_STATE *v41; // [rsp+338h] [rbp+230h]
  int v42; // [rsp+340h] [rbp+238h]
  enum _NDIS_PORT_CONTROL_STATE *v43; // [rsp+348h] [rbp+240h]
  int v44; // [rsp+350h] [rbp+248h]
  __int64 (__fastcall *v45)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+358h] [rbp+250h]
  int v46; // [rsp+360h] [rbp+258h]
  const wchar_t *v47; // [rsp+368h] [rbp+260h]
  enum _NDIS_PORT_CONTROL_STATE *v48; // [rsp+370h] [rbp+268h]
  int v49; // [rsp+378h] [rbp+270h]
  enum _NDIS_PORT_CONTROL_STATE *v50; // [rsp+380h] [rbp+278h]
  int v51; // [rsp+388h] [rbp+280h]
  __int64 (__fastcall *v52)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+390h] [rbp+288h]
  int v53; // [rsp+398h] [rbp+290h]
  const wchar_t *v54; // [rsp+3A0h] [rbp+298h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v55; // [rsp+3A8h] [rbp+2A0h]
  int v56; // [rsp+3B0h] [rbp+2A8h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v57; // [rsp+3B8h] [rbp+2B0h]
  int v58; // [rsp+3C0h] [rbp+2B8h]
  __int64 (__fastcall *v59)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+3C8h] [rbp+2C0h]
  int v60; // [rsp+3D0h] [rbp+2C8h]
  const wchar_t *v61; // [rsp+3D8h] [rbp+2D0h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v62; // [rsp+3E0h] [rbp+2D8h]
  int v63; // [rsp+3E8h] [rbp+2E0h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v64; // [rsp+3F0h] [rbp+2E8h]
  int v65; // [rsp+3F8h] [rbp+2F0h]
  __int64 (__fastcall *v66)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+400h] [rbp+2F8h]
  int v67; // [rsp+408h] [rbp+300h]
  const wchar_t *v68; // [rsp+410h] [rbp+308h]
  void *v69; // [rsp+418h] [rbp+310h]
  int v70; // [rsp+420h] [rbp+318h]
  void *v71; // [rsp+428h] [rbp+320h]
  int v72; // [rsp+430h] [rbp+328h]
  __int64 (__fastcall *v73)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+438h] [rbp+330h]
  int v74; // [rsp+440h] [rbp+338h]
  const wchar_t *v75; // [rsp+448h] [rbp+340h]
  _LIST_ENTRY *p_DeviceListHead; // [rsp+450h] [rbp+348h]
  int v77; // [rsp+458h] [rbp+350h]
  _LIST_ENTRY *v78; // [rsp+460h] [rbp+358h]
  int v79; // [rsp+468h] [rbp+360h]
  __int64 (__fastcall *v80)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+470h] [rbp+368h]
  int v81; // [rsp+478h] [rbp+370h]
  const wchar_t *v82; // [rsp+480h] [rbp+378h]
  char *v83; // [rsp+488h] [rbp+380h]
  int v84; // [rsp+490h] [rbp+388h]
  char *v85; // [rsp+498h] [rbp+390h]
  int v86; // [rsp+4A0h] [rbp+398h]
  __int64 (__fastcall *v87)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+4A8h] [rbp+3A0h]
  int v88; // [rsp+4B0h] [rbp+3A8h]
  const wchar_t *v89; // [rsp+4B8h] [rbp+3B0h]
  unsigned int *v90; // [rsp+4C0h] [rbp+3B8h]
  int v91; // [rsp+4C8h] [rbp+3C0h]
  unsigned int *v92; // [rsp+4D0h] [rbp+3C8h]
  int v93; // [rsp+4D8h] [rbp+3D0h]
  __int64 (__fastcall *v94)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+4E0h] [rbp+3D8h]
  int v95; // [rsp+4E8h] [rbp+3E0h]
  const wchar_t *v96; // [rsp+4F0h] [rbp+3E8h]
  unsigned int *v97; // [rsp+4F8h] [rbp+3F0h]
  int v98; // [rsp+500h] [rbp+3F8h]
  unsigned int *v99; // [rsp+508h] [rbp+400h]
  int v100; // [rsp+510h] [rbp+408h]
  __int64 (__fastcall *v101)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+518h] [rbp+410h]
  int v102; // [rsp+520h] [rbp+418h]
  const wchar_t *v103; // [rsp+528h] [rbp+420h]
  unsigned int *v104; // [rsp+530h] [rbp+428h]
  int v105; // [rsp+538h] [rbp+430h]
  unsigned int *v106; // [rsp+540h] [rbp+438h]
  int v107; // [rsp+548h] [rbp+440h]
  __int64 (__fastcall *v108)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+550h] [rbp+448h]
  int v109; // [rsp+558h] [rbp+450h]
  const wchar_t *v110; // [rsp+560h] [rbp+458h]
  int *v111; // [rsp+568h] [rbp+460h]
  int v112; // [rsp+570h] [rbp+468h]
  int *v113; // [rsp+578h] [rbp+470h]
  int v114; // [rsp+580h] [rbp+478h]
  __int64 (__fastcall *v115)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+588h] [rbp+480h]
  int v116; // [rsp+590h] [rbp+488h]
  const wchar_t *v117; // [rsp+598h] [rbp+490h]
  unsigned int *v118; // [rsp+5A0h] [rbp+498h]
  int v119; // [rsp+5A8h] [rbp+4A0h]
  unsigned int *v120; // [rsp+5B0h] [rbp+4A8h]
  int v121; // [rsp+5B8h] [rbp+4B0h]
  __int64 (__fastcall *v122)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+5C0h] [rbp+4B8h]
  int v123; // [rsp+5C8h] [rbp+4C0h]
  const wchar_t *v124; // [rsp+5D0h] [rbp+4C8h]
  unsigned int *v125; // [rsp+5D8h] [rbp+4D0h]
  int v126; // [rsp+5E0h] [rbp+4D8h]
  unsigned int *v127; // [rsp+5E8h] [rbp+4E0h]
  int v128; // [rsp+5F0h] [rbp+4E8h]
  __int64 (__fastcall *v129)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+5F8h] [rbp+4F0h]
  int v130; // [rsp+600h] [rbp+4F8h]
  const wchar_t *v131; // [rsp+608h] [rbp+500h]
  unsigned int *v132; // [rsp+610h] [rbp+508h]
  int v133; // [rsp+618h] [rbp+510h]
  unsigned int *v134; // [rsp+620h] [rbp+518h]
  int v135; // [rsp+628h] [rbp+520h]
  __int64 (__fastcall *v136)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+630h] [rbp+528h]
  int v137; // [rsp+638h] [rbp+530h]
  const wchar_t *v138; // [rsp+640h] [rbp+538h]
  unsigned int *v139; // [rsp+648h] [rbp+540h]
  int v140; // [rsp+650h] [rbp+548h]
  unsigned int *v141; // [rsp+658h] [rbp+550h]
  int v142; // [rsp+660h] [rbp+558h]
  __int64 (__fastcall *v143)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+668h] [rbp+560h]
  int v144; // [rsp+670h] [rbp+568h]
  const wchar_t *v145; // [rsp+678h] [rbp+570h]
  unsigned int *v146; // [rsp+680h] [rbp+578h]
  int v147; // [rsp+688h] [rbp+580h]
  unsigned int *v148; // [rsp+690h] [rbp+588h]
  int v149; // [rsp+698h] [rbp+590h]
  __int64 (__fastcall *v150)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+6A0h] [rbp+598h]
  int v151; // [rsp+6A8h] [rbp+5A0h]
  const wchar_t *v152; // [rsp+6B0h] [rbp+5A8h]
  unsigned int *v153; // [rsp+6B8h] [rbp+5B0h]
  int v154; // [rsp+6C0h] [rbp+5B8h]
  unsigned int *v155; // [rsp+6C8h] [rbp+5C0h]
  int v156; // [rsp+6D0h] [rbp+5C8h]
  __int64 (__fastcall *v157)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+6D8h] [rbp+5D0h]
  int v158; // [rsp+6E0h] [rbp+5D8h]
  const wchar_t *v159; // [rsp+6E8h] [rbp+5E0h]
  unsigned int *v160; // [rsp+6F0h] [rbp+5E8h]
  int v161; // [rsp+6F8h] [rbp+5F0h]
  unsigned int *v162; // [rsp+700h] [rbp+5F8h]
  int v163; // [rsp+708h] [rbp+600h]
  __int64 (__fastcall *v164)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+710h] [rbp+608h]
  int v165; // [rsp+718h] [rbp+610h]
  const wchar_t *v166; // [rsp+720h] [rbp+618h]
  unsigned int *v167; // [rsp+728h] [rbp+620h]
  int v168; // [rsp+730h] [rbp+628h]
  unsigned int *v169; // [rsp+738h] [rbp+630h]
  int v170; // [rsp+740h] [rbp+638h]
  __int64 (__fastcall *v171)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+748h] [rbp+640h]
  int v172; // [rsp+750h] [rbp+648h]
  const wchar_t *v173; // [rsp+758h] [rbp+650h]
  void *v174; // [rsp+760h] [rbp+658h]
  int v175; // [rsp+768h] [rbp+660h]
  void *v176; // [rsp+770h] [rbp+668h]
  int v177; // [rsp+778h] [rbp+670h]
  __int64 (__fastcall *v178)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+780h] [rbp+678h]
  int v179; // [rsp+788h] [rbp+680h]
  const wchar_t *v180; // [rsp+790h] [rbp+688h]
  void *v181; // [rsp+798h] [rbp+690h]
  int v182; // [rsp+7A0h] [rbp+698h]
  void *v183; // [rsp+7A8h] [rbp+6A0h]
  int v184; // [rsp+7B0h] [rbp+6A8h]
  __int64 v185; // [rsp+7B8h] [rbp+6B0h]
  int v186; // [rsp+7C0h] [rbp+6B8h]
  const wchar_t *v187; // [rsp+7C8h] [rbp+6C0h]
  unsigned int *v188; // [rsp+7D0h] [rbp+6C8h]
  int v189; // [rsp+7D8h] [rbp+6D0h]
  void *v190; // [rsp+7E0h] [rbp+6D8h]
  int v191; // [rsp+7E8h] [rbp+6E0h]
  __int64 (__fastcall *v192)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+7F0h] [rbp+6E8h]
  int v193; // [rsp+7F8h] [rbp+6F0h]
  const wchar_t *v194; // [rsp+800h] [rbp+6F8h]
  unsigned __int8 *v195; // [rsp+808h] [rbp+700h]
  int v196; // [rsp+810h] [rbp+708h]
  unsigned __int8 *v197; // [rsp+818h] [rbp+710h]
  int v198; // [rsp+820h] [rbp+718h]
  __int64 (__fastcall *v199)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+828h] [rbp+720h]
  int v200; // [rsp+830h] [rbp+728h]
  const wchar_t *v201; // [rsp+838h] [rbp+730h]
  unsigned int *v202; // [rsp+840h] [rbp+738h]
  int v203; // [rsp+848h] [rbp+740h]
  unsigned int *v204; // [rsp+850h] [rbp+748h]
  int v205; // [rsp+858h] [rbp+750h]
  __int64 (__fastcall *v206)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+860h] [rbp+758h]
  int v207; // [rsp+868h] [rbp+760h]
  const wchar_t *v208; // [rsp+870h] [rbp+768h]
  unsigned int *v209; // [rsp+878h] [rbp+770h]
  int v210; // [rsp+880h] [rbp+778h]
  unsigned int *v211; // [rsp+888h] [rbp+780h]
  int v212; // [rsp+890h] [rbp+788h]
  __int64 (__fastcall *v213)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+898h] [rbp+790h]
  int v214; // [rsp+8A0h] [rbp+798h]
  const wchar_t *v215; // [rsp+8A8h] [rbp+7A0h]
  unsigned int *v216; // [rsp+8B0h] [rbp+7A8h]
  int v217; // [rsp+8B8h] [rbp+7B0h]
  unsigned int *v218; // [rsp+8C0h] [rbp+7B8h]
  int v219; // [rsp+8C8h] [rbp+7C0h]
  __int64 (__fastcall *v220)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+8D0h] [rbp+7C8h]
  int v221; // [rsp+8D8h] [rbp+7D0h]
  const wchar_t *v222; // [rsp+8E0h] [rbp+7D8h]
  unsigned int *v223; // [rsp+8E8h] [rbp+7E0h]
  int v224; // [rsp+8F0h] [rbp+7E8h]
  unsigned int *v225; // [rsp+8F8h] [rbp+7F0h]
  int v226; // [rsp+900h] [rbp+7F8h]
  __int64 (__fastcall *v227)(__int64, int, _DWORD *, __int64, int, _DWORD *); // [rsp+908h] [rbp+800h]
  int v228; // [rsp+910h] [rbp+808h]
  const wchar_t *v229; // [rsp+918h] [rbp+810h]
  unsigned int *v230; // [rsp+920h] [rbp+818h]
  int v231; // [rsp+928h] [rbp+820h]
  unsigned int *v232; // [rsp+930h] [rbp+828h]
  int v233; // [rsp+938h] [rbp+830h]
  __int64 v234; // [rsp+940h] [rbp+838h]
  _BYTE v235[48]; // [rsp+948h] [rbp+840h] BYREF

  memset(VersionInformation, 0, sizeof(VersionInformation));
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = L"MediaTypes";
  QueryTable.Flags = 1;
  memset(&QueryTable.EntryContext, 0, 0x20uLL);
  v7 = 20;
  v6 = ndisAddMediaTypeToArray;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 4;
  v11 = (ULONG *)&unk_1C0093E30;
  v12 = 0;
  v13 = 0LL;
  memset(v14, 0, 0x30uLL);
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  v23.QueryRoutine = 0LL;
  v23.Name = L"Parameters";
  v23.Flags = 1;
  memset(&v23.EntryContext, 0, 0x20uLL);
  v28 = 4;
  v24 = ndisReadRegParameters;
  v25 = 16;
  v26 = L"Flags";
  v27 = &ndisFlags;
  v29 = &ndisFlags;
  v33 = L"PacketStackSize";
  v34 = &ndisPacketStackSize;
  v36 = &ndisPacketStackSize;
  v40 = L"PortAuthSendControlState";
  v41 = &ndisGlobalPortSendControlState;
  v43 = &ndisGlobalPortSendControlState;
  v47 = L"PortAuthReceiveControlState";
  v48 = &ndisGlobalPortReceiveControlState;
  v50 = &ndisGlobalPortReceiveControlState;
  v30 = 0;
  v31 = ndisReadRegParameters;
  v32 = 16;
  v35 = 4;
  v37 = 0;
  v38 = ndisReadRegParameters;
  v39 = 16;
  v42 = 4;
  v44 = 0;
  v45 = ndisReadRegParameters;
  v46 = 16;
  v49 = 4;
  v51 = 0;
  v54 = L"PortAuthSendAuthorizationState";
  v55 = &ndisGlobalPortSendAuthorizationState;
  v57 = &ndisGlobalPortSendAuthorizationState;
  v61 = L"PortAuthReceiveAuthorizationState";
  v62 = &ndisGlobalPortReceiveAuthorizationState;
  v64 = &ndisGlobalPortReceiveAuthorizationState;
  v68 = L"MaxNumFilters";
  v69 = &ndisMaxNumberFilterPerAdapter;
  v71 = &ndisMaxNumberFilterPerAdapter;
  v75 = L"ReceiveWorkerThreadPriority";
  p_DeviceListHead = &WPP_MAIN_CB.DeviceQueue.DeviceListHead;
  v78 = &WPP_MAIN_CB.DeviceQueue.DeviceListHead;
  v82 = L"ReceiveWorkerDisableAutoStart";
  v83 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink + 4;
  v85 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink + 4;
  v89 = L"DefaultPnPCapabilities";
  v90 = &ndisDefaultPnPCapabilities;
  v92 = &ndisDefaultPnPCapabilities;
  v96 = L"NoPauseOnSuspend";
  v97 = &ndisNoPauseOnSuspend;
  v99 = &ndisNoPauseOnSuspend;
  v103 = L"NxPool";
  v104 = &ndisNxPool;
  v106 = &ndisNxPool;
  v110 = L"MaxCachedNblContextSize";
  v111 = &ndisMaxCachedNblContextSize;
  v113 = &ndisMaxCachedNblContextSize;
  v52 = ndisReadRegParameters;
  v53 = 16;
  v56 = 4;
  v58 = 0;
  v59 = ndisReadRegParameters;
  v60 = 16;
  v63 = 4;
  v65 = 0;
  v66 = ndisReadRegParameters;
  v67 = 16;
  v70 = 4;
  v72 = 0;
  v73 = ndisReadRegParameters;
  v74 = 16;
  v77 = 4;
  v79 = 0;
  v80 = ndisReadRegParameters;
  v81 = 16;
  v84 = 4;
  v86 = 0;
  v87 = ndisReadRegParameters;
  v88 = 16;
  v91 = 4;
  v93 = 0;
  v94 = ndisReadRegParameters;
  v95 = 16;
  v98 = 4;
  v100 = 0;
  v101 = ndisReadRegParameters;
  v102 = 16;
  v105 = 4;
  v107 = 0;
  v108 = ndisReadRegParameters;
  v109 = 16;
  v112 = 4;
  v114 = 0;
  v117 = L"NicQuietInitTimeoutMs";
  v118 = &ndisNicQuietInitTimeout;
  v120 = &ndisNicQuietInitTimeout;
  v124 = L"NicQuietWakeTimeoutMs";
  v125 = &ndisNicQuietWakeTimeout;
  v127 = &ndisNicQuietWakeTimeout;
  v131 = L"NicQuietDerefDefaultTimeoutMs";
  v132 = &ndisNicQuietDerefDefaultTimeout;
  v134 = &ndisNicQuietDerefDefaultTimeout;
  v138 = L"NicQuietDerefExtendedTimeoutMs";
  v139 = &ndisNicQuietDerefExtendedTimeout;
  v141 = &ndisNicQuietDerefExtendedTimeout;
  v145 = L"StartDeviceSync";
  v146 = &ndisStartDeviceSync;
  v148 = &ndisStartDeviceSync;
  v152 = L"AllowWakeFromS5";
  v153 = &ndisAllowWakeFromS5;
  v155 = &ndisAllowWakeFromS5;
  v159 = L"DebugLoggingMode";
  v160 = &ndisDebugLoggingMode;
  v162 = &ndisDebugLoggingMode;
  v166 = L"DisableIterativeDataPath";
  v167 = &ndisIterativeDataPathDisabled;
  v169 = &ndisIterativeDataPathDisabled;
  v173 = L"StackExpansionFaultInjectionRatio";
  v174 = &ndisStackExpansionFaultInjectionRatio;
  v176 = &ndisStackExpansionFaultInjectionRatio;
  v115 = ndisReadRegParameters;
  v116 = 16;
  v119 = 4;
  v121 = 0;
  v122 = ndisReadRegParameters;
  v123 = 16;
  v126 = 4;
  v128 = 0;
  v129 = ndisReadRegParameters;
  v130 = 16;
  v133 = 4;
  v135 = 0;
  v136 = ndisReadRegParameters;
  v137 = 16;
  v140 = 4;
  v142 = 0;
  v143 = ndisReadRegParameters;
  v144 = 16;
  v147 = 4;
  v149 = 0;
  v150 = ndisReadRegParameters;
  v151 = 16;
  v154 = 4;
  v156 = 0;
  v157 = ndisReadRegParameters;
  v158 = 16;
  v161 = 4;
  v163 = 0;
  v164 = ndisReadRegParameters;
  v165 = 16;
  v168 = 4;
  v170 = 0;
  v171 = ndisReadRegParameters;
  v172 = 16;
  v175 = 4;
  v190 = &unk_1C0093E30;
  v180 = L"StackExpansionFaultInjectionLevel";
  v177 = 0;
  v181 = &ndisStackExpansionFaultInjectionLevel;
  v183 = &ndisStackExpansionFaultInjectionLevel;
  v178 = ndisReadRegParameters;
  v187 = L"AllowFlowControlUnderDebugger";
  v179 = 16;
  v188 = &ndisAllowFlowControl;
  v194 = L"SriovSupportTestOverride";
  v195 = &ndisSriovSupportTestOverride;
  v197 = &ndisSriovSupportTestOverride;
  v201 = L"EnableNicAutoPowerSaverInSleepStudy";
  v202 = &ndisEnableNicAutoPowerSaverInSleepStudy;
  v204 = &ndisEnableNicAutoPowerSaverInSleepStudy;
  v208 = L"DisableNaps";
  v209 = &ndisDefaultNapsState;
  v211 = &ndisDefaultNapsState;
  v215 = L"AOACTestOverride";
  v216 = &ndisAoAcTestOverride;
  v218 = &ndisAoAcTestOverride;
  v222 = L"EnableScreenOnNaps";
  v223 = &ndisIsScreenOnNapsEnabled;
  v225 = &ndisIsScreenOnNapsEnabled;
  v229 = L"DisableWDIWatchdogForceBugcheck";
  v230 = &ndisWatchdogForceBugCheckForWDI;
  v232 = &ndisWatchdogForceBugCheckForWDI;
  v182 = 4;
  v184 = 0;
  v185 = 0LL;
  v186 = 288;
  v189 = 67108868;
  v191 = 4;
  v192 = ndisReadRegParameters;
  v193 = 16;
  v196 = 4;
  v198 = 0;
  v199 = ndisReadRegParameters;
  v200 = 16;
  v203 = 4;
  v205 = 0;
  v206 = ndisReadRegParameters;
  v207 = 16;
  v210 = 4;
  v212 = 0;
  v213 = ndisReadRegParameters;
  v214 = 16;
  v217 = 4;
  v219 = 0;
  v220 = ndisReadRegParameters;
  v221 = 16;
  v224 = 4;
  v226 = 0;
  v227 = ndisReadRegParameters;
  v228 = 16;
  v231 = 4;
  v233 = 0;
  v234 = 0LL;
  memset(v235, 0, sizeof(v235));
  RtlQueryRegistryValuesEx(1u, L"NDIS", &v23, 0LL, 0LL);
  if ( ndisAoAcTestOverride == 1 )
    ndisAoAcTest = 1;
  v0 = ndisPacketStackSize;
  if ( !ndisPacketStackSize )
  {
    v0 = 1;
    ndisPacketStackSize = 1;
  }
  if ( v0 >= 6 )
    ndisPacketStackSize = 6;
  *(_DWORD *)VersionInformation = 284;
  RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  if ( ndisNoPauseOnSuspend == 0xFFFFFF )
    ndisNoPauseOnSuspend = VersionInformation[282] == 1;
  if ( ndisDebugLoggingMode >= 3 )
    ndisDebugLoggingMode = 0;
  if ( !ndisNxPool )
  {
    ndisDriverPoolType = NonPagedPool;
    ndisMdlMappingNxFlag = 0;
  }
  if ( !(_BYTE)KdDebuggerEnabled )
    ndisAllowFlowControl = 1;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 1;
  QueryTable.Name = L"Parameters";
  memset(&QueryTable.EntryContext, 0, 0x20uLL);
  v6 = (__int64 (__fastcall *)())ndisReadRegParameters;
  v8 = L"RssBaseCpu";
  v7 = 16;
  v9 = &ndisRssBaseCpu;
  v11 = &ndisRssBaseCpu;
  v10 = 4;
  v14[1] = L"MaxNumRssCpus";
  v14[2] = &ndisMaxNumRssCpus;
  v14[4] = &ndisMaxNumRssCpus;
  v16 = L"PadShortPackets";
  v17 = &ndisPadShortPackets;
  v19 = &ndisPadShortPackets;
  v12 = 0;
  v13 = ndisReadRegParameters;
  LODWORD(v14[0]) = 16;
  LODWORD(v14[3]) = 4;
  LODWORD(v14[5]) = 0;
  v14[6] = ndisReadRegParameters;
  v15 = 16;
  v18 = 4;
  v20 = 0;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  v1 = ndisMaxNumRssCpus;
  if ( !ndisMaxNumRssCpus )
  {
    v1 = 1;
    ndisMaxNumRssCpus = 1;
  }
  if ( v1 > ndisNumberOfActiveProcessorsAtBoot )
  {
    v1 = ndisNumberOfActiveProcessorsAtBoot;
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot;
  }
  if ( v1 > 0x280 )
  {
    v1 = 640;
    ndisMaxNumRssCpus = 640;
  }
  v2 = ndisRssBaseCpu;
  if ( ndisRssBaseCpu >= ndisNumberOfActiveProcessorsAtBoot )
  {
    v2 = ndisNumberOfActiveProcessorsAtBoot - 1;
    ndisRssBaseCpu = ndisNumberOfActiveProcessorsAtBoot - 1;
  }
  if ( v2 + v1 > ndisNumberOfActiveProcessorsAtBoot )
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot - v2;
  result = (unsigned int)(LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) - 1);
  if ( (unsigned int)result > 0x1E )
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 8;
  return result;
}
