/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0079CD8
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0058550 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0059068 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4D44 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C006EB8C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     GreDeviceIoControlEx @ 0x1C007A620 (GreDeviceIoControlEx.c)
 *     RtlStringLengthWorkerW @ 0x1C0088CC0 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C00A74A4 (_wcsicmp.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(STRSAFE_PCNZWCH *Context, WCHAR *KeyHandle, int a3)
{
  int v3; // r14d
  NTSTATUS RegistryValues; // edi
  char v7; // r13
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  char *v9; // r14
  _DWORD *v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // eax
  _WORD *v13; // rdx
  int v15; // eax
  struct _RTL_QUERY_REGISTRY_TABLE *v16; // r8
  int v17; // eax
  struct _DEVICE_OBJECT *v18; // rcx
  unsigned int v19; // r9d
  struct _DEVICE_OBJECT *v20; // rcx
  const wchar_t *v21; // rcx
  wchar_t *v22; // rax
  __int64 v23; // rsi
  WCHAR *v24; // rax
  const WCHAR *v25; // r15
  STRSAFE_PCNZWCH v26; // rsi
  STRSAFE_PCNZWCH v27; // r12
  unsigned int v28; // r8d
  unsigned int v29; // r15d
  unsigned int v30; // ecx
  _WORD *v31; // rax
  unsigned int v32; // esi
  wchar_t *v33; // rax
  const wchar_t *v34; // r14
  STRSAFE_PCNZWCH v35; // rcx
  __int64 v36; // rcx
  wchar_t *v37; // rax
  STRSAFE_PCNZWCH v38; // rcx
  wchar_t *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h]
  int v44; // [rsp+4Ch] [rbp-B4h] BYREF
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v48; // [rsp+5Ch] [rbp-A4h]
  int v49; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v50; // [rsp+64h] [rbp-9Ch] BYREF
  size_t pcchLength; // [rsp+68h] [rbp-98h] BYREF
  void *InputBuffer[6]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  void *Src; // [rsp+A8h] [rbp-58h]
  ULONG v55; // [rsp+B0h] [rbp-50h] BYREF
  PCWSTR Path; // [rsp+B8h] [rbp-48h]
  struct _RTL_QUERY_REGISTRY_TABLE v57; // [rsp+D0h] [rbp-30h] BYREF
  int (*v58)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+108h] [rbp+8h] BYREF
  int v59; // [rsp+110h] [rbp+10h]
  const wchar_t *v60; // [rsp+118h] [rbp+18h]
  __int64 *v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  int v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  int v66; // [rsp+148h] [rbp+48h]
  _BYTE v67[40]; // [rsp+150h] [rbp+50h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+180h] [rbp+80h] BYREF
  __int64 v69; // [rsp+1B8h] [rbp+B8h]
  int v70; // [rsp+1C0h] [rbp+C0h]
  const wchar_t *v71; // [rsp+1C8h] [rbp+C8h]
  __int64 v72; // [rsp+1D0h] [rbp+D0h]
  int v73; // [rsp+1D8h] [rbp+D8h]
  __int64 v74; // [rsp+1E0h] [rbp+E0h]
  int v75; // [rsp+1E8h] [rbp+E8h]
  __int64 v76; // [rsp+1F0h] [rbp+F0h] BYREF
  int v77; // [rsp+1F8h] [rbp+F8h]
  const wchar_t *v78; // [rsp+200h] [rbp+100h]
  int *v79; // [rsp+208h] [rbp+108h]
  int v80; // [rsp+210h] [rbp+110h]
  int *v81; // [rsp+218h] [rbp+118h]
  int v82; // [rsp+220h] [rbp+120h]
  __int64 v83; // [rsp+228h] [rbp+128h]
  int v84; // [rsp+230h] [rbp+130h]
  const wchar_t *v85; // [rsp+238h] [rbp+138h]
  int *v86; // [rsp+240h] [rbp+140h]
  int v87; // [rsp+248h] [rbp+148h]
  int *v88; // [rsp+250h] [rbp+150h]
  int v89; // [rsp+258h] [rbp+158h]
  __int64 v90; // [rsp+260h] [rbp+160h]
  int v91; // [rsp+268h] [rbp+168h]
  const wchar_t *v92; // [rsp+270h] [rbp+170h]
  int *v93; // [rsp+278h] [rbp+178h]
  int v94; // [rsp+280h] [rbp+180h]
  int *v95; // [rsp+288h] [rbp+188h]
  int v96; // [rsp+290h] [rbp+190h]
  int (*v97)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+298h] [rbp+198h]
  int v98; // [rsp+2A0h] [rbp+1A0h]
  const wchar_t *v99; // [rsp+2A8h] [rbp+1A8h]
  __int64 v100; // [rsp+2B0h] [rbp+1B0h]
  int v101; // [rsp+2B8h] [rbp+1B8h]
  __int64 v102; // [rsp+2C0h] [rbp+1C0h]
  int v103; // [rsp+2C8h] [rbp+1C8h]
  int (*v104)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2D0h] [rbp+1D0h]
  int v105; // [rsp+2D8h] [rbp+1D8h]
  const wchar_t *v106; // [rsp+2E0h] [rbp+1E0h]
  __int64 v107; // [rsp+2E8h] [rbp+1E8h]
  int v108; // [rsp+2F0h] [rbp+1F0h]
  __int64 v109; // [rsp+2F8h] [rbp+1F8h]
  int v110; // [rsp+300h] [rbp+200h]
  int (*v111)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+308h] [rbp+208h]
  int v112; // [rsp+310h] [rbp+210h]
  const wchar_t *v113; // [rsp+318h] [rbp+218h]
  __int64 v114; // [rsp+320h] [rbp+220h]
  int v115; // [rsp+328h] [rbp+228h]
  __int64 v116; // [rsp+330h] [rbp+230h]
  int v117; // [rsp+338h] [rbp+238h]
  __int64 v118; // [rsp+340h] [rbp+240h]
  int v119; // [rsp+348h] [rbp+248h]
  const wchar_t *v120; // [rsp+350h] [rbp+250h]
  int *v121; // [rsp+358h] [rbp+258h]
  int v122; // [rsp+360h] [rbp+260h]
  int *v123; // [rsp+368h] [rbp+268h]
  int v124; // [rsp+370h] [rbp+270h]
  __int64 v125; // [rsp+378h] [rbp+278h]
  int v126; // [rsp+380h] [rbp+280h]
  _BYTE v127[40]; // [rsp+388h] [rbp+288h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v128; // [rsp+3B0h] [rbp+2B0h] BYREF
  int (*v129)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+3E8h] [rbp+2E8h]
  int v130; // [rsp+3F0h] [rbp+2F0h]
  const wchar_t *v131; // [rsp+3F8h] [rbp+2F8h]
  __int64 v132; // [rsp+400h] [rbp+300h]
  int v133; // [rsp+408h] [rbp+308h]
  __int64 v134; // [rsp+410h] [rbp+310h]
  int v135; // [rsp+418h] [rbp+318h]
  __int64 v136; // [rsp+420h] [rbp+320h]
  int v137; // [rsp+428h] [rbp+328h]
  const wchar_t *v138; // [rsp+430h] [rbp+330h]
  int *v139; // [rsp+438h] [rbp+338h]
  int v140; // [rsp+440h] [rbp+340h]
  int *v141; // [rsp+448h] [rbp+348h]
  int v142; // [rsp+450h] [rbp+350h]
  __int64 v143; // [rsp+458h] [rbp+358h]
  int v144; // [rsp+460h] [rbp+360h]
  const wchar_t *v145; // [rsp+468h] [rbp+368h]
  int *v146; // [rsp+470h] [rbp+370h]
  int v147; // [rsp+478h] [rbp+378h]
  int *v148; // [rsp+480h] [rbp+380h]
  int v149; // [rsp+488h] [rbp+388h]
  __int64 v150; // [rsp+490h] [rbp+390h]
  int v151; // [rsp+498h] [rbp+398h]
  _BYTE v152[40]; // [rsp+4A0h] [rbp+3A0h] BYREF

  QueryTable.Name = L"DriverDesc";
  v3 = a3;
  v43 = a3;
  v71 = L"Settings";
  v78 = L"MultiDisplayDriver";
  Path = KeyHandle;
  v79 = &v46;
  v45 = 0;
  v81 = &v45;
  v85 = L"MirrorDriver";
  v46 = 0;
  v42 = 0;
  v86 = &v42;
  RegistryValues = 0;
  v44 = 0;
  v88 = &v45;
  v7 = 0;
  v92 = L"AccDriver";
  v93 = &v44;
  v95 = &v45;
  v99 = L"Device Description";
  v106 = L"HardwareInformation.AdapterString";
  v47 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v69 = 0LL;
  v70 = 1;
  v72 = 0LL;
  v73 = 0;
  v74 = 0LL;
  v75 = 0;
  v76 = 0LL;
  v77 = 288;
  v80 = 67108868;
  v82 = 4;
  v83 = 0LL;
  v84 = 288;
  v87 = 67108868;
  v89 = 4;
  v90 = 0LL;
  v91 = 288;
  v94 = 67108868;
  v96 = 4;
  v97 = __EnumDisplayQueryRoutine;
  v98 = 16;
  v100 = 0LL;
  v101 = 0;
  v102 = 0LL;
  v103 = 0;
  v104 = __EnumDisplayQueryRoutine;
  v105 = 16;
  v107 = 0LL;
  v108 = 0;
  v109 = 0LL;
  v110 = 0;
  v113 = L"HardwareInformation.ChipType";
  v120 = L"TSCompatible";
  v121 = &v47;
  v111 = __EnumDisplayQueryRoutine;
  v119 = 288;
  v122 = 67108868;
  v123 = &v45;
  v112 = 16;
  v114 = 0LL;
  v115 = 0;
  v116 = 0LL;
  v117 = 0;
  v118 = 0LL;
  v124 = 4;
  v125 = 0LL;
  v126 = 0;
  memset(v127, 0, sizeof(v127));
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v76;
  if ( v3 )
    p_QueryTable = &QueryTable;
  RtlQueryRegistryValues(0x40000000u, KeyHandle, p_QueryTable, Context, 0LL);
  if ( !v3 && !*((_DWORD *)Context + 71) )
  {
    v9 = 0LL;
    RegistryValues = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &v50);
    if ( RegistryValues == -1073741789 )
    {
      v10 = PALLOCMEM2(v50, 1936876615LL, 0);
      if ( v10 )
      {
        RegistryValues = ZwQueryKey(KeyHandle, KeyNameInformation, v10, v50, &v55);
        if ( RegistryValues >= 0 )
        {
          v11 = 0LL;
          v12 = 0;
          if ( *v10 >> 1 )
          {
            v13 = v10 + 1;
            do
            {
              if ( *v13++ == 92 )
                v11 = v12;
              ++v12;
            }
            while ( v12 < *v10 >> 1 );
            if ( (_DWORD)v11 )
            {
              v49 = *(_DWORD *)L"eo";
              v48 = aVideo[6];
              pcchLength = *(_QWORD *)L"\\Video";
              v9 = (char *)PALLOCMEM2((unsigned int)(2 * v11 + 14), 1936876615LL, 0);
              if ( v9 )
              {
                memmove(v9, v10 + 1, (unsigned int)(2 * v11));
                v15 = v49;
                v7 = 0;
                *(_QWORD *)&v9[2 * v11] = pcchLength;
                *(_DWORD *)&v9[2 * v11 + 8] = v15;
                *(_WORD *)&v9[2 * v11 + 12] = v48;
              }
              else
              {
                RegistryValues = -1073741670;
                v7 = 0;
              }
            }
          }
        }
        Win32FreePool((__int64)v10);
      }
      else
      {
        RegistryValues = -1073741670;
      }
      if ( v9 )
      {
        v57.Flags = 16;
        v53 = 0LL;
        Src = 0LL;
        v57.EntryContext = 0LL;
        v57.QueryRoutine = __EnumDisplayQueryRoutine;
        v57.Name = L"DeviceDesc";
        v60 = L"Driver";
        v57.DefaultType = 0;
        v61 = &v53;
        v57.DefaultData = 0LL;
        v57.DefaultLength = 0;
        v58 = 0LL;
        v59 = 304;
        v62 = 16777217;
        v63 = 0LL;
        v64 = 0;
        v65 = 0LL;
        v66 = 0;
        memset(v67, 0, sizeof(v67));
        RegistryValues = RtlQueryRegistryValues(0, (PCWSTR)v9, &v57, Context, 0LL);
        if ( RegistryValues >= 0 )
        {
          v7 = 1;
          if ( (_WORD)v53 )
          {
            v23 = (unsigned int)(unsigned __int16)v53 + 12;
            pcchLength = *(_QWORD *)L"Class\\";
            v24 = (WCHAR *)PALLOCMEM2((unsigned int)(unsigned __int16)v53 + 14, 1936876615LL, 0);
            v25 = v24;
            if ( v24 )
            {
              *(_QWORD *)v24 = pcchLength;
              *((_DWORD *)v24 + 2) = *(_DWORD *)L"s\\";
              memmove(v24 + 6, Src, (unsigned __int16)v53);
              v128.Flags = 1;
              v128.QueryRoutine = 0LL;
              *(const WCHAR *)((char *)v25 + v23) = 0;
              v140 = 67108868;
              v137 = 288;
              v142 = 4;
              v128.Name = L"Settings";
              v129 = __DisplayDriverQueryRoutine;
              v131 = L"InstalledDisplayDrivers";
              v138 = L"MirrorDriver";
              v139 = &v42;
              v141 = &v45;
              v145 = L"AccDriver";
              v146 = &v44;
              v144 = 288;
              v147 = 67108868;
              v149 = 4;
              v148 = &v45;
              v128.EntryContext = 0LL;
              v128.DefaultType = 0;
              v128.DefaultData = 0LL;
              v128.DefaultLength = 0;
              v130 = 16;
              v132 = 0LL;
              v133 = 0;
              v134 = 0LL;
              v135 = 0;
              v136 = 0LL;
              v143 = 0LL;
              v150 = 0LL;
              v151 = 0;
              memset(v152, 0, sizeof(v152));
              RtlQueryRegistryValues(2u, v25, &v128, Context, 0LL);
              Win32FreePool((__int64)v25);
            }
            else
            {
              RegistryValues = -1073741670;
            }
          }
        }
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        Win32FreePool((__int64)v9);
        if ( v7 )
        {
          v26 = Context[27];
          if ( v26 )
          {
            if ( *((_DWORD *)Context + 71) )
            {
              RegistryValues = RtlStringLengthWorkerW(Context[27], 0x7FFFuLL, &pcchLength);
              if ( RegistryValues >= 0 )
              {
                v27 = v26;
                v28 = (unsigned __int16)(2 * pcchLength);
                v29 = 0;
                v30 = 0;
                if ( v28 >> 1 != 1 )
                {
                  v31 = v26;
                  while ( *v31 != 59 )
                  {
                    ++v30;
                    ++v31;
                    if ( v30 >= (v28 >> 1) - 1 )
                      goto LABEL_64;
                  }
                  v29 = v30 + 1;
                }
LABEL_64:
                v32 = v28 + 2 * (1 - v29);
                v33 = (wchar_t *)PALLOCMEM2(v32, 1936876615LL, 0);
                v34 = v33;
                if ( v33 )
                {
                  memmove(v33, &v27[v29], v32);
                  Win32FreePool((__int64)Context[27]);
                  Context[27] = v34;
                  *((_DWORD *)Context + 71) = v32;
                }
                else
                {
                  RegistryValues = -1073741670;
                  *((_DWORD *)Context + 71) = 0;
                }
              }
            }
          }
        }
      }
    }
    v3 = v43;
  }
  if ( ((_DWORD)Context[20] & 0x800000) != 0 )
  {
    v22 = (wchar_t *)PALLOCMEM2(0xAuLL, 1936876615LL, 0);
    Context[26] = v22;
    if ( !v22 )
      goto LABEL_91;
    *(_QWORD *)v22 = *(_QWORD *)L"cdd";
    v22[4] = 0;
    *((_DWORD *)Context + 70) = 10;
    RegistryValues = 0;
  }
  else
  {
    if ( !v44 && !v42 )
    {
      v58 = __DisplayDriverQueryRoutine;
      v57.QueryRoutine = 0LL;
      v57.Name = L"Settings";
      v57.Flags = 1;
      v57.EntryContext = 0LL;
      v57.DefaultType = 0;
      v57.DefaultData = 0LL;
      v57.DefaultLength = 0;
      v59 = 16;
      v60 = L"InstalledDisplayDrivers";
      v61 = 0LL;
      v62 = 0;
      v63 = 0LL;
      v64 = 0;
      v65 = 0LL;
      v66 = 0;
      memset(v67, 0, sizeof(v67));
      v16 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v58;
      if ( v3 )
        v16 = &v57;
      RegistryValues = RtlQueryRegistryValues(0x40000000u, Path, v16, Context, 0LL);
    }
    if ( RegistryValues < 0 )
      goto LABEL_91;
  }
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v17 = v42;
  v18 = (struct _DEVICE_OBJECT *)Context[17];
  if ( v44 )
    v17 = 1;
  v42 = v17;
  GreDeviceIoControlEx(v18, 0x23203Bu, 0LL, 0, InputBuffer, 0x30u, (__int64)&v49, 1u);
  v19 = (unsigned int)InputBuffer[3];
  if ( !LODWORD(InputBuffer[3]) || !InputBuffer[2] )
  {
    LODWORD(InputBuffer[0]) = v46;
    HIDWORD(InputBuffer[1]) = v47;
    InputBuffer[2] = (void *)Context[26];
    v20 = (struct _DEVICE_OBJECT *)Context[17];
    LODWORD(InputBuffer[3]) = *((_DWORD *)Context + 70);
    InputBuffer[4] = (void *)Context[27];
    LODWORD(InputBuffer[5]) = *((_DWORD *)Context + 71);
    HIDWORD(InputBuffer[0]) = (v44 != 0 ? 2 : 0) | (v42 != 0);
    LODWORD(InputBuffer[1]) = 0;
    GreDeviceIoControlEx(v20, 0x23203Fu, InputBuffer, 0x30u, 0LL, 0, (__int64)&v49, 1u);
    goto LABEL_34;
  }
  if ( v46 != LODWORD(InputBuffer[0])
    || (v42 != 0) != (BYTE4(InputBuffer[0]) & 1)
    || (v44 != 0 ? 2 : 0) != (BYTE4(InputBuffer[0]) & 2)
    || v47 != HIDWORD(InputBuffer[1]) )
  {
    v46 = (int)InputBuffer[0];
    v42 = BYTE4(InputBuffer[0]) & 1;
    v47 = HIDWORD(InputBuffer[1]);
    v44 = (BYTE4(InputBuffer[0]) >> 1) & 1;
  }
  v35 = Context[26];
  if ( !v35 || LODWORD(InputBuffer[3]) != *((_DWORD *)Context + 70) )
    goto LABEL_79;
  if ( RtlCompareMemory(v35, InputBuffer[2], LODWORD(InputBuffer[3])) != *((_DWORD *)Context + 70) )
  {
    v19 = (unsigned int)InputBuffer[3];
LABEL_79:
    v36 = (__int64)Context[26];
    if ( v36 )
    {
      Win32FreePool(v36);
      v19 = (unsigned int)InputBuffer[3];
    }
    v37 = (wchar_t *)PALLOCMEM2(v19, 1936876615LL, 0);
    Context[26] = v37;
    if ( v37 )
      memmove(v37, InputBuffer[2], LODWORD(InputBuffer[3]));
    else
      RegistryValues = -1073741670;
  }
  v38 = Context[27];
  if ( v38
    && InputBuffer[4]
    && (LODWORD(InputBuffer[5]) != *((_DWORD *)Context + 71)
     || RtlCompareMemory(v38, InputBuffer[4], LODWORD(InputBuffer[5])) != *((_DWORD *)Context + 71)) )
  {
    Win32FreePool((__int64)Context[27]);
    v39 = (wchar_t *)PALLOCMEM2(LODWORD(InputBuffer[5]), 1936876615LL, 0);
    Context[27] = v39;
    if ( v39 )
      memmove(v39, InputBuffer[4], LODWORD(InputBuffer[5]));
    else
      RegistryValues = -1073741670;
  }
LABEL_34:
  if ( RegistryValues >= 0 )
  {
    if ( v46 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v42 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v44 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v47 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v21 = Context[27];
    if ( v21 )
    {
      if ( !wcsicmp(v21, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_91:
  DrvLogDisplayDriverEvent(1);
  v40 = (__int64)Context[26];
  if ( v40 )
  {
    Win32FreePool(v40);
    Context[26] = 0LL;
  }
  v41 = (__int64)Context[27];
  if ( v41 )
  {
    Win32FreePool(v41);
    Context[27] = 0LL;
  }
}
