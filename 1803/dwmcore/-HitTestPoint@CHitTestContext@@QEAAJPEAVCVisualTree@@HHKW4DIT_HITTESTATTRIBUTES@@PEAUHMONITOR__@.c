/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001BFD8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180025648 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x18000B3E8 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18000B6D4 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18001CE74 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?SupportedByInteraction@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@1_N@Z @ 0x1800265B0 (-SupportedByInteraction@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@1_N@Z.c)
 *     ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x180026654 (-EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z.c)
 *     ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I@Z @ 0x1800283F0 (-SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I@Z.c)
 *     ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180028410 (-SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z @ 0x180028814 (-CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z.c)
 *     ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x180028848 (-HasInputSink@CInteraction@@QEBA_NXZ.c)
 *     ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x18004A130 (-GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004FF28 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ @ 0x18008FEB0 (-GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800C2628 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqq @ 0x180159144 (McTemplateU0xqq.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
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
        char *a17)
{
  int v17; // esi
  __int64 v21; // r14
  HWND v22; // r12
  __int128 *v23; // rax
  int v24; // eax
  _DWORD *v25; // rcx
  unsigned int v26; // r13d
  CVisual *v27; // rsi
  char v28; // r15
  __int64 v29; // rbx
  unsigned int v30; // edi
  HWND (__fastcall *v32)(CVisual *__hidden); // rax
  HWND Hwnd; // rax
  __int64 (__fastcall *v34)(_QWORD, _QWORD); // rax
  int v35; // eax
  __int64 (__fastcall *v36)(__int64, __int64, __int64); // rax
  int v37; // eax
  bool v38; // al
  __int64 v39; // rax
  __int64 v40; // rdx
  int InputType; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  void *InputHandle; // rax
  int v46; // eax
  _QWORD *InputLuid; // rax
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 *v50; // rcx
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int16 v53; // [rsp+38h] [rbp-91h]
  unsigned int v54; // [rsp+3Ch] [rbp-8Dh]
  int v55; // [rsp+40h] [rbp-89h]
  __int64 v56; // [rsp+48h] [rbp-81h]
  unsigned int v57; // [rsp+50h] [rbp-79h]
  CVisual *v58; // [rsp+58h] [rbp-71h]
  CVisual *v59; // [rsp+60h] [rbp-69h]
  _DWORD *v60; // [rsp+68h] [rbp-61h]
  __int128 v61; // [rsp+78h] [rbp-51h] BYREF
  __int128 v62; // [rsp+88h] [rbp-41h]
  __int128 v63; // [rsp+98h] [rbp-31h]
  __int128 v64; // [rsp+A8h] [rbp-21h]
  DWORD v65; // [rsp+B8h] [rbp-11h]
  char v69; // [rsp+130h] [rbp+67h]

  v69 = a4;
  v17 = a4;
  v54 = 0;
  v21 = 0LL;
  v58 = 0LL;
  v22 = 0LL;
  v61 = _xmm;
  LOWORD(v65) = 32085;
  v62 = _xmm;
  v63 = _xmm;
  v64 = _xmm;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(a1, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start, *(_QWORD *)(a2 + 24), a3, a4);
  *a11 = 0;
  *a12 = 0LL;
  *a13 = 0LL;
  *a16 = 0;
  *a17 = 0;
  *a14 = 0LL;
  v23 = a15;
  *a15 = _xmm;
  *((_WORD *)v23 + 32) = 32085;
  v23[1] = _xmm;
  v23[2] = _xmm;
  v23[3] = _xmm;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(float *)(a1 + 92) = (float)v17;
  *(float *)(a1 + 88) = (float)a3;
  CHitTestContext::EvaluateHitTestAttributesAndInputType(a1, a6, a5);
  v60 = (_DWORD *)(a1 + 120);
  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(
    a1 + 120,
    &CRenderState::sc_DefaultBackfaceVisibility);
  v24 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(a1 + 8, a2, *(_QWORD *)(a2 + 24), a1);
  v57 = v24;
  v26 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, v24, 0x1B9u);
    goto LABEL_21;
  }
  v27 = *(CVisual **)(a1 + 112);
  v53 = 0;
  if ( !v27 )
    goto LABEL_19;
  v28 = 1;
  v59 = *(CVisual **)(a2 + 24);
  v55 = *(_DWORD *)(a1 + 96);
  do
  {
    v25 = (_DWORD *)*((_QWORD *)v27 + 27);
    if ( (v25[1] & 0x2000000) != 0 )
    {
      for ( v25 += 3; (*v25 & 0x7F000000) != 0x7000000; v25 = (_DWORD *)((char *)v25 + (*v25 & 0xFFFFFF) + 4) )
        ;
      v29 = *(_QWORD *)(v25 + 1);
    }
    else
    {
      v29 = 0LL;
    }
    if ( !v22 )
    {
      v32 = *(HWND (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v27 + 256LL);
      if ( v32 == CVisual::GetHwnd )
      {
        Hwnd = CVisual::GetHwnd(v27);
      }
      else if ( v32 == CWindowNode::GetHwnd )
      {
        Hwnd = CWindowNode::GetHwnd(v27);
      }
      else
      {
        Hwnd = v32(v27);
      }
      v22 = Hwnd;
    }
    v30 = *(_DWORD *)(a1 + 96);
    if ( v30 == 6 && v29 && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 80LL))(v29, 6LL) )
      v30 = 5;
    if ( !v58 )
    {
      v25 = (_DWORD *)*((_QWORD *)v27 + 27);
      if ( (v25[1] & 0x2000000) != 0 )
      {
        for ( v25 += 3; (*v25 & 0x7F000000) != 0x7000000; v25 = (_DWORD *)((char *)v25 + (*v25 & 0xFFFFFF) + 4) )
          ;
        v56 = *(_QWORD *)(v25 + 1);
        if ( v56 )
        {
          v44 = *(_QWORD *)(v56 + 96);
          if ( v44 )
          {
            if ( *(_QWORD *)(v44 + 64)
              && (!v55 || (unsigned int)CVisual::GetInputQueueType(v27))
              && (!v29 || CHitTestContext::SupportedByInteraction(a1, v30, (_BYTE *)v29, v21, v53)) )
            {
              v58 = v27;
              CVisual::GetWorldTransform(v27, a2, 4LL, &v61, 0LL, 0LL);
            }
          }
        }
      }
    }
    if ( !v21 )
    {
      v25 = (_DWORD *)*((_QWORD *)v27 + 27);
      if ( (v25[1] & 0x2000000) != 0 )
      {
        for ( v25 += 3; (*v25 & 0x7F000000) != 0x7000000; v25 = (_DWORD *)((char *)v25 + (*v25 & 0xFFFFFF) + 4) )
          ;
        if ( *(_QWORD *)(v25 + 1)
          && (unsigned __int8)CInteraction::CanReceiveInput(v29, v30)
          && CHitTestContext::SupportedByInteraction(a1, v30, (_BYTE *)v29, 0LL, v53) )
        {
          v21 = v29;
        }
      }
    }
    if ( !HIBYTE(v53) )
    {
      if ( !v29 )
        goto LABEL_16;
      HIBYTE(v53) = !v55
                 || ((v34 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v29 + 80LL),
                      v34 != CInteraction::SupportsPointerType)
                   ? (v35 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v34)(v29, v30, 0LL))
                   : (v35 = CInteraction::SupportsPointerType(v29, v30)),
                     v35
                  || (LODWORD(v25) = 5, v30 == 5)
                  && CHitTestContext::SupportedByInteraction(a1, 5, (_BYTE *)v29, v21, v53));
    }
    if ( v29 )
    {
      v36 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v29 + 88LL);
      v37 = v36 == CInteraction::SupportsInteractionType
          ? CInteraction::SupportsInteractionType(v29, 5LL, 0x8000LL)
          : v36(v29, 5LL, 0x8000LL);
      v38 = v37 && (*(_BYTE *)(v29 + 184) & 2) == 0;
      LOBYTE(v53) = v38 | v53;
      if ( CInteraction::HasInputSink((CInteraction *)v29) )
      {
        if ( v54 < a10 && a9 )
        {
          v39 = *(_QWORD *)(v29 + 96);
          v25 = 0LL;
          if ( v39 )
            v25 = *(_DWORD **)(v39 + 64);
          *(_QWORD *)(a9 + 8LL * v54) = v25;
        }
        ++v54;
        if ( !v22 )
        {
          v40 = *(_QWORD *)(v29 + 96);
          if ( v40 ? *(_BYTE *)(v40 + 104) : 0 )
          {
            InputType = CInputSinkStruct::GetInputType(v30);
            if ( !v43 )
              goto LABEL_92;
            v25 = (_DWORD *)(v43 + 64);
            while ( (_DWORD *)v43 != v25 )
            {
              if ( InputType == *(_DWORD *)v43 )
                goto LABEL_53;
              v43 += 16LL;
            }
            v43 = 0LL;
LABEL_53:
            if ( v43 )
              v22 = *(HWND *)(v43 + 8);
            else
LABEL_92:
              v22 = 0LL;
          }
        }
      }
    }
LABEL_16:
    if ( v27 == v59 )
      break;
    v27 = (CVisual *)*((_QWORD *)v27 + 10);
  }
  while ( v27 );
  v26 = v57;
  if ( !v58 )
    goto LABEL_19;
  if ( !v21 )
    goto LABEL_19;
  if ( !HIBYTE(v53) )
    goto LABEL_19;
  InputHandle = CVisual::GetInputHandle(v58);
  if ( !InputHandle )
    goto LABEL_19;
  v46 = NtDuplicateCompositionInputSink(InputHandle, a13);
  if ( v46 < 0 )
  {
    v26 = v46 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, v46 | 0x10000000, 0x228u);
  }
  else
  {
    InputLuid = (_QWORD *)CVisual::GetInputLuid(v58, &a13);
    v48 = v61;
    v49 = v62;
    *a14 = *InputLuid;
    v50 = a15;
    LODWORD(InputLuid) = v65;
    *a15 = v48;
    v51 = v63;
    v50[1] = v49;
    v52 = v64;
    v50[2] = v51;
    v50[3] = v52;
    *((_DWORD *)v50 + 16) = (_DWORD)InputLuid;
    if ( *(_DWORD *)(a1 + 96) == 6
      && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 80LL))(v21, 6LL) )
    {
      v28 = 0;
    }
    v25 = a16;
    *a17 = v28;
    *v25 = *(_DWORD *)(v21 + 1696);
    LODWORD(v25) = (_DWORD)a11;
    *(_QWORD *)(v21 + 1712) = a7;
    *(_DWORD *)(v21 + 1720) = a8;
    *a11 = v54;
LABEL_19:
    *a12 = v22;
  }
  LOBYTE(v17) = v69;
LABEL_21:
  *v60 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq((_DWORD)v25, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop, *(_QWORD *)(a2 + 24), a3, v17);
  return v26;
}
