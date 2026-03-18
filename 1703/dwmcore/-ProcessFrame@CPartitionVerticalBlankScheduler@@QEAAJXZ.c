/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180035070 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18005C970 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180065118 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800664C4 (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069620 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18006B810 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006BEC0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18006CC20 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18007E104 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800B32D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x1800BC358 (-UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z.c)
 *     ?GlitchDetected@CDebugFrameCounter@@QEAAXXZ @ 0x1800C7AAC (-GlitchDetected@CDebugFrameCounter@@QEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x180134114 (-UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INF.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x180134500 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     Template_qN16 @ 0x18013BB9C (Template_qN16.c)
 *     Template_qNR0 @ 0x18013BC14 (Template_qNR0.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_xqqq @ 0x18013BE70 (Template_xqqq.c)
 *     Template_xxxxq @ 0x18013BFB4 (Template_xxxxq.c)
 *     Template_xxxxx @ 0x18013C060 (Template_xxxxx.c)
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x18013F944 (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x180140CD0 (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x180165104 (-PerformDelayedSnapshot@CSnapshot@@QEAAJXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(CPartitionVerticalBlankScheduler *this, int a2)
{
  CPartitionVerticalBlankScheduler *v2; // rsi
  int v3; // r14d
  signed int v4; // ebx
  unsigned int v5; // eax
  void *v6; // rcx
  unsigned __int8 v7; // di
  bool v8; // r15
  int v9; // r8d
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r12
  _QWORD *v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rbx
  unsigned int v24; // edi
  DWORD *p_ExceptionFlags; // rcx
  unsigned int v26; // edx
  __int64 *v27; // r10
  DWORD *v28; // r9
  DWORD v29; // eax
  __int64 v30; // rax
  char v31; // al
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37; // al
  unsigned __int64 v38; // rdi
  LARGE_INTEGER v39; // rax
  bool v40; // zf
  bool v41; // r13
  __int64 (__fastcall *v42)(RTL_SRWLOCK *, bool *, bool *); // rax
  int v43; // eax
  int v44; // r15d
  unsigned int v45; // r12d
  int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // r12d
  __int64 v49; // rsi
  CDesktopRenderTarget *v50; // rcx
  __int64 (*v51)(void); // rax
  int v52; // eax
  void (__fastcall *v53)(CCrossThreadComposition *, unsigned int); // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  CD3DDeviceManager *v57; // rcx
  int v58; // r15d
  __int64 v59; // r15
  __int64 v60; // r12
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  _BOOL8 v65; // r8
  __int64 v66; // rdi
  unsigned __int64 v67; // r12
  __int64 v68; // r13
  __int64 v69; // rbx
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // rdi
  __int64 v72; // r9
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r9
  __int64 v75; // r10
  void *v76; // rcx
  __int64 v77; // rdx
  int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // ecx
  __int64 v81; // rdi
  int v82; // r15d
  void *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rcx
  __int64 v88; // r15
  __int64 v89; // rdx
  unsigned int j; // edi
  __int64 v91; // rax
  BOOL v92; // edx
  CComposition *v94; // rcx
  int v95; // eax
  __int64 v96; // rcx
  char v97; // al
  __int64 v98; // rax
  unsigned int v99; // r13d
  unsigned int v100; // r12d
  __int64 v101; // rcx
  __int64 v102; // rsi
  _QWORD *v103; // r15
  __int64 (__fastcall *v104)(_QWORD *, __int64); // rax
  char v105; // al
  CHwndRenderTarget *v106; // rcx
  unsigned int *v107; // rdx
  __int64 (__fastcall *v108)(CHwndRenderTarget *__hidden, unsigned int *); // rax
  int LastPresentCount; // eax
  int v110; // edx
  int v111; // r9d
  __int64 v112; // rax
  __int64 v113; // rdi
  unsigned int i; // edi
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rcx
  __int64 v117; // r15
  __int64 v118; // r12
  __int64 v119; // rax
  CChannelContext *v120; // r13
  int v121; // eax
  __int64 v122; // r15
  __int64 v123; // r12
  __int64 v124; // rax
  CChannelContext *v125; // r13
  int v126; // eax
  __int64 v127; // r15
  unsigned int v128; // esi
  __int64 v129; // rcx
  int v130; // eax
  int v131; // r12d
  unsigned int v132; // esi
  __int64 v133; // r9
  __int64 v134; // r10
  __int64 v135; // rax
  unsigned __int64 v136; // rbx
  unsigned int v137; // r11d
  unsigned __int64 v138; // rcx
  unsigned __int64 v139; // rax
  __int64 v140; // rcx
  int v141; // eax
  int v142; // r12d
  int v143; // eax
  unsigned int v144; // eax
  __int64 v145; // rsi
  __int64 v146; // rdi
  __int64 v147; // r12
  __int64 v148; // rcx
  unsigned int v149; // r15d
  __int64 v150; // rcx
  __int64 v151; // rax
  unsigned __int64 v152; // rbx
  char v153; // r8
  int v154; // eax
  signed int LastError; // eax
  signed int v156; // eax
  unsigned __int64 v157; // rtt
  __int64 v158; // rdx
  unsigned int lpArgToCompletionRoutine; // [rsp+20h] [rbp-3E8h]
  bool v160; // [rsp+110h] [rbp-2F8h] BYREF
  bool v161; // [rsp+111h] [rbp-2F7h] BYREF
  bool v162; // [rsp+112h] [rbp-2F6h] BYREF
  bool v163; // [rsp+113h] [rbp-2F5h]
  int v164; // [rsp+114h] [rbp-2F4h]
  __int64 v165; // [rsp+118h] [rbp-2F0h]
  int v166; // [rsp+120h] [rbp-2E8h]
  CPartitionVerticalBlankScheduler *v167; // [rsp+128h] [rbp-2E0h]
  int v168; // [rsp+130h] [rbp-2D8h]
  BOOL v169; // [rsp+134h] [rbp-2D4h]
  unsigned __int64 v170; // [rsp+138h] [rbp-2D0h]
  LARGE_INTEGER DueTime; // [rsp+140h] [rbp-2C8h] BYREF
  _QWORD v172[3]; // [rsp+150h] [rbp-2B8h] BYREF
  int v173; // [rsp+168h] [rbp-2A0h]
  char v174; // [rsp+16Ch] [rbp-29Ch]
  char v175; // [rsp+16Dh] [rbp-29Bh]
  void *v176[2]; // [rsp+170h] [rbp-298h] BYREF
  __int64 v177; // [rsp+180h] [rbp-288h]
  unsigned int v178; // [rsp+188h] [rbp-280h]
  int v179; // [rsp+190h] [rbp-278h] BYREF
  __int64 v180; // [rsp+194h] [rbp-274h]
  __int64 v181; // [rsp+19Ch] [rbp-26Ch]
  __int64 v182; // [rsp+1A4h] [rbp-264h]
  _QWORD v183[3]; // [rsp+1B0h] [rbp-258h] BYREF
  int v184; // [rsp+1C8h] [rbp-240h]
  char v185; // [rsp+1CCh] [rbp-23Ch]
  char v186; // [rsp+1CDh] [rbp-23Bh]
  void *lpMem[2]; // [rsp+1D0h] [rbp-238h] BYREF
  __int64 v188; // [rsp+1E0h] [rbp-228h]
  unsigned int v189; // [rsp+1E8h] [rbp-220h]
  _BYTE v190[32]; // [rsp+1F0h] [rbp-218h] BYREF
  __int128 v191; // [rsp+210h] [rbp-1F8h]
  __int64 v192; // [rsp+220h] [rbp-1E8h]
  int v193; // [rsp+228h] [rbp-1E0h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+230h] [rbp-1D8h] BYREF
  struct _EXCEPTION_RECORD v195; // [rsp+2D0h] [rbp-138h] BYREF

  v2 = this;
  v3 = 0;
  v167 = this;
  v4 = 0;
  v5 = *((_DWORD *)this + 6365);
  v6 = (void *)*((unsigned int *)this + 6364);
  v7 = 1;
  v8 = (unsigned int)v6 <= v5;
  v169 = 0;
  v163 = (unsigned int)v6 <= v5;
  if ( (unsigned int)v6 > v5 && !*(_BYTE *)(*((_QWORD *)v2 + 2685) + 1288LL) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      TemplateEventDescriptor(v6, &EVTDESC_SCHEDULE_GLITCH_DETECTED);
    CDebugFrameCounter::GlitchDetected((CPartitionVerticalBlankScheduler *)((char *)v2 + 25480));
    if ( *((_DWORD *)v2 + 6365) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v6, &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT, *(_QWORD *)(*((_QWORD *)v2 + 2685) + 88LL));
    }
    else
    {
      *((_DWORD *)v2 + 6365) = 1;
      v8 = 1;
      v163 = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        TemplateEventDescriptor(v6, &EVTDESC_SCHEDULE_ENTER_PARALLEL_MODE);
    }
  }
  *(_BYTE *)(*((_QWORD *)v2 + 2685) + 1288LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    Template_xqqq((_DWORD)v6, a2, *((_QWORD *)v2 + 2685), v8, *((_DWORD *)v2 + 6364), *((_DWORD *)v2 + 6365));
  v9 = *((_DWORD *)v2 + 6364);
  v166 = v9;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
  {
    TemplateEventDescriptor(v6, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
    LOBYTE(v9) = v166;
  }
  if ( !v8 )
    goto LABEL_110;
  v10 = (_QWORD *)*((_QWORD *)v2 + 2685);
  v11 = v10[162];
  v12 = v10[163];
  v10[10] = v10[11] + *((unsigned int *)v2 + 42);
  v13 = (_QWORD *)*((_QWORD *)v2 + 2685);
  v14 = *((unsigned int *)v2 + 42);
  v15 = v13[10];
  if ( v14 != 1 )
    v15 /= v14;
  *v13 = v15;
  *(_QWORD *)(*((_QWORD *)v2 + 2685) + 1304LL) = *((_QWORD *)v2 + 23) + *(_QWORD *)(*((_QWORD *)v2 + 2685) + 240LL);
  v16 = *((_QWORD *)v2 + 2685);
  v17 = *(_QWORD *)(v16 + 1304) - *((_QWORD *)v2 + 1);
  v18 = v17 / 0x989680 * g_qpcFrequency.QuadPart + g_qpcFrequency.QuadPart * (v17 % 0x989680) / 0x989680;
  *(_QWORD *)(v16 + 1296) = v18;
  *(_QWORD *)(v16 + 1296) = v18 + *((_QWORD *)v2 + 4);
  v19 = *((_QWORD *)v2 + 2685);
  if ( *((_DWORD *)v2 + 6364) )
  {
    *(_QWORD *)(v19 + 1304) += *((_QWORD *)v2 + 18);
    *(_QWORD *)(*((_QWORD *)v2 + 2685) + 1296LL) += *((_QWORD *)v2 + 20);
    *(_BYTE *)(*((_QWORD *)v2 + 2685) + 1312LL) = 1;
    v19 = *((_QWORD *)v2 + 2685);
    if ( !*(_BYTE *)(v19 + 648) )
      goto LABEL_13;
    v20 = *(_DWORD *)(v19 + 100) + 2;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(v19 + 648) )
  {
    v20 = *(_DWORD *)(v19 + 100) + 1;
LABEL_12:
    *(_DWORD *)(v19 + 164) = v20;
  }
LABEL_13:
  v21 = *((_QWORD *)v2 + 2685);
  if ( *(_BYTE *)(v21 + 648) )
  {
    v22 = 1;
    if ( *(_DWORD *)(v21 + 656) > 1u )
    {
      do
      {
        v133 = *((_QWORD *)v2 + 2685);
        v134 = v22;
        v135 = 32LL * v22;
        v136 = *(_QWORD *)(v133 + 8LL * v22 + 520);
        v137 = *(_DWORD *)(v135 + v133 + 680);
        v165 = v137;
        if ( v136 )
        {
          v138 = *(_QWORD *)(v135 + v133 + 688);
          v139 = *(_QWORD *)(v133 + 1296);
          if ( v139 > v138 )
          {
            v165 += (v139 - v138) / v136;
            v137 = v165;
          }
        }
        if ( (v136 + (*(_QWORD *)(v133 + 520) >> 1)) / *(_QWORD *)(v133 + 520) < 2 )
          *(_DWORD *)(v133 + 4LL * v22 + 164) = v137;
        else
          *(_DWORD *)(v133 + 4LL * v22 + 164) = v137 + 1;
        ++v22;
        *(_DWORD *)(*((_QWORD *)v2 + 2685) + 4 * v134 + 100) = v137 + 1;
      }
      while ( v22 < *(_DWORD *)(*((_QWORD *)v2 + 2685) + 656LL) );
    }
  }
  v23 = *((_QWORD *)v2 + 2685);
  v24 = *(_DWORD *)(v23 + 96);
  memset_0(&v195, 0, 0x100uLL);
  v26 = 0;
  if ( v24 )
  {
    p_ExceptionFlags = &v195.ExceptionFlags;
    v27 = (__int64 *)(v23 + 520);
    v28 = (DWORD *)(v23 + 164);
    do
    {
      if ( v26 >= 0x10 )
        break;
      ++v26;
      *(p_ExceptionFlags - 1) = *(v28 - 16);
      v29 = *v28++;
      *p_ExceptionFlags = v29;
      v30 = *v27++;
      *(_QWORD *)(p_ExceptionFlags + 1) = v30;
      p_ExceptionFlags += 4;
    }
    while ( v26 < v24 );
  }
  v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_qNR0(
      (_DWORD)p_ExceptionFlags,
      (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES,
      v24,
      16,
      (__int64)&v195);
    v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v32 = *(_QWORD *)(*((_QWORD *)v2 + 2685) + 1296LL);
  v33 = *((_QWORD *)v2 + 2686);
  v34 = *(_QWORD *)(v33 + 1296);
  if ( v32 >= v11 && v32 >= v34 )
    goto LABEL_23;
  if ( v32 >= v11 )
  {
    if ( (v31 & 0x10) == 0 )
      goto LABEL_173;
LABEL_225:
    Template_x(v33, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v34 - v32);
    goto LABEL_173;
  }
  if ( (v31 & 0x10) != 0 )
  {
    v34 = v11;
    goto LABEL_225;
  }
LABEL_173:
  v115 = *(_QWORD *)(*((_QWORD *)v2 + 2686) + 1296LL);
  if ( v115 <= v11 )
    v115 = v11;
  *(_QWORD *)(*((_QWORD *)v2 + 2685) + 1296LL) = v115;
  v116 = *(_QWORD *)(*((_QWORD *)v2 + 2686) + 1304LL);
  if ( v116 <= v12 )
    v116 = v12;
  *(_QWORD *)(*((_QWORD *)v2 + 2685) + 1304LL) = v116;
LABEL_23:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v2);
  v36 = *((_QWORD *)v2 + 2685);
  *(_OWORD *)v176 = 0LL;
  v177 = 0LL;
  v178 = 0;
  if ( *((_BYTE *)v2 + 21824) )
    *(_DWORD *)(v36 + 96) = 0;
  v172[0] = v36;
  v172[1] = (char *)v2 + 136;
  v173 = *((_DWORD *)v2 + 42);
  v172[2] = (char *)v2 + 21504;
  v174 = *((_BYTE *)v2 + 21824);
  v37 = *((_BYTE *)v2 + 21826);
  *((_BYTE *)v2 + 21826) = 0;
  v175 = v37;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v35, &EVTDESC_SCHEDULE_RENDER_Start);
  v38 = *((_QWORD *)v2 + 16);
  v39.QuadPart = *((_QWORD *)v2 + 2685) + 272LL;
  v170 = v38;
  DueTime = v39;
  v40 = *(_DWORD *)(v38 + 384) == 1;
  *(_QWORD *)(v38 + 392) = v172;
  *(_DWORD *)(v38 + 1232) = 0;
  if ( v40 )
    v174 = 1;
  v161 = 0;
  v41 = 0;
  v160 = 0;
  memset_0(CCounterManager::s_pGlobalPerFrameCounterManager, 0, 0x54uLL);
  v42 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, bool *, bool *))(*(_QWORD *)v38 + 24LL);
  if ( v42 == CCrossThreadComposition::PreRender )
    v43 = CCrossThreadComposition::PreRender((RTL_SRWLOCK *)v38, &v161, &v160);
  else
    v43 = v42((RTL_SRWLOCK *)v38, &v161, &v160);
  v4 = v43;
  if ( v43 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v43, 0x2DBu);
  v168 = -2003304307;
  if ( v4 <= -2003304291 )
  {
    switch ( v4 )
    {
      case -2003304442:
        goto LABEL_230;
      case -2003304307:
        goto LABEL_35;
      case -2003304291:
LABEL_230:
        v160 = 1;
        goto LABEL_200;
    }
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v4, 0x2EFu);
    goto LABEL_59;
  }
LABEL_35:
  if ( v160 )
  {
LABEL_200:
    v127 = *(_QWORD *)(v38 + 32);
    v4 = 0;
    if ( *(_DWORD *)(v127 + 80) )
    {
      v128 = 0;
      do
      {
        v129 = *(_QWORD *)(*(_QWORD *)(v127 + 56) + 8LL * v128);
        v130 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v129 + 136LL))(v129);
        v131 = v130;
        if ( v130 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v130, 0x9Bu);
        if ( !v4 || v4 >= 0 && v131 < 0 )
          v4 = v131;
        ++v128;
      }
      while ( v128 < *(_DWORD *)(v127 + 80) );
      v2 = v167;
    }
    if ( *(_DWORD *)(v127 + 48) )
    {
      v132 = 0;
      do
      {
        v140 = *(_QWORD *)(*(_QWORD *)(v127 + 24) + 8LL * v132);
        v141 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v140 + 64) + 136LL))(v140 + 64);
        v142 = v141;
        if ( v141 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v141, 0xA0u);
        if ( !v4 || v4 >= 0 && v142 < 0 )
          v4 = v142;
        ++v132;
      }
      while ( v132 < *(_DWORD *)(v127 + 48) );
      v2 = v167;
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v4, 0x2F8u);
    goto LABEL_59;
  }
  if ( v161 )
  {
    v4 = 142213121;
LABEL_59:
    v56 = CComposition::ProcessPostPresent((CComposition *)v38, 1u);
    v58 = v56;
    if ( v56 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v56, 0x32Au);
    if ( !v4 || v4 >= 0 && v58 < 0 )
      v4 = v58;
    LOBYTE(v57) = *(_DWORD *)(v38 + 1224) == 3;
    v59 = *(_QWORD *)(v38 + 32);
    v60 = *(_QWORD *)(*(_QWORD *)(v59 + 16) + 400LL);
    if ( *(_DWORD *)(v38 + 1224) == 3 )
    {
      v144 = *(_DWORD *)(v59 + 48);
      if ( v144 )
      {
        v145 = 0LL;
        v146 = v144;
        do
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 24) + v145) + 64LL)
                                                           + 72LL))(
            *(_QWORD *)(*(_QWORD *)(v59 + 24) + v145) + 64LL,
            v60,
            0LL);
          v145 += 8LL;
          --v146;
        }
        while ( v146 );
        v2 = v167;
        v38 = v170;
      }
    }
    v61 = CD3DDeviceManager::HandleAdvanceFrame(v57, v60, 0);
    if ( v61 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x5A0u);
    goto LABEL_66;
  }
  v41 = 0;
  v162 = 0;
  AcquireSRWLockShared((PSRWLOCK)(v38 + 584));
  v44 = 0;
  v45 = 0;
  if ( *(_DWORD *)(v38 + 704) )
  {
    while ( 1 )
    {
      v143 = CSnapshot::PerformDelayedSnapshot(*(CSnapshot **)(*(_QWORD *)(v38 + 680) + 8LL * v45));
      v44 = v143;
      if ( v143 < 0 )
        break;
      if ( ++v45 >= *(_DWORD *)(v38 + 704) )
        goto LABEL_38;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v143, 0xC7Au);
  }
LABEL_38:
  *(_DWORD *)(v38 + 704) = 0;
  DynArrayImpl<0>::ShrinkToSize(v38 + 680, 8LL);
  if ( v44 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v44, 0x3EEu);
  }
  else
  {
    v46 = CRenderTargetManager::Render(*(CRenderTargetManager **)(v38 + 32), &v162);
    v44 = v46;
    if ( v46 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v46, 0x3F1u);
    v41 = v162;
  }
  ReleaseSRWLockShared((PSRWLOCK)(v38 + 584));
  if ( v44 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v44, 0x30Du);
  v4 = 0;
  v48 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(v38 + 32) + 80LL) )
  {
    v49 = *(_QWORD *)(v38 + 32);
    do
    {
      v50 = *(CDesktopRenderTarget **)(*(_QWORD *)(v49 + 56) + 8LL * v48);
      v51 = *(__int64 (**)(void))(*(_QWORD *)v50 + 160LL);
      if ( (char *)v51 == (char *)CDesktopRenderTarget::PostRender )
        v52 = CDesktopRenderTarget::PostRender(v50);
      else
        v52 = v51();
      v164 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xD1u);
        v52 = v164;
      }
      if ( !v4 || v4 >= 0 && v52 < 0 )
        v4 = v52;
      ++v48;
    }
    while ( v48 < *(_DWORD *)(v49 + 80) );
    v2 = v167;
    v38 = v170;
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v4, 0x313u);
  }
  else
  {
    v53 = *(void (__fastcall **)(CCrossThreadComposition *, unsigned int))(*(_QWORD *)v38 + 32LL);
    if ( v53 == CCrossThreadComposition::OnEndComposition )
      CCrossThreadComposition::OnEndComposition((CCrossThreadComposition *)v38, v47);
    else
      ((void (__fastcall *)(unsigned __int64))v53)(v38);
    v4 = v44;
  }
  if ( !v41 )
    goto LABEL_59;
LABEL_66:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v4, 0x3B3u);
  }
  else
  {
    if ( CDebugVisualRenderer::s_fEnableDebug )
    {
      if ( !CDebugVisualRenderer::s_pVisual )
      {
        v147 = *(_QWORD *)(v38 + 32);
        v148 = 0LL;
        v149 = 0;
        if ( *(_DWORD *)(v147 + 80) )
        {
          while ( 1 )
          {
            v150 = *(_QWORD *)(*(_QWORD *)(v147 + 56) + 8LL * v149);
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v150 + 264LL))(v150) )
              break;
            if ( ++v149 >= *(_DWORD *)(v147 + 80) )
            {
              v148 = 0LL;
              goto LABEL_262;
            }
          }
          v148 = *(_QWORD *)(*(_QWORD *)(v147 + 56) + 8LL * v149);
        }
LABEL_262:
        v151 = v148 - 32;
        v54 = 80LL;
        if ( !v148 )
          v151 = 80LL;
        CDebugVisualRenderer::s_pVisual = *(CVisual **)(*(_QWORD *)v151 + 24LL);
      }
      CDebugVisualRenderer::RenderVisual((struct CComposition *)v38, (struct CVisual *)v54);
    }
    *(_BYTE *)DueTime.QuadPart = v41;
  }
  *(_QWORD *)(v38 + 392) = 0LL;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x451u);
  }
  else if ( v4 != 142213121 )
  {
    v4 = 0;
  }
  *((_BYTE *)v2 + 21824) |= v174;
  if ( v4 == 142213121 )
  {
    v4 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v55, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
  }
  if ( *((_BYTE *)v2 + 21824) )
  {
    LOBYTE(v55) = *(_DWORD *)(*((_QWORD *)v2 + 16) + 384LL) == 0;
    *((_BYTE *)v2 + 21825) = v55;
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x3EFu);
  }
  else
  {
    v62 = *((_QWORD *)v2 + 2685);
    if ( !*(_BYTE *)(v62 + 272) || *(_BYTE *)(v62 + 273) )
    {
      v63 = *((_QWORD *)v2 + 16);
      if ( !*(_QWORD *)(*(_QWORD *)(v63 + 40) + 376LL) )
      {
        if ( *(_DWORD *)(v63 + 448) )
        {
          v117 = 0LL;
          v118 = *(unsigned int *)(v63 + 448);
          do
          {
            v119 = *(_QWORD *)(v63 + 424);
            v179 = 1;
            v120 = *(CChannelContext **)(v117 + v119);
            v180 = 0LL;
            v181 = 0LL;
            v182 = 0LL;
            v121 = CChannelContext::PostMessageToChannel(v120, (const struct MIL_MESSAGE *)&v179);
            if ( v121 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v121, 0x6Du);
            CMILRefCountBase::Release(v120);
            v117 += 8LL;
            --v118;
          }
          while ( v118 );
          v2 = v167;
        }
        *(_DWORD *)(v63 + 448) = 0;
        DynArrayImpl<1>::ShrinkToSize(v63 + 424);
      }
    }
    v64 = *((_QWORD *)v2 + 2685);
    v65 = *(_BYTE *)(v64 + 272) && !*(_BYTE *)(v64 + 273);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v55, &EVTDESC_SCHEDULE_RENDER_Stop, v65);
    v66 = *((_QWORD *)v2 + 5);
    v67 = (unsigned __int64)v2 + 56;
    v68 = *((_QWORD *)v2 + 7);
    v69 = ((_QWORD)v2 + 56) << 32;
    if ( (v66 ^ (v69 | ((unsigned __int64)v2 + 56))) != v68 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304320;
      v152 = v68 ^ (v67 | v69);
      pExceptionRecord.NumberParameters = 4;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v66);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v66;
      pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v152);
      pExceptionRecord.ExceptionInformation[3] = (unsigned int)v152;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    *((_QWORD *)v2 + 6) = *((_QWORD *)v2 + 5);
    QueryPerformanceCounter((LARGE_INTEGER *)v2 + 5);
    v70 = *((_QWORD *)v2 + 5);
    v71 = *((_QWORD *)v2 + 6);
    if ( v70 < v71 )
    {
      memset_0(&v195, 0, sizeof(v195));
      v195.ExceptionCode = -2003304293;
      v195.ExceptionInformation[0] = SHIDWORD(v70);
      v195.ExceptionInformation[1] = (unsigned int)v70;
      v195.ExceptionInformation[2] = SHIDWORD(v71);
      v195.ExceptionInformation[3] = (unsigned int)v71;
      v195.NumberParameters = 4;
      RaiseFailFastException(&v195, 0LL, 0);
    }
    v72 = *((_QWORD *)v2 + 5);
    v73 = v72 ^ (v67 | (v67 << 32));
    v74 = v72 - *((_QWORD *)v2 + 4);
    *(_QWORD *)v67 = v73;
    *((_QWORD *)v2 + 2) = *((_QWORD *)v2 + 1)
                        + 10000000 * (v74 / g_qpcFrequency.QuadPart)
                        + 10000000 * (v74 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v75 = *((_QWORD *)v2 + 5);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xxxxx(
        g_qpcFrequency.LowPart,
        (unsigned int)&EVTDESC_SCHEDULE_TIME,
        *((_QWORD *)v2 + 2),
        *((_DWORD *)v2 + 2)
      + 10000000 * ((unsigned __int64)(v75 - *((_QWORD *)v2 + 4) - *((_QWORD *)v2 + 4)) / g_qpcFrequency.QuadPart)
      + (unsigned __int64)(10000000
                         * ((*((_QWORD *)v2 + 5) - *((_QWORD *)v2 + 4) - *((_QWORD *)v2 + 4)) % g_qpcFrequency.QuadPart))
      / g_qpcFrequency.QuadPart,
        v75,
        *((_QWORD *)v2 + 6),
        *((_QWORD *)v2 + 3));
    v4 = 0;
    *(_QWORD *)(*((_QWORD *)v2 + 2685) + 264LL) = *((_QWORD *)v2 + 2);
    v76 = v176[0];
    v77 = *((_QWORD *)v2 + 2685) + 1192LL;
    v176[0] = *(void **)v77;
    v78 = *(_DWORD *)(v77 + 20);
    *(_QWORD *)v77 = v76;
    LODWORD(v76) = HIDWORD(v177);
    HIDWORD(v177) = v78;
    v79 = *(_DWORD *)(v77 + 24);
    *(_DWORD *)(v77 + 20) = (_DWORD)v76;
    v80 = v178;
    v178 = v79;
    *(_DWORD *)(v77 + 24) = v80;
    v81 = *((_QWORD *)v2 + 2685);
    v82 = *((_DWORD *)v2 + 5366);
    LODWORD(v165) = v82;
    if ( !*(_BYTE *)(v81 + 272) || *(_BYTE *)(v81 + 273) )
    {
      if ( *((_BYTE *)v2 + 21827) )
      {
        v153 = *((_BYTE *)v2 + 21824);
        v192 = 0LL;
        v191 = 0LL;
        v193 = 0;
        CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(
          v2,
          (struct CFrameInfo *)v81,
          v153,
          (struct FRAME_TIME_INFO *)v190);
        v154 = CComposition::PresentFollowUp(*((CComposition **)v2 + 16), (const struct FRAME_TIME_INFO *)v190);
        v4 = v154;
        if ( v154 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v154, 0x312u);
        if ( v4 == 142213130 )
        {
          v4 = 0;
          *((_BYTE *)v2 + 21827) = 1;
        }
        else
        {
          *((_BYTE *)v2 + 21827) = 0;
        }
        FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v190);
      }
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxxxq(
          v80,
          v77,
          *((_QWORD *)v2 + 2),
          *(_DWORD *)(v81 + 1304) - *((_DWORD *)v2 + 36),
          *(_QWORD *)(v81 + 88),
          *(_BYTE *)(v81 + 80) - 1);
      v188 = 0LL;
      *(_OWORD *)lpMem = 0LL;
      v189 = 0;
      if ( *((_BYTE *)v2 + 21824) )
        *(_DWORD *)(v81 + 96) = 0;
      v94 = (CComposition *)*((_QWORD *)v2 + 16);
      v183[1] = (char *)v2 + 136;
      v184 = *((_DWORD *)v2 + 42);
      v183[2] = (char *)v2 + 21504;
      v185 = *((_BYTE *)v2 + 21824);
      v186 = *((_BYTE *)v2 + 21826);
      v183[0] = v81;
      v95 = CComposition::Present(v94, (struct FRAME_TIME_INFO *)v183);
      v164 = v95;
      v4 = v95;
      if ( v95 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0x2C9u);
      if ( v4 == 142213130 )
      {
        v4 = 0;
        *((_BYTE *)v2 + 21827) = 1;
        v164 = 0;
      }
      else
      {
        *((_BYTE *)v2 + 21827) = 0;
      }
      *(_DWORD *)(v81 + 1184) = v4;
      v96 = *(unsigned int *)(*((_QWORD *)v2 + 16) + 384LL);
      v97 = v185;
      *(_DWORD *)(v81 + 1188) = v96;
      *((_BYTE *)v2 + 21824) |= v97;
      if ( v4 >= 0 )
      {
        *(_BYTE *)(v81 + 273) = 1;
        ++*((_DWORD *)v2 + 6364);
        if ( *(_BYTE *)(v81 + 273) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            TemplateEventDescriptor(v96, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
          v98 = *((_QWORD *)v2 + 16);
          v99 = 0;
          v100 = 0;
          v101 = *(_QWORD *)(v98 + 32);
          if ( *(_DWORD *)(v101 + 48) )
          {
            v102 = *(_QWORD *)(v98 + 32);
            do
            {
              if ( v99 >= 0x10 )
                break;
              v103 = *(_QWORD **)(*(_QWORD *)(v102 + 24) + 8LL * v100);
              v104 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v103 + 48LL);
              if ( (char *)v104 == (char *)CHwndRenderTarget::IsOfType )
                v105 = CHwndRenderTarget::IsOfType(v103, 38LL);
              else
                v105 = v104(v103, 38LL);
              if ( v105 && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v103 + 176LL))(v103) )
              {
                v106 = (CHwndRenderTarget *)(v103 + 8);
                v107 = (unsigned int *)(v81 + 4 * (v99 + 4LL));
                v108 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, unsigned int *))(v103[8] + 104LL);
                if ( v108 == CHwndRenderTarget::GetLastPresentCount )
                  LastPresentCount = CHwndRenderTarget::GetLastPresentCount(v106, v107);
                else
                  LastPresentCount = v108(v106, v107);
                if ( LastPresentCount < 0 )
                  MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, LastPresentCount, 0x518u);
                ++v99;
              }
              ++v100;
            }
            while ( v100 < *(_DWORD *)(v102 + 48) );
            v2 = v167;
            v82 = v165;
            v3 = 0;
            v168 = -2003304307;
            v4 = v164;
          }
          MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v168, 0xDA3u);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_qN16(v96, v110, v99, v111, v81 + 16);
        }
        v112 = *((_QWORD *)v2 + 5);
        *((_DWORD *)v2 + 5368) = v82;
        *(_QWORD *)(v81 + 280) = v112;
        v113 = *((_QWORD *)v2 + 16);
        if ( !*(_QWORD *)(*(_QWORD *)(v113 + 40) + 376LL) )
        {
          if ( *(_DWORD *)(v113 + 448) )
          {
            v122 = 0LL;
            v123 = *(unsigned int *)(v113 + 448);
            do
            {
              v124 = *(_QWORD *)(v113 + 424);
              v179 = 1;
              v125 = *(CChannelContext **)(v122 + v124);
              v180 = 0LL;
              v181 = 0LL;
              v182 = 0LL;
              v126 = CChannelContext::PostMessageToChannel(v125, (const struct MIL_MESSAGE *)&v179);
              if ( v126 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0x6Du);
              CMILRefCountBase::Release(v125);
              v122 += 8LL;
              --v123;
            }
            while ( v123 );
            v2 = v167;
          }
          *(_DWORD *)(v113 + 448) = 0;
          DynArrayImpl<1>::ShrinkToSize(v113 + 424);
        }
        ++*((_QWORD *)v2 + 3);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          TemplateEventDescriptor(v96, &EVTDESC_SCHEDULE_PRESENT_Stop);
      }
      for ( i = 0; i < v189; ++i )
        WPF::ProcessHeapImpl::Free(*((void **)lpMem[0] + i));
      v189 = 0;
      DynArrayImpl<0>::ShrinkToSize(lpMem, 8LL);
      if ( lpMem[0] != lpMem[1] )
        WPF::ProcessHeapImpl::Free(lpMem[0]);
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x408u);
  }
  v83 = *(void **)(*((_QWORD *)v2 + 14) + 152LL);
  if ( v83 )
    PulseEvent(v83);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x412u);
    goto LABEL_291;
  }
  v84 = *((_QWORD *)v2 + 2685);
  if ( *(_BYTE *)(v84 + 272) && !*(_BYTE *)(v84 + 273) )
    SetEvent(*((HANDLE *)v2 + 8));
  v85 = *((unsigned int *)v2 + 6369);
  v4 = 0;
  v164 = 0;
  if ( (_DWORD)v85 )
  {
    DueTime.QuadPart = -10000 * v85;
    SetLastError(0);
    if ( SetWaitableTimer(*((HANDLE *)v2 + 10), &DueTime, 0, 0LL, 0LL, 0) )
      goto LABEL_100;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    lpArgToCompletionRoutine = 2531;
  }
  else
  {
    SetLastError(0);
    if ( CancelWaitableTimer(*((HANDLE *)v2 + 10)) )
    {
LABEL_100:
      *((_DWORD *)v2 + 6369) = 0;
      goto LABEL_101;
    }
    v156 = GetLastError();
    v4 = v156;
    if ( v156 > 0 )
      v4 = (unsigned __int16)v156 | 0x80070000;
    lpArgToCompletionRoutine = 2535;
  }
  if ( v4 >= 0 )
    v4 = -2003304445;
  v164 = v4;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, lpArgToCompletionRoutine);
LABEL_101:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x41Cu);
LABEL_291:
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v172);
    v92 = v169;
    LOBYTE(v9) = v166;
    goto LABEL_114;
  }
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v2);
  v86 = *(_QWORD *)(*((_QWORD *)v2 + 2686) + 240LL);
  if ( v86 )
  {
    v87 = *(_QWORD *)(*((_QWORD *)v2 + 2685) + 240LL) - v86;
  }
  else
  {
    v157 = *((_QWORD *)v2 + 20) - *((_QWORD *)v2 + 4);
    v87 = *((_QWORD *)v2 + 1)
        + 10000000 * (v157 / g_qpcFrequency.QuadPart)
        + 10000000 * (v157 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
  }
  v88 = *((_QWORD *)v2 + 2685);
  v170 = v87;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v158 = *((_QWORD *)v2 + 2685);
    Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      *(_DWORD *)(v88 + 264) - *(_QWORD *)(v88 + 256),
      v158,
      *((_DWORD *)v2 + 5366),
      *(_QWORD *)v158,
      *(_DWORD *)(v158 + 16),
      *(_QWORD *)(v158 + 1304),
      *(_QWORD *)(v158 + 1296),
      *(_DWORD *)(v88 + 164));
    v4 = v164;
  }
  v89 = *((_QWORD *)v2 + 2685);
  CTelemetryFrameStatistics::UpdateFrameStatistics(
    (CPartitionVerticalBlankScheduler *)((char *)v2 + 25264),
    *(_QWORD *)(v89 + 248),
    *(_QWORD *)(v89 + 280),
    *(_QWORD *)(v89 + 520),
    *(_DWORD *)(v89 + 1176),
    *(_DWORD *)(v89 + 1180),
    *(_BYTE *)(v89 + 273));
  for ( j = 0; j < v178; ++j )
    WPF::ProcessHeapImpl::Free(*((void **)v176[0] + j));
  v178 = 0;
  DynArrayImpl<0>::ShrinkToSize(v176, 8LL);
  v6 = v176[0];
  if ( v176[0] != v176[1] )
    WPF::ProcessHeapImpl::Free(v176[0]);
  v8 = v163;
  v7 = 1;
  LOBYTE(v9) = v166;
LABEL_110:
  v91 = *((_QWORD *)v2 + 2686);
  v92 = v8;
  if ( !*(_BYTE *)(v91 + 272) || *(_BYTE *)(v91 + 273) )
    v7 = 0;
  v3 = v7;
LABEL_114:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(
      *((_DWORD *)v2 + 6365),
      (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME,
      v92,
      v3,
      v9,
      *((_DWORD *)v2 + 6365));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  return (unsigned int)v4;
}
