/*
 * XREFs of ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021E220
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021BF80 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C021C390 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021C3B8 (-IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021CDC0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021D314 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021D654 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C021EE78 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 */

__int64 __fastcall InkDevice::ProcessInkFeedbackCommand(__int64 a1, int a2, __int64 a3, const GUID *a4)
{
  int v6; // edi
  char v7; // r10
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v16; // eax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  unsigned int v19; // r9d
  int v20; // ecx
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  int v23; // ecx
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  int v30; // eax
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  _QWORD *v35; // rax
  const GUID *v36; // r8
  const GUID *v37; // r9
  _QWORD *v38; // r14
  char v40; // [rsp+30h] [rbp-D0h] BYREF
  char v41; // [rsp+31h] [rbp-CFh] BYREF
  char v42; // [rsp+32h] [rbp-CEh] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  int v46; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+44h] [rbp-BCh] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+4Ch] [rbp-B4h] BYREF
  int v50; // [rsp+50h] [rbp-B0h] BYREF
  int v51; // [rsp+54h] [rbp-ACh] BYREF
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  int v53; // [rsp+5Ch] [rbp-A4h] BYREF
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  int v55; // [rsp+64h] [rbp-9Ch] BYREF
  int v56; // [rsp+68h] [rbp-98h] BYREF
  int v57; // [rsp+6Ch] [rbp-94h] BYREF
  int v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+88h] [rbp-78h] BYREF
  __int64 v63; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v64; // [rsp+A0h] [rbp-60h] BYREF
  int *v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+D0h] [rbp-30h] BYREF
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
  EVENT_DATA_DESCRIPTOR v113; // [rsp+260h] [rbp+160h] BYREF
  int *v114; // [rsp+280h] [rbp+180h]
  __int64 v115; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+290h] [rbp+190h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 *v118; // [rsp+2B0h] [rbp+1B0h]
  __int64 v119; // [rsp+2B8h] [rbp+1B8h]
  char *v120; // [rsp+2C0h] [rbp+1C0h]
  __int64 v121; // [rsp+2C8h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR v122; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v123; // [rsp+300h] [rbp+200h]
  __int64 v124; // [rsp+308h] [rbp+208h]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+310h] [rbp+210h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+320h] [rbp+220h] BYREF
  __int64 *v127; // [rsp+330h] [rbp+230h]
  __int64 v128; // [rsp+338h] [rbp+238h]
  __int64 v129; // [rsp+340h] [rbp+240h]
  __int64 v130; // [rsp+348h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR v131; // [rsp+360h] [rbp+260h] BYREF
  int *v132; // [rsp+380h] [rbp+280h]
  __int64 v133; // [rsp+388h] [rbp+288h]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+390h] [rbp+290h] BYREF
  __int64 v135; // [rsp+3A0h] [rbp+2A0h]
  __int64 v136; // [rsp+3A8h] [rbp+2A8h]
  EVENT_DATA_DESCRIPTOR v137; // [rsp+3C0h] [rbp+2C0h] BYREF
  int *v138; // [rsp+3E0h] [rbp+2E0h]
  __int64 v139; // [rsp+3E8h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+3F0h] [rbp+2F0h] BYREF
  int *v141; // [rsp+400h] [rbp+300h]
  __int64 v142; // [rsp+408h] [rbp+308h]
  EVENT_DATA_DESCRIPTOR v143; // [rsp+420h] [rbp+320h] BYREF
  int *v144; // [rsp+440h] [rbp+340h]
  __int64 v145; // [rsp+448h] [rbp+348h]
  struct _EVENT_DATA_DESCRIPTOR v146; // [rsp+450h] [rbp+350h] BYREF
  __int64 v147; // [rsp+460h] [rbp+360h]
  __int64 v148; // [rsp+468h] [rbp+368h]
  EVENT_DATA_DESCRIPTOR v149; // [rsp+480h] [rbp+380h] BYREF
  int *v150; // [rsp+4A0h] [rbp+3A0h]
  int v151; // [rsp+4A8h] [rbp+3A8h]
  int v152; // [rsp+4ACh] [rbp+3ACh]
  struct _EVENT_DATA_DESCRIPTOR v153; // [rsp+4B0h] [rbp+3B0h] BYREF
  EVENT_DATA_DESCRIPTOR v154; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v155; // [rsp+4E0h] [rbp+3E0h]
  __int64 v156; // [rsp+4E8h] [rbp+3E8h]
  struct _EVENT_DATA_DESCRIPTOR v157; // [rsp+4F0h] [rbp+3F0h] BYREF
  EVENT_DATA_DESCRIPTOR v158; // [rsp+500h] [rbp+400h] BYREF
  int *v159; // [rsp+520h] [rbp+420h]
  __int64 v160; // [rsp+528h] [rbp+428h]
  struct _EVENT_DATA_DESCRIPTOR v161; // [rsp+530h] [rbp+430h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+540h] [rbp+440h] BYREF
  int *v163; // [rsp+560h] [rbp+460h]
  __int64 v164; // [rsp+568h] [rbp+468h]
  EVENT_DATA_DESCRIPTOR v165; // [rsp+578h] [rbp+478h] BYREF
  int *v166; // [rsp+598h] [rbp+498h]
  __int64 v167; // [rsp+5A0h] [rbp+4A0h]
  EVENT_DATA_DESCRIPTOR v168; // [rsp+5B0h] [rbp+4B0h] BYREF
  int *v169; // [rsp+5D0h] [rbp+4D0h]
  __int64 v170; // [rsp+5D8h] [rbp+4D8h]
  EVENT_DATA_DESCRIPTOR v171; // [rsp+5E8h] [rbp+4E8h] BYREF
  int *v172; // [rsp+608h] [rbp+508h]
  __int64 v173; // [rsp+610h] [rbp+510h]

  if ( *(_BYTE *)(a1 - 20) )
  {
    if ( a2 == 1 )
    {
      if ( (_DWORD)a4 == 64 )
      {
        v19 = hProvider;
        if ( hProvider > 4u )
        {
          v50 = 0;
          v65 = &v50;
          v66 = 4LL;
          TlgCreateSz(&v67, "Processing ink feedback command: IFC_SUPERWET_INK_START...");
          TlgCreateSz(&v68, *(LPCSTR *)(a1 + 48));
          v70 = 8LL;
          v71 = a3;
          v20 = *(_DWORD *)(a3 + 60);
          v72 = 4LL;
          v74 = 1LL;
          v63 = a1 & -(__int64)(a1 != 32);
          v69 = &v63;
          v41 = *(_BYTE *)(a3 + 4);
          v73 = &v41;
          v75 = a3 + 8;
          v77 = a3 + 9;
          v79 = a3 + 10;
          v81 = a3 + 11;
          v83 = a3 + 12;
          v42 = *(_BYTE *)(a3 + 16);
          v85 = &v42;
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
          v51 = -(v20 & 1);
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
          v107 = &v51;
          v108 = 4LL;
          v110 = 4LL;
          v52 = -__CFSHR__(v20, 2);
          v109 = &v52;
          v111 = &v53;
          v53 = -__CFSHR__(v20, 3);
          v112 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC83B, v21, v22, 0x1Bu, &v64);
          v19 = hProvider;
        }
        if ( *(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 108) )
        {
          if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 1, *(_DWORD *)a3) )
          {
            v6 = -1073741823;
            if ( v27 > 2 )
            {
              v56 = -1073741823;
              v145 = 4LL;
              v144 = &v56;
              TlgCreateSz(&v146, "The specified pointer id already has an active IFC_SUPERWET_INK_START command");
              v147 = a3;
              v148 = 4LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC670, v28, v29, 5u, &v143);
            }
          }
          else
          {
            v30 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), v26);
            v6 = v30;
            if ( v30 >= 0 )
            {
              if ( IsSuperWetInkStartDataSupported(*(_DWORD *)(a1 + 116), a3) )
              {
                v35 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
                v38 = v35;
                if ( v35 )
                {
                  v35[2] = 0LL;
                  v35[3] = 0LL;
                  v35[1] = 0LL;
                  *v35 = 0LL;
                }
                else
                {
                  v38 = 0LL;
                }
                if ( v38 )
                {
                  *((_DWORD *)v38 + 4) = 1;
                  *((_DWORD *)v38 + 5) = *(_DWORD *)a3;
                  v38[3] = KeGetCurrentThread();
                  v6 = InkDevice::DoSuperWetInkStart(
                         (LPCSTR *)(a1 - 32),
                         (const struct IFC_SUPERWET_INK_START_DATA *)a3);
                  if ( v6 < 0 )
                    Win32FreePool(v38);
                  else
                    InkFeedbackProviderBase::AddActiveCommand(
                      (InkFeedbackProviderBase *)a1,
                      (struct InkFeedbackProviderBase::ActiveCommand *)v38);
                }
                else
                {
                  v6 = -1073741801;
                  if ( hProvider > 2u )
                  {
                    v59 = -1073741801;
                    v172 = &v59;
                    v173 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v36, v37, 3u, &v171);
                  }
                }
              }
              else
              {
                v6 = -1073741637;
                if ( hProvider > 2u )
                {
                  v58 = -1073741637;
                  v160 = 4LL;
                  v159 = &v58;
                  TlgCreateSz(&v161, "Super-wet ink not supported for the specified drawing attributes");
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v33, v34, 4u, &v158);
                }
              }
            }
            else if ( hProvider > 2u )
            {
              v57 = v30;
              v156 = 4LL;
              v155 = &v57;
              TlgCreateSz(&v157, "ValidatePointer failed");
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v31, v32, 4u, &v154);
            }
          }
        }
        else
        {
          v6 = -1073741823;
          if ( v19 > 2 )
          {
            v54 = -1073741823;
            v139 = 4LL;
            v138 = &v54;
            TlgCreateSz(&v140, "Too many active commands");
            v23 = *(_DWORD *)(a1 + 40);
            v141 = &v55;
            v55 = v23;
            v142 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02ECA32, v24, v25, 5u, &v137);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        if ( hProvider > 2u )
        {
          v49 = -1073741811;
          v169 = &v49;
          v170 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, (LPCGUID)a3, a4, 3u, &v168);
        }
      }
    }
    else if ( a2 == 2 )
    {
      if ( (_DWORD)a4 == 4 )
      {
        if ( hProvider > 4u )
        {
          v46 = 0;
          v123 = &v46;
          v124 = 4LL;
          TlgCreateSz(&v125, "Processing ink feedback command: IFC_SUPERWET_INK_STOP...");
          TlgCreateSz(&v126, *(LPCSTR *)(a1 + 48));
          v128 = 8LL;
          v129 = a3;
          v130 = 4LL;
          v61 = a1 & -(__int64)(a1 != 32);
          v127 = &v61;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC7CD, v10, v11, 7u, &v122);
        }
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                            a1,
                                                                                            1,
                                                                                            *(_DWORD *)a3);
        if ( ActiveCommandByTargetPointerId )
        {
          v16 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), v12);
          v6 = v16;
          if ( v16 >= 0 )
          {
            v6 = InkDevice::DoSuperWetInkStop((LPCSTR *)(a1 - 32), (const struct IFC_SUPERWET_INK_STOP_DATA *)a3);
            InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
              (InkFeedbackProviderBase *)a1,
              &ActiveCommandByTargetPointerId);
          }
          else if ( hProvider > 2u )
          {
            v152 = 0;
            v48 = v16;
            v151 = 4;
            v150 = &v48;
            TlgCreateSz(&v153, "ValidatePointer failed");
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v17, v18, 4u, &v149);
          }
        }
        else
        {
          v6 = -1073741823;
          if ( v13 > 2 )
          {
            v47 = -1073741823;
            v133 = 4LL;
            v132 = &v47;
            TlgCreateSz(&v134, "Active IFC_SUPERWET_INK_START command not found for the specified pointer id");
            v135 = a3;
            v136 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC670, v14, v15, 5u, &v131);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        if ( hProvider > 2u )
        {
          v45 = -1073741811;
          v166 = &v45;
          v167 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, (LPCGUID)a3, a4, 3u, &v165);
        }
      }
    }
    else
    {
      v6 = -1073741637;
      if ( hProvider > 2u )
      {
        v44 = -1073741637;
        v115 = 4LL;
        v114 = &v44;
        TlgCreateSz(&pDesc, "Unsupported command");
        TlgCreateSz(&v117, *(LPCSTR *)(a1 + 48));
        v119 = 8LL;
        v40 = v7;
        v121 = 1LL;
        v60 = a1 & -(__int64)(a1 != 32);
        v118 = &v60;
        v120 = &v40;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC9D4, v8, v9, 7u, &v113);
      }
    }
  }
  else
  {
    v6 = -1073741823;
    if ( hProvider > 2u )
    {
      v43 = -1073741823;
      v163 = &v43;
      v164 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, (LPCGUID)a3, a4, 3u, &pData);
    }
  }
  return (unsigned int)v6;
}
