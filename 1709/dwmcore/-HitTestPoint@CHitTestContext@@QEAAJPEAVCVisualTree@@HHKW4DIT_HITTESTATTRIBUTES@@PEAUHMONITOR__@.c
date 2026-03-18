/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800B8A40 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1800BF168 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18004F5FC (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 *     ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x180054240 (-GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180054C68 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180054C94 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x180091200 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x18009127C (-HasInputSink@CInteraction@@QEBA_NXZ.c)
 *     ?CanReceiveInput@CInteraction@@QEBA_NK@Z @ 0x180091298 (-CanReceiveInput@CInteraction@@QEBA_NK@Z.c)
 *     ?SupportsInteractionType@CInteraction@@UEBAHKI@Z @ 0x1800917C0 (-SupportsInteractionType@CInteraction@@UEBAHKI@Z.c)
 *     ?SupportsPointerType@CInteraction@@UEBAHKW4SupportedTypeOption@@@Z @ 0x180091840 (-SupportsPointerType@CInteraction@@UEBAHKW4SupportedTypeOption@@@Z.c)
 *     ?GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ @ 0x180098D30 (-GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ.c)
 *     ?GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z @ 0x1800BA540 (-GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@K@Z @ 0x1800BE730 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqq @ 0x180136C98 (McTemplateU0xqq.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned int a10,
        unsigned int *a11,
        HWND *a12,
        _QWORD *a13,
        _QWORD *a14,
        __int128 *a15,
        _DWORD *a16,
        _BYTE *a17,
        _QWORD *a18)
{
  int v18; // esi
  int v19; // r12d
  CVisual *v22; // r13
  HWND v23; // r15
  __int128 *v24; // rax
  signed int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r14d
  CVisual *v28; // rsi
  bool v29; // r12
  CInteraction *v30; // rbx
  struct CInteraction *InteractionInternal; // rax
  int v32; // r10d
  HWND (__fastcall *v34)(CVisual *); // rax
  HWND Hwnd; // rax
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(CInteraction *, __int64, _QWORD); // rax
  __int64 v39; // r8
  __int64 (__fastcall *v40)(CInteraction *__hidden, unsigned int, unsigned int); // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v45; // rax
  __int64 (__fastcall *v46)(CInteraction *, __int64, _QWORD); // rax
  int v47; // eax
  __int64 InputHandle; // rax
  int v49; // eax
  _QWORD *InputLuid; // rax
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 *v53; // rcx
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  _DWORD *v56; // rcx
  struct CInteraction *v57; // rax
  unsigned int v58; // eax
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int InputType; // eax
  __int64 v63; // r8
  __int64 InputQueueInfo; // rax
  CInteraction *v65; // [rsp+38h] [rbp-71h]
  CVisual *v66; // [rsp+48h] [rbp-61h]
  __int128 v67; // [rsp+58h] [rbp-51h] BYREF
  __int128 v68; // [rsp+68h] [rbp-41h]
  __int128 v69; // [rsp+78h] [rbp-31h]
  __int128 v70; // [rsp+88h] [rbp-21h]
  DWORD v71; // [rsp+98h] [rbp-11h]
  unsigned int v72; // [rsp+F8h] [rbp+4Fh]
  char v75; // [rsp+110h] [rbp+67h]
  int v76; // [rsp+118h] [rbp+6Fh]
  unsigned int v77; // [rsp+120h] [rbp+77h]

  v75 = a4;
  v18 = a4;
  v19 = a3;
  v72 = 0;
  v22 = 0LL;
  v65 = 0LL;
  v23 = 0LL;
  v67 = _xmm;
  LOWORD(v71) = 32085;
  v68 = _xmm;
  v69 = _xmm;
  v70 = _xmm;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(a1, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start, a2[3], a3, a4);
  *a11 = 0;
  *a12 = 0LL;
  *a13 = 0LL;
  *a16 = 0;
  *a17 = 0;
  *a18 = 0LL;
  *a14 = 0LL;
  v24 = a15;
  *a15 = _xmm;
  v24[1] = _xmm;
  *((_WORD *)v24 + 32) = 32085;
  v24[2] = _xmm;
  v24[3] = _xmm;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 96) = a5;
  *(float *)(a1 + 92) = (float)v18;
  *(float *)(a1 + 88) = (float)v19;
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(a1 + 100) |= 1u;
  if ( (a6 & 2) != 0 )
    *(_DWORD *)(a1 + 100) |= 2u;
  *(_BYTE *)(a1 + 176) = (a6 & 4) != 0;
  *(_BYTE *)(a1 + 177) = (a6 & 8) == 0;
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push(a1 + 112, &CRenderState::sc_DefaultBackfaceVisibility);
  v25 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(a1 + 8, (struct CVisualTree *)a2, a2[3], a1);
  v77 = v25;
  v27 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18020736C, 1u, v25, 0x18Bu);
    goto LABEL_24;
  }
  v28 = *(CVisual **)(a1 + 104);
  v29 = 0;
  if ( !v28 )
    goto LABEL_22;
  v66 = (CVisual *)a2[3];
  v76 = *(_DWORD *)(a1 + 96);
  do
  {
    v26 = *((_QWORD *)v28 + 26);
    if ( (*(_DWORD *)(v26 + 4) & 0x2000000) != 0 )
    {
      for ( v26 += 12LL; (*(_DWORD *)v26 & 0x7F000000) != 0x7000000; v26 += (*(_DWORD *)v26 & 0xFFFFFF) + 4LL )
        ;
      v30 = *(CInteraction **)(v26 + 4);
    }
    else
    {
      v30 = 0LL;
    }
    if ( !v23 )
    {
      v34 = *(HWND (__fastcall **)(CVisual *))(*(_QWORD *)v28 + 248LL);
      if ( v34 == CVisual::GetHwnd )
      {
        Hwnd = CVisual::GetHwnd(v28);
      }
      else if ( v34 == CWindowNode::GetHwnd )
      {
        Hwnd = CWindowNode::GetHwnd(v28);
      }
      else
      {
        Hwnd = v34(v28);
      }
      v23 = Hwnd;
    }
    if ( !v22 )
    {
      InteractionInternal = CVisual::GetInteractionInternal(v28);
      if ( InteractionInternal )
      {
        v45 = *((_QWORD *)InteractionInternal + 16);
        if ( v45 )
        {
          if ( *(_QWORD *)(v45 + 96)
            && (!v32 || (unsigned int)CVisual::GetInputQueueType(v28))
            && (*(_DWORD *)(a1 + 96) != 4
             || !v30
             || (*(unsigned int (__fastcall **)(CInteraction *, __int64))(*(_QWORD *)v30 + 80LL))(v30, 4LL)
             || (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v30 + 88LL))(
                  v30,
                  *(unsigned int *)(a1 + 96),
                  *(unsigned int *)(a1 + 100))) )
          {
            v22 = v28;
            CVisual::GetWorldTransform(v28, (struct _LIST_ENTRY *)a2, 4, (__int64)&v67, 0LL, 0LL);
          }
        }
      }
    }
    if ( !v65 && CVisual::GetInteractionInternal(v28) && CInteraction::CanReceiveInput(v30, *(_DWORD *)(a1 + 96)) )
    {
      LODWORD(v26) = 4;
      if ( *(_DWORD *)(a1 + 96) != 4
        || ((v46 = *(__int64 (__fastcall **)(CInteraction *, __int64, _QWORD))(*(_QWORD *)v30 + 80LL),
             (char *)v46 != (char *)CInteraction::SupportsPointerType)
          ? (v47 = v46(v30, 4LL, 0LL))
          : (v47 = CInteraction::SupportsPointerType(v30, 4LL, 0LL)),
            v47
         || (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v30 + 88LL))(
              v30,
              *(unsigned int *)(a1 + 96),
              *(unsigned int *)(a1 + 100))) )
      {
        v65 = v30;
      }
    }
    if ( !v29 )
    {
      if ( !v30 )
        goto LABEL_19;
      v29 = 1;
      if ( v76 )
      {
        v36 = *(unsigned int *)(a1 + 96);
        v37 = *(__int64 (__fastcall **)(CInteraction *, __int64, _QWORD))(*(_QWORD *)v30 + 80LL);
        if ( !((char *)v37 == (char *)CInteraction::SupportsPointerType
             ? CInteraction::SupportsPointerType(v30, v36, 0LL)
             : (unsigned int)v37(v30, v36, 0LL)) )
        {
          if ( *(_DWORD *)(a1 + 96) != 4
            || ((v39 = *(unsigned int *)(a1 + 100),
                 v40 = *(__int64 (__fastcall **)(CInteraction *__hidden, unsigned int, unsigned int))(*(_QWORD *)v30 + 88LL),
                 v40 != CInteraction::SupportsInteractionType)
              ? (v41 = v40(v30, 4u, v39))
              : (v41 = CInteraction::SupportsInteractionType(v30, 4u, v39)),
                !v41) )
          {
            v29 = 0;
          }
        }
      }
    }
    if ( v30 && CInteraction::HasInputSink(v30) )
    {
      if ( v72 < a10 && a9 )
      {
        v42 = *((_QWORD *)v30 + 16);
        v26 = 0LL;
        if ( v42 )
          v26 = *(_QWORD *)(v42 + 96);
        *(_QWORD *)(a9 + 8LL * v72) = v26;
      }
      ++v72;
      if ( !v23 )
      {
        v43 = *((_QWORD *)v30 + 16);
        if ( v43 ? *(_BYTE *)(v43 + 136) : 0 )
        {
          if ( v43
            && (InputType = CInputSinkStruct::GetInputType(*(unsigned int *)(a1 + 96)),
                (InputQueueInfo = CInputSinkStruct::GetInputQueueInfo(v63, InputType)) != 0) )
          {
            v23 = *(HWND *)(InputQueueInfo + 16);
          }
          else
          {
            v23 = 0LL;
          }
        }
      }
    }
LABEL_19:
    if ( v28 == v66 )
      break;
    v28 = (CVisual *)*((_QWORD *)v28 + 10);
  }
  while ( v28 );
  v27 = v77;
  if ( !v22 )
    goto LABEL_22;
  if ( !v65 )
    goto LABEL_22;
  if ( !v29 )
    goto LABEL_22;
  InputHandle = CVisual::GetInputHandle(v22);
  if ( !InputHandle )
    goto LABEL_22;
  v49 = NtDuplicateCompositionInputSink(InputHandle, a13);
  if ( v49 < 0 )
  {
    v27 = v49 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18020736C, 1u, v49 | 0x10000000, 0x1F9u);
  }
  else
  {
    InputLuid = (_QWORD *)CVisual::GetInputLuid(v22, &a13);
    v51 = v67;
    v52 = v68;
    *a14 = *InputLuid;
    v53 = a15;
    LODWORD(InputLuid) = v71;
    *a15 = v51;
    v54 = v69;
    v53[1] = v52;
    v55 = v70;
    v53[2] = v54;
    v53[3] = v55;
    *((_DWORD *)v53 + 16) = (_DWORD)InputLuid;
    v56 = a16;
    *a17 = 1;
    *v56 = *((_DWORD *)v65 + 380);
    *((_QWORD *)v65 + 192) = a7;
    *((_DWORD *)v65 + 386) = a8;
    v57 = CVisual::GetInteractionInternal(v22);
    if ( v57 )
    {
      if ( *((_QWORD *)v57 + 16)
        && (v58 = CInputSinkStruct::GetInputType(*(unsigned int *)(a1 + 96)),
            (v60 = CInputSinkStruct::GetInputQueueInfo(v59, v58)) != 0) )
      {
        v61 = *(_QWORD *)(v60 + 8);
      }
      else
      {
        v61 = 0LL;
      }
      *a18 = v61;
    }
    LODWORD(v26) = (_DWORD)a11;
    *a11 = v72;
LABEL_22:
    *a12 = v23;
  }
  LOBYTE(v18) = v75;
  v19 = a3;
LABEL_24:
  *(_DWORD *)(a1 + 112) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(v26, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop, a2[3], v19, v18);
  return v27;
}
