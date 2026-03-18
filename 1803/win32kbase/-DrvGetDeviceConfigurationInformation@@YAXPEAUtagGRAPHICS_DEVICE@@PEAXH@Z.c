/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00CF1DC
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00424C0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CC81C (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C0074044 (_wcsicmp.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00CFE64 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     RtlStringLengthWorkerW @ 0x1C00D22A4 (RtlStringLengthWorkerW.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(STRSAFE_PCNZWCH *Context, WCHAR *Path, int a3)
{
  int v3; // esi
  WCHAR *v4; // r14
  NTSTATUS Key; // edi
  char v7; // r13
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  void *v9; // rdx
  __int64 v10; // r8
  char *v11; // rsi
  _DWORD *v12; // r14
  __int64 v13; // r15
  unsigned int v14; // ecx
  _WORD *v15; // r8
  bool v16; // zf
  unsigned int v17; // eax
  unsigned int v18; // r13d
  unsigned int v19; // eax
  __int64 v20; // r14
  WCHAR *v21; // rax
  const WCHAR *v22; // r15
  STRSAFE_PCNZWCH v23; // rsi
  STRSAFE_PCNZWCH v24; // r12
  unsigned int v25; // r8d
  unsigned int v26; // r15d
  unsigned int v27; // ecx
  _WORD *v28; // rax
  unsigned int v29; // esi
  wchar_t *v30; // rax
  const wchar_t *v31; // r14
  wchar_t *v32; // rax
  struct _RTL_QUERY_REGISTRY_TABLE *v33; // r8
  int v34; // eax
  struct _DEVICE_OBJECT *v35; // rcx
  unsigned int v36; // r9d
  STRSAFE_PCNZWCH v37; // rcx
  __int64 v38; // rcx
  wchar_t *v39; // rax
  STRSAFE_PCNZWCH v40; // rcx
  wchar_t *v41; // rax
  struct _DEVICE_OBJECT *v42; // rcx
  const wchar_t *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  int v49; // [rsp+60h] [rbp-A0h] BYREF
  int v50; // [rsp+64h] [rbp-9Ch] BYREF
  int v51; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h]
  wchar_t v53; // [rsp+78h] [rbp-88h]
  unsigned int v54; // [rsp+7Ch] [rbp-84h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  size_t pcchLength; // [rsp+88h] [rbp-78h] BYREF
  void *InputBuffer[6]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h] BYREF
  void *Src; // [rsp+C8h] [rbp-38h]
  ULONG v60[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v61; // [rsp+F0h] [rbp-10h] BYREF
  int (*v62)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+128h] [rbp+28h] BYREF
  int v63; // [rsp+130h] [rbp+30h]
  const wchar_t *v64; // [rsp+138h] [rbp+38h]
  __int64 *v65; // [rsp+140h] [rbp+40h]
  int v66; // [rsp+148h] [rbp+48h]
  __int64 v67; // [rsp+150h] [rbp+50h]
  int v68; // [rsp+158h] [rbp+58h]
  __int64 v69; // [rsp+160h] [rbp+60h]
  int v70; // [rsp+168h] [rbp+68h]
  _BYTE v71[40]; // [rsp+170h] [rbp+70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v73; // [rsp+1D8h] [rbp+D8h]
  int v74; // [rsp+1E0h] [rbp+E0h]
  const wchar_t *v75; // [rsp+1E8h] [rbp+E8h]
  __int64 v76; // [rsp+1F0h] [rbp+F0h]
  int v77; // [rsp+1F8h] [rbp+F8h]
  __int64 v78; // [rsp+200h] [rbp+100h]
  int v79; // [rsp+208h] [rbp+108h]
  __int64 v80; // [rsp+210h] [rbp+110h] BYREF
  int v81; // [rsp+218h] [rbp+118h]
  const wchar_t *v82; // [rsp+220h] [rbp+120h]
  int *v83; // [rsp+228h] [rbp+128h]
  int v84; // [rsp+230h] [rbp+130h]
  int *v85; // [rsp+238h] [rbp+138h]
  int v86; // [rsp+240h] [rbp+140h]
  __int64 v87; // [rsp+248h] [rbp+148h]
  int v88; // [rsp+250h] [rbp+150h]
  const wchar_t *v89; // [rsp+258h] [rbp+158h]
  int *v90; // [rsp+260h] [rbp+160h]
  int v91; // [rsp+268h] [rbp+168h]
  int *v92; // [rsp+270h] [rbp+170h]
  int v93; // [rsp+278h] [rbp+178h]
  __int64 v94; // [rsp+280h] [rbp+180h]
  int v95; // [rsp+288h] [rbp+188h]
  const wchar_t *v96; // [rsp+290h] [rbp+190h]
  int *v97; // [rsp+298h] [rbp+198h]
  int v98; // [rsp+2A0h] [rbp+1A0h]
  int *v99; // [rsp+2A8h] [rbp+1A8h]
  int v100; // [rsp+2B0h] [rbp+1B0h]
  int (*v101)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2B8h] [rbp+1B8h]
  int v102; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v103; // [rsp+2C8h] [rbp+1C8h]
  __int64 v104; // [rsp+2D0h] [rbp+1D0h]
  int v105; // [rsp+2D8h] [rbp+1D8h]
  __int64 v106; // [rsp+2E0h] [rbp+1E0h]
  int v107; // [rsp+2E8h] [rbp+1E8h]
  int (*v108)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2F0h] [rbp+1F0h]
  int v109; // [rsp+2F8h] [rbp+1F8h]
  const wchar_t *v110; // [rsp+300h] [rbp+200h]
  __int64 v111; // [rsp+308h] [rbp+208h]
  int v112; // [rsp+310h] [rbp+210h]
  __int64 v113; // [rsp+318h] [rbp+218h]
  int v114; // [rsp+320h] [rbp+220h]
  int (*v115)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+328h] [rbp+228h]
  int v116; // [rsp+330h] [rbp+230h]
  const wchar_t *v117; // [rsp+338h] [rbp+238h]
  __int64 v118; // [rsp+340h] [rbp+240h]
  int v119; // [rsp+348h] [rbp+248h]
  __int64 v120; // [rsp+350h] [rbp+250h]
  int v121; // [rsp+358h] [rbp+258h]
  __int64 v122; // [rsp+360h] [rbp+260h]
  int v123; // [rsp+368h] [rbp+268h]
  const wchar_t *v124; // [rsp+370h] [rbp+270h]
  int *v125; // [rsp+378h] [rbp+278h]
  int v126; // [rsp+380h] [rbp+280h]
  int *v127; // [rsp+388h] [rbp+288h]
  int v128; // [rsp+390h] [rbp+290h]
  __int64 v129; // [rsp+398h] [rbp+298h]
  int v130; // [rsp+3A0h] [rbp+2A0h]
  _BYTE v131[40]; // [rsp+3A8h] [rbp+2A8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v132; // [rsp+3D0h] [rbp+2D0h] BYREF
  int (*v133)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+408h] [rbp+308h]
  int v134; // [rsp+410h] [rbp+310h]
  const wchar_t *v135; // [rsp+418h] [rbp+318h]
  __int64 v136; // [rsp+420h] [rbp+320h]
  int v137; // [rsp+428h] [rbp+328h]
  __int64 v138; // [rsp+430h] [rbp+330h]
  int v139; // [rsp+438h] [rbp+338h]
  __int64 v140; // [rsp+440h] [rbp+340h]
  int v141; // [rsp+448h] [rbp+348h]
  const wchar_t *v142; // [rsp+450h] [rbp+350h]
  int *v143; // [rsp+458h] [rbp+358h]
  int v144; // [rsp+460h] [rbp+360h]
  int *v145; // [rsp+468h] [rbp+368h]
  int v146; // [rsp+470h] [rbp+370h]
  __int64 v147; // [rsp+478h] [rbp+378h]
  int v148; // [rsp+480h] [rbp+380h]
  const wchar_t *v149; // [rsp+488h] [rbp+388h]
  int *v150; // [rsp+490h] [rbp+390h]
  int v151; // [rsp+498h] [rbp+398h]
  int *v152; // [rsp+4A0h] [rbp+3A0h]
  int v153; // [rsp+4A8h] [rbp+3A8h]
  __int64 v154; // [rsp+4B0h] [rbp+3B0h]
  int v155; // [rsp+4B8h] [rbp+3B8h]
  _BYTE v156[40]; // [rsp+4C0h] [rbp+3C0h] BYREF

  QueryTable.Name = L"DriverDesc";
  v3 = a3;
  v82 = L"MultiDisplayDriver";
  v4 = Path;
  v47 = a3;
  v83 = &v50;
  KeyHandle = Path;
  v49 = 0;
  v50 = 0;
  v85 = &v49;
  v89 = L"MirrorDriver";
  Key = 0;
  v46 = 0;
  v90 = &v46;
  v7 = 0;
  v48 = 0;
  v92 = &v49;
  v96 = L"AccDriver";
  v97 = &v48;
  v99 = &v49;
  v103 = L"Device Description";
  v110 = L"HardwareInformation.AdapterString";
  v51 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v73 = 0LL;
  v74 = 1;
  v75 = L"Settings";
  v76 = 0LL;
  v77 = 0;
  v78 = 0LL;
  v79 = 0;
  v80 = 0LL;
  v81 = 288;
  v84 = 67108868;
  v86 = 4;
  v87 = 0LL;
  v88 = 288;
  v91 = 67108868;
  v93 = 4;
  v94 = 0LL;
  v95 = 288;
  v98 = 67108868;
  v100 = 4;
  v101 = __EnumDisplayQueryRoutine;
  v102 = 16;
  v104 = 0LL;
  v105 = 0;
  v106 = 0LL;
  v107 = 0;
  v108 = __EnumDisplayQueryRoutine;
  v109 = 16;
  v111 = 0LL;
  v112 = 0;
  v113 = 0LL;
  v114 = 0;
  v115 = __EnumDisplayQueryRoutine;
  v116 = 16;
  v117 = L"HardwareInformation.ChipType";
  v124 = L"TSCompatible";
  v125 = &v51;
  v123 = 288;
  v126 = 67108868;
  v127 = &v49;
  v118 = 0LL;
  v119 = 0;
  v120 = 0LL;
  v121 = 0;
  v122 = 0LL;
  v128 = 4;
  v129 = 0LL;
  v130 = 0;
  memset(v131, 0, sizeof(v131));
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v80;
  if ( v3 )
    p_QueryTable = &QueryTable;
  RtlQueryRegistryValues(0x40000000u, v4, p_QueryTable, Context, 0LL);
  if ( !v3 && !*((_DWORD *)Context + 67) )
  {
    v11 = 0LL;
    Key = ZwQueryKey(v4, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( Key == -1073741789 )
    {
      v12 = PALLOCMEM2(ResultLength, 0x73726447u, 0);
      if ( v12 )
      {
        Key = ZwQueryKey(KeyHandle, KeyNameInformation, v12, ResultLength, v60);
        if ( Key >= 0 )
        {
          LODWORD(v13) = 0;
          v14 = 0;
          if ( *v12 >> 1 )
          {
            v15 = v12 + 1;
            do
            {
              v16 = *v15 == 92;
              v17 = v14;
              ++v15;
              if ( !v16 )
                v17 = v13;
              ++v14;
              v13 = v17;
            }
            while ( v14 < *v12 >> 1 );
            if ( v17 )
            {
              v18 = 2 * v17;
              v54 = *(_DWORD *)L"eo";
              v53 = aVideo[6];
              pcchLength = *(_QWORD *)L"\\Video";
              v11 = (char *)PALLOCMEM2(2 * v17 + 14, 0x73726447u, 0);
              if ( v11 )
              {
                memmove(v11, v12 + 1, v18);
                v19 = v54;
                v7 = 0;
                *(_QWORD *)&v11[2 * v13] = pcchLength;
                *(_DWORD *)&v11[2 * v13 + 8] = v19;
                *(_WORD *)&v11[2 * v13 + 12] = v53;
              }
              else
              {
                Key = -1073741670;
                v7 = 0;
              }
            }
          }
        }
        Win32FreePool((__int64)v12);
      }
      else
      {
        Key = -1073741670;
      }
      if ( v11 )
      {
        v61.Flags = 16;
        v58 = 0LL;
        Src = 0LL;
        v61.EntryContext = 0LL;
        v61.QueryRoutine = __EnumDisplayQueryRoutine;
        v61.Name = L"DeviceDesc";
        v64 = L"Driver";
        v61.DefaultType = 0;
        v65 = &v58;
        v61.DefaultData = 0LL;
        v61.DefaultLength = 0;
        v62 = 0LL;
        v63 = 304;
        v66 = 16777217;
        v67 = 0LL;
        v68 = 0;
        v69 = 0LL;
        v70 = 0;
        memset(v71, 0, sizeof(v71));
        Key = RtlQueryRegistryValues(0, (PCWSTR)v11, &v61, Context, 0LL);
        if ( Key >= 0 )
        {
          v7 = 1;
          if ( (_WORD)v58 )
          {
            v20 = (unsigned int)(unsigned __int16)v58 + 12;
            pcchLength = *(_QWORD *)L"Class\\";
            v21 = (WCHAR *)PALLOCMEM2((unsigned int)(unsigned __int16)v58 + 14, 0x73726447u, 0);
            v22 = v21;
            if ( v21 )
            {
              *(_QWORD *)v21 = pcchLength;
              *((_DWORD *)v21 + 2) = *(_DWORD *)L"s\\";
              memmove(v21 + 6, Src, (unsigned __int16)v58);
              v132.Flags = 1;
              v132.QueryRoutine = 0LL;
              *(const WCHAR *)((char *)v22 + v20) = 0;
              v144 = 67108868;
              v141 = 288;
              v146 = 4;
              v132.Name = L"Settings";
              v133 = __DisplayDriverQueryRoutine;
              v135 = L"InstalledDisplayDrivers";
              v142 = L"MirrorDriver";
              v143 = &v46;
              v145 = &v49;
              v149 = L"AccDriver";
              v150 = &v48;
              v148 = 288;
              v151 = 67108868;
              v153 = 4;
              v152 = &v49;
              v132.EntryContext = 0LL;
              v132.DefaultType = 0;
              v132.DefaultData = 0LL;
              v132.DefaultLength = 0;
              v134 = 16;
              v136 = 0LL;
              v137 = 0;
              v138 = 0LL;
              v139 = 0;
              v140 = 0LL;
              v147 = 0LL;
              v154 = 0LL;
              v155 = 0;
              memset(v156, 0, sizeof(v156));
              RtlQueryRegistryValues(2u, v22, &v132, Context, 0LL);
              Win32FreePool((__int64)v22);
            }
            else
            {
              Key = -1073741670;
            }
          }
        }
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        Win32FreePool((__int64)v11);
        if ( v7 )
        {
          v23 = Context[26];
          if ( v23 )
          {
            if ( *((_DWORD *)Context + 67) )
            {
              Key = RtlStringLengthWorkerW(Context[26], 0x7FFFuLL, &pcchLength);
              if ( Key >= 0 )
              {
                v24 = v23;
                v25 = (unsigned __int16)(2 * pcchLength);
                v26 = 0;
                v27 = 0;
                if ( v25 >> 1 != 1 )
                {
                  v28 = v23;
                  while ( 1 )
                  {
                    ++v27;
                    if ( *v28 == 59 )
                      break;
                    ++v28;
                    if ( v27 >= (v25 >> 1) - 1 )
                      goto LABEL_37;
                  }
                  v26 = v27;
                }
LABEL_37:
                v29 = v25 + 2 * (1 - v26);
                v30 = (wchar_t *)PALLOCMEM2(v29, 0x73726447u, 0);
                v31 = v30;
                if ( v30 )
                {
                  memmove(v30, &v24[v26], v29);
                  Win32FreePool((__int64)Context[26]);
                  Context[26] = v31;
                  *((_DWORD *)Context + 67) = v29;
                }
                else
                {
                  Key = -1073741670;
                  *((_DWORD *)Context + 67) = 0;
                }
              }
            }
          }
        }
      }
      v4 = (WCHAR *)KeyHandle;
    }
    v3 = v47;
  }
  if ( ((_DWORD)Context[20] & 0x800000) != 0 )
  {
    v32 = (wchar_t *)PALLOCMEM2(0xAuLL, 0x73726447u, 0);
    Context[25] = v32;
    if ( !v32 )
      goto LABEL_89;
    *(_QWORD *)v32 = *(_QWORD *)L"cdd";
    v32[4] = 0;
    *((_DWORD *)Context + 66) = 10;
    Key = 0;
  }
  else
  {
    if ( !v48 && !v46 )
    {
      v62 = __DisplayDriverQueryRoutine;
      v61.QueryRoutine = 0LL;
      v61.Flags = 1;
      v61.Name = L"Settings";
      v61.EntryContext = 0LL;
      v61.DefaultType = 0;
      v61.DefaultData = 0LL;
      v61.DefaultLength = 0;
      v63 = 16;
      v64 = L"InstalledDisplayDrivers";
      v65 = 0LL;
      v66 = 0;
      v67 = 0LL;
      v68 = 0;
      v69 = 0LL;
      v70 = 0;
      memset(v71, 0, sizeof(v71));
      v33 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v62;
      if ( v3 )
        v33 = &v61;
      Key = RtlQueryRegistryValues(0x40000000u, v4, v33, Context, 0LL);
    }
    if ( Key < 0 )
      goto LABEL_89;
  }
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v34 = v46;
  v35 = (struct _DEVICE_OBJECT *)Context[17];
  if ( v48 )
    v34 = 1;
  v46 = v34;
  GreDeviceIoControlImpl(v35, 0x23203Bu, 0LL, 0, InputBuffer, 0x30u, &v54, 1u, 1);
  v36 = (unsigned int)InputBuffer[3];
  if ( !LODWORD(InputBuffer[3]) || !InputBuffer[2] )
  {
    LODWORD(InputBuffer[0]) = v50;
    HIDWORD(InputBuffer[1]) = v51;
    InputBuffer[2] = (void *)Context[25];
    v42 = (struct _DEVICE_OBJECT *)Context[17];
    LODWORD(InputBuffer[3]) = *((_DWORD *)Context + 66);
    InputBuffer[4] = (void *)Context[26];
    LODWORD(InputBuffer[5]) = *((_DWORD *)Context + 67);
    HIDWORD(InputBuffer[0]) = (v48 != 0 ? 2 : 0) | (v46 != 0);
    LODWORD(InputBuffer[1]) = 0;
    GreDeviceIoControlImpl(v42, 0x23203Fu, InputBuffer, 0x30u, 0LL, 0, &v54, 1u, 1);
    goto LABEL_77;
  }
  if ( v50 != LODWORD(InputBuffer[0])
    || (v46 != 0) != (BYTE4(InputBuffer[0]) & 1)
    || (v48 != 0 ? 2 : 0) != (BYTE4(InputBuffer[0]) & 2)
    || v51 != HIDWORD(InputBuffer[1]) )
  {
    v50 = (int)InputBuffer[0];
    v46 = BYTE4(InputBuffer[0]) & 1;
    v48 = (HIDWORD(InputBuffer[0]) >> 1) & 1;
    v51 = HIDWORD(InputBuffer[1]);
  }
  v37 = Context[25];
  if ( !v37 || LODWORD(InputBuffer[3]) != *((_DWORD *)Context + 66) )
    goto LABEL_64;
  if ( RtlCompareMemory(v37, InputBuffer[2], LODWORD(InputBuffer[3])) != *((_DWORD *)Context + 66) )
  {
    v36 = (unsigned int)InputBuffer[3];
LABEL_64:
    v38 = (__int64)Context[25];
    if ( v38 )
    {
      Win32FreePool(v38);
      v36 = (unsigned int)InputBuffer[3];
    }
    v39 = (wchar_t *)PALLOCMEM2(v36, 0x73726447u, 0);
    Context[25] = v39;
    if ( v39 )
      memmove(v39, InputBuffer[2], LODWORD(InputBuffer[3]));
    else
      Key = -1073741670;
  }
  v40 = Context[26];
  if ( v40 )
  {
    v9 = InputBuffer[4];
    if ( InputBuffer[4] )
    {
      if ( LODWORD(InputBuffer[5]) != *((_DWORD *)Context + 67)
        || RtlCompareMemory(v40, InputBuffer[4], LODWORD(InputBuffer[5])) != *((_DWORD *)Context + 67) )
      {
        Win32FreePool((__int64)Context[26]);
        v41 = (wchar_t *)PALLOCMEM2(LODWORD(InputBuffer[5]), 0x73726447u, 0);
        Context[26] = v41;
        if ( v41 )
          memmove(v41, InputBuffer[4], LODWORD(InputBuffer[5]));
        else
          Key = -1073741670;
      }
    }
  }
LABEL_77:
  if ( Key >= 0 )
  {
    if ( v50 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v46 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v48 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v51 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v43 = Context[26];
    if ( v43 )
    {
      if ( !wcsicmp(v43, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_89:
  DrvLogDisplayDriverEvent(1LL, v9, v10);
  v44 = (__int64)Context[25];
  if ( v44 )
  {
    Win32FreePool(v44);
    Context[25] = 0LL;
  }
  v45 = (__int64)Context[26];
  if ( v45 )
  {
    Win32FreePool(v45);
    Context[26] = 0LL;
  }
}
