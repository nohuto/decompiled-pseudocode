/*
 * XREFs of ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021F520
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021D230 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C021D65C (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021D684 (-IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021E0A0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021E5EC (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021E938 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02201B4 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 */

__int64 __fastcall InkDevice::ProcessInkFeedbackCommand(__int64 a1, int a2, __int64 a3, const GUID *a4)
{
  int v6; // edi
  const CHAR *v7; // rdx
  char v8; // r10
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  const CHAR *v11; // rdx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // eax
  const GUID *v17; // r8
  const GUID *v18; // r9
  const GUID *v19; // r9
  const CHAR *v20; // rdx
  int v21; // ecx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  unsigned int v24; // ecx
  const GUID *v25; // r8
  const GUID *v26; // r9
  int v27; // eax
  const GUID *v28; // r8
  const GUID *v29; // r9
  const GUID *v30; // r8
  const GUID *v31; // r9
  _QWORD *v32; // rax
  const GUID *v33; // r8
  const GUID *v34; // r9
  _QWORD *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  char v39; // [rsp+30h] [rbp-D0h] BYREF
  char v40; // [rsp+31h] [rbp-CFh] BYREF
  char v41; // [rsp+32h] [rbp-CEh] BYREF
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+3Ch] [rbp-C4h] BYREF
  int v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+54h] [rbp-ACh] BYREF
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  int v52; // [rsp+5Ch] [rbp-A4h] BYREF
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+64h] [rbp-9Ch] BYREF
  int v55; // [rsp+68h] [rbp-98h] BYREF
  int v56; // [rsp+6Ch] [rbp-94h] BYREF
  int v57; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v63; // [rsp+A0h] [rbp-60h] BYREF
  int *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  const char *v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  char *v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  __int64 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int64 v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  __int64 v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  __int64 v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  char *v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  __int64 v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  __int64 v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  __int64 v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  __int64 v93; // [rsp+1B0h] [rbp+B0h]
  __int64 v94; // [rsp+1B8h] [rbp+B8h]
  __int64 v95; // [rsp+1C0h] [rbp+C0h]
  __int64 v96; // [rsp+1C8h] [rbp+C8h]
  __int64 v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]
  __int64 v99; // [rsp+1E0h] [rbp+E0h]
  __int64 v100; // [rsp+1E8h] [rbp+E8h]
  __int64 v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h]
  __int64 v103; // [rsp+200h] [rbp+100h]
  __int64 v104; // [rsp+208h] [rbp+108h]
  __int64 v105; // [rsp+210h] [rbp+110h]
  __int64 v106; // [rsp+218h] [rbp+118h]
  int *v107; // [rsp+220h] [rbp+120h]
  __int64 v108; // [rsp+228h] [rbp+128h]
  int *v109; // [rsp+230h] [rbp+130h]
  __int64 v110; // [rsp+238h] [rbp+138h]
  int *v111; // [rsp+240h] [rbp+140h]
  __int64 v112; // [rsp+248h] [rbp+148h]
  EVENT_DATA_DESCRIPTOR v113; // [rsp+250h] [rbp+150h] BYREF
  int *v114; // [rsp+270h] [rbp+170h]
  __int64 v115; // [rsp+278h] [rbp+178h]
  const char *v116; // [rsp+280h] [rbp+180h]
  __int64 v117; // [rsp+288h] [rbp+188h]
  __int64 v118; // [rsp+290h] [rbp+190h]
  __int64 v119; // [rsp+298h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR v120; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v121; // [rsp+2C0h] [rbp+1C0h]
  __int64 v122; // [rsp+2C8h] [rbp+1C8h]
  const char *v123; // [rsp+2D0h] [rbp+1D0h]
  __int64 v124; // [rsp+2D8h] [rbp+1D8h]
  int *v125; // [rsp+2E0h] [rbp+1E0h]
  __int64 v126; // [rsp+2E8h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR v127; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v128; // [rsp+310h] [rbp+210h]
  __int64 v129; // [rsp+318h] [rbp+218h]
  const char *v130; // [rsp+320h] [rbp+220h]
  __int64 v131; // [rsp+328h] [rbp+228h]
  __int64 v132; // [rsp+330h] [rbp+230h]
  __int64 v133; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR v134; // [rsp+340h] [rbp+240h] BYREF
  int *v135; // [rsp+360h] [rbp+260h]
  __int64 v136; // [rsp+368h] [rbp+268h]
  const char *v137; // [rsp+370h] [rbp+270h]
  __int64 v138; // [rsp+378h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+380h] [rbp+280h] BYREF
  __int64 *v140; // [rsp+390h] [rbp+290h]
  __int64 v141; // [rsp+398h] [rbp+298h]
  char *v142; // [rsp+3A0h] [rbp+2A0h]
  __int64 v143; // [rsp+3A8h] [rbp+2A8h]
  EVENT_DATA_DESCRIPTOR v144; // [rsp+3B0h] [rbp+2B0h] BYREF
  int *v145; // [rsp+3D0h] [rbp+2D0h]
  __int64 v146; // [rsp+3D8h] [rbp+2D8h]
  const char *v147; // [rsp+3E0h] [rbp+2E0h]
  __int64 v148; // [rsp+3E8h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v149; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 *v150; // [rsp+400h] [rbp+300h]
  __int64 v151; // [rsp+408h] [rbp+308h]
  __int64 v152; // [rsp+410h] [rbp+310h]
  __int64 v153; // [rsp+418h] [rbp+318h]
  EVENT_DATA_DESCRIPTOR v154; // [rsp+420h] [rbp+320h] BYREF
  int *v155; // [rsp+440h] [rbp+340h]
  int v156; // [rsp+448h] [rbp+348h]
  int v157; // [rsp+44Ch] [rbp+34Ch]
  const char *v158; // [rsp+450h] [rbp+350h]
  int v159; // [rsp+458h] [rbp+358h]
  int v160; // [rsp+45Ch] [rbp+35Ch]
  EVENT_DATA_DESCRIPTOR v161; // [rsp+460h] [rbp+360h] BYREF
  int *v162; // [rsp+480h] [rbp+380h]
  __int64 v163; // [rsp+488h] [rbp+388h]
  const char *v164; // [rsp+490h] [rbp+390h]
  __int64 v165; // [rsp+498h] [rbp+398h]
  EVENT_DATA_DESCRIPTOR v166; // [rsp+4A0h] [rbp+3A0h] BYREF
  int *v167; // [rsp+4C0h] [rbp+3C0h]
  __int64 v168; // [rsp+4C8h] [rbp+3C8h]
  const char *v169; // [rsp+4D0h] [rbp+3D0h]
  __int64 v170; // [rsp+4D8h] [rbp+3D8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4E0h] [rbp+3E0h] BYREF
  int *v172; // [rsp+500h] [rbp+400h]
  __int64 v173; // [rsp+508h] [rbp+408h]
  EVENT_DATA_DESCRIPTOR v174; // [rsp+510h] [rbp+410h] BYREF
  int *v175; // [rsp+530h] [rbp+430h]
  __int64 v176; // [rsp+538h] [rbp+438h]
  EVENT_DATA_DESCRIPTOR v177; // [rsp+540h] [rbp+440h] BYREF
  int *v178; // [rsp+560h] [rbp+460h]
  __int64 v179; // [rsp+568h] [rbp+468h]
  EVENT_DATA_DESCRIPTOR v180; // [rsp+570h] [rbp+470h] BYREF
  int *v181; // [rsp+590h] [rbp+490h]
  __int64 v182; // [rsp+598h] [rbp+498h]

  if ( *(_BYTE *)(a1 - 20) )
  {
    if ( a2 == 1 )
    {
      if ( (_DWORD)a4 == 64 )
      {
        v19 = (const GUID *)(unsigned int)pRelatedActivityId;
        if ( (unsigned int)pRelatedActivityId > 4 )
        {
          v20 = *(const CHAR **)(a1 + 48);
          v64 = &v49;
          v49 = 0;
          v66 = "Processing ink feedback command: IFC_SUPERWET_INK_START...";
          v65 = 4LL;
          v67 = 59LL;
          TlgCreateSz(&v68, v20);
          v70 = 8LL;
          v71 = a3;
          v21 = *(_DWORD *)(a3 + 60);
          v72 = 4LL;
          v74 = 1LL;
          v62 = a1 & -(__int64)(a1 != 32);
          v69 = &v62;
          v40 = *(_BYTE *)(a3 + 4);
          v73 = &v40;
          v75 = a3 + 8;
          v77 = a3 + 9;
          v79 = a3 + 10;
          v81 = a3 + 11;
          v83 = a3 + 12;
          v41 = *(_BYTE *)(a3 + 16);
          v85 = &v41;
          v87 = a3 + 20;
          v89 = a3 + 24;
          v91 = a3 + 28;
          v93 = a3 + 32;
          v95 = a3 + 36;
          v97 = a3 + 40;
          v99 = a3 + 44;
          v101 = a3 + 48;
          v103 = a3 + 52;
          v105 = a3 + 56;
          v76 = 1LL;
          v78 = 1LL;
          v50 = -(v21 & 1);
          v80 = 1LL;
          v82 = 1LL;
          v84 = 4LL;
          v86 = 1LL;
          v88 = 4LL;
          v90 = 4LL;
          v92 = 4LL;
          v94 = 4LL;
          v96 = 4LL;
          v98 = 4LL;
          v100 = 4LL;
          v102 = 4LL;
          v104 = 4LL;
          v106 = 4LL;
          v107 = &v50;
          v108 = 4LL;
          v110 = 4LL;
          v51 = -__CFSHR__(v21, 2);
          v109 = &v51;
          v111 = &v52;
          v52 = -__CFSHR__(v21, 3);
          v112 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9540, v22, v23, 0x1Bu, &v63);
          v19 = (const GUID *)(unsigned int)pRelatedActivityId;
        }
        v24 = *(_DWORD *)(a1 + 40);
        if ( v24 < *(_DWORD *)(a1 + 108) )
        {
          if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 1, *(_DWORD *)a3) )
          {
            v6 = -1073741823;
            if ( (unsigned int)v26 > 2 )
            {
              v55 = -1073741823;
              v128 = &v55;
              v130 = "The specified pointer id already has an active IFC_SUPERWET_INK_START command";
              v129 = 4LL;
              v131 = 78LL;
              v132 = a3;
              v133 = 4LL;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E94BB, v25, v26, 5u, &v127);
            }
          }
          else
          {
            v27 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), (unsigned int)v25);
            v6 = v27;
            if ( v27 >= 0 )
            {
              if ( IsSuperWetInkStartDataSupported(*(_DWORD *)(a1 + 116), a3) )
              {
                v32 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
                v35 = v32;
                if ( v32 )
                {
                  v32[2] = 0LL;
                  v32[3] = 0LL;
                  v32[1] = 0LL;
                  *v32 = 0LL;
                }
                else
                {
                  v35 = 0LL;
                }
                if ( v35 )
                {
                  *((_DWORD *)v35 + 4) = 1;
                  *((_DWORD *)v35 + 5) = *(_DWORD *)a3;
                  v35[3] = KeGetCurrentThread();
                  v6 = InkDevice::DoSuperWetInkStart(
                         (InkDevice *)(a1 - 32),
                         (const struct IFC_SUPERWET_INK_START_DATA *)a3);
                  if ( v6 < 0 )
                    Win32FreePool(v35, v36, v37);
                  else
                    InkFeedbackProviderBase::AddActiveCommand(
                      (InkFeedbackProviderBase *)a1,
                      (struct InkFeedbackProviderBase::ActiveCommand *)v35);
                }
                else
                {
                  v6 = -1073741801;
                  if ( (unsigned int)pRelatedActivityId > 2 )
                  {
                    v58 = -1073741801;
                    v181 = &v58;
                    v182 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v33, v34, 3u, &v180);
                  }
                }
              }
              else
              {
                v6 = -1073741637;
                if ( (unsigned int)pRelatedActivityId > 2 )
                {
                  v57 = -1073741637;
                  v167 = &v57;
                  v169 = "Super-wet ink not supported for the specified drawing attributes";
                  v168 = 4LL;
                  v170 = 65LL;
                  TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v30, v31, 4u, &v166);
                }
              }
            }
            else if ( (unsigned int)pRelatedActivityId > 2 )
            {
              v56 = v27;
              v162 = &v56;
              v164 = "ValidatePointer failed";
              v163 = 4LL;
              v165 = 23LL;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v28, v29, 4u, &v161);
            }
          }
        }
        else
        {
          v6 = -1073741823;
          if ( (unsigned int)v19 > 2 )
          {
            v53 = -1073741823;
            v121 = &v53;
            v123 = "Too many active commands";
            v125 = (int *)&v54;
            v122 = 4LL;
            v124 = 25LL;
            v54 = v24;
            v126 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E94F8, (LPCGUID)a3, v19, 5u, &v120);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        if ( (unsigned int)pRelatedActivityId > 2 )
        {
          v48 = -1073741811;
          v178 = &v48;
          v179 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, (LPCGUID)a3, a4, 3u, &v177);
        }
      }
    }
    else if ( a2 == 2 )
    {
      if ( (_DWORD)a4 == 4 )
      {
        if ( (unsigned int)pRelatedActivityId > 4 )
        {
          v11 = *(const CHAR **)(a1 + 48);
          v145 = &v45;
          v45 = 0;
          v147 = "Processing ink feedback command: IFC_SUPERWET_INK_STOP...";
          v146 = 4LL;
          v148 = 58LL;
          TlgCreateSz(&v149, v11);
          v151 = 8LL;
          v152 = a3;
          v153 = 4LL;
          v60 = a1 & -(__int64)(a1 != 32);
          v150 = &v60;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E92AF, v12, v13, 7u, &v144);
        }
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                            a1,
                                                                                            1,
                                                                                            *(_DWORD *)a3);
        if ( ActiveCommandByTargetPointerId )
        {
          v16 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), (unsigned int)v14);
          v6 = v16;
          if ( v16 >= 0 )
          {
            v6 = InkDevice::DoSuperWetInkStop((InkDevice *)(a1 - 32), (const struct IFC_SUPERWET_INK_STOP_DATA *)a3);
            InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
              (InkFeedbackProviderBase *)a1,
              &ActiveCommandByTargetPointerId);
          }
          else if ( (unsigned int)pRelatedActivityId > 2 )
          {
            v157 = 0;
            v160 = 0;
            v47 = v16;
            v155 = &v47;
            v158 = "ValidatePointer failed";
            v156 = 4;
            v159 = 23;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v17, v18, 4u, &v154);
          }
        }
        else
        {
          v6 = -1073741823;
          if ( (unsigned int)v15 > 2 )
          {
            v46 = -1073741823;
            v114 = &v46;
            v116 = "Active IFC_SUPERWET_INK_START command not found for the specified pointer id";
            v115 = 4LL;
            v117 = 77LL;
            v118 = a3;
            v119 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E94BB, v14, v15, 5u, &v113);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        if ( (unsigned int)pRelatedActivityId > 2 )
        {
          v44 = -1073741811;
          v175 = &v44;
          v176 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, (LPCGUID)a3, a4, 3u, &v174);
        }
      }
    }
    else
    {
      v6 = -1073741637;
      if ( (unsigned int)pRelatedActivityId > 2 )
      {
        v7 = *(const CHAR **)(a1 + 48);
        v43 = -1073741637;
        v135 = &v43;
        v137 = "Unsupported command";
        v136 = 4LL;
        v138 = 20LL;
        TlgCreateSz(&pDesc, v7);
        v141 = 8LL;
        v39 = v8;
        v143 = 1LL;
        v59 = a1 & -(__int64)(a1 != 32);
        v140 = &v59;
        v142 = &v39;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9251, v9, v10, 7u, &v134);
      }
    }
  }
  else
  {
    v6 = -1073741823;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v42 = -1073741823;
      v172 = &v42;
      v173 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, (LPCGUID)a3, a4, 3u, &pData);
    }
  }
  return (unsigned int)v6;
}
