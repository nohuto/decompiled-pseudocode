/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N4@Z @ 0x180012948
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180004660 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800122DC (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180012E60 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180012FFC (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x180013318 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 *     ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x1800133A0 (-GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z @ 0x1800236F8 (-GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@K@Z @ 0x180023B28 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180084B5C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xqq @ 0x180146618 (Template_xqq.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned int a10,
        unsigned int *a11,
        HWND *a12,
        _QWORD *a13,
        _DWORD *a14,
        __int64 a15,
        _DWORD *a16,
        _BYTE *a17,
        _DWORD *a18)
{
  HWND v18; // r15
  int v19; // edi
  int v20; // r12d
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r14d
  CVisual *v26; // rdi
  bool v27; // r12
  CVisual *v28; // r14
  int v29; // r11d
  struct CInteraction *v30; // rsi
  CVisual *v31; // rdi
  bool v32; // zf
  HWND (__fastcall *v34)(CVisual *__hidden); // rax
  HWND Hwnd; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  struct CInteraction *InteractionInternal; // rax
  void *InputHandle; // rax
  int v41; // eax
  _QWORD *InputLuid; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  struct CInteraction *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // r10
  __int64 v50; // rax
  int v51; // eax
  unsigned int InputType; // eax
  __int64 v53; // r8
  __int64 InputQueueInfo; // rax
  bool v55; // [rsp+20h] [rbp-81h]
  struct CInteraction *v56; // [rsp+30h] [rbp-71h]
  CVisual *v57; // [rsp+38h] [rbp-69h]
  __int128 v58; // [rsp+50h] [rbp-51h] BYREF
  __int128 v59; // [rsp+60h] [rbp-41h]
  __int128 v60; // [rsp+70h] [rbp-31h]
  __int128 v61; // [rsp+80h] [rbp-21h]
  DWORD v62; // [rsp+90h] [rbp-11h]
  unsigned int v63; // [rsp+F0h] [rbp+4Fh]
  char v65; // [rsp+108h] [rbp+67h]
  int v66; // [rsp+110h] [rbp+6Fh]
  unsigned int v67; // [rsp+118h] [rbp+77h]

  v65 = a4;
  v18 = 0LL;
  v19 = a4;
  v20 = a3;
  v63 = 0;
  v56 = 0LL;
  v58 = _xmm;
  LOWORD(v62) = 32085;
  v59 = _xmm;
  v60 = _xmm;
  v61 = _xmm;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(a1, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start, a2[3], a3, a4);
  *a11 = 0;
  *a12 = 0LL;
  *a13 = 0LL;
  *a16 = 0;
  *a17 = 0;
  *a18 = 0;
  *a14 = 0;
  a14[1] = 0;
  *(_OWORD *)a15 = _xmm;
  *(_WORD *)(a15 + 64) = 32085;
  *(_OWORD *)(a15 + 16) = _xmm;
  *(_OWORD *)(a15 + 32) = _xmm;
  *(_OWORD *)(a15 + 48) = _xmm;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = a5;
  *(float *)(a1 + 92) = (float)v19;
  *(float *)(a1 + 88) = (float)v20;
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(a1 + 100) |= 1u;
  if ( (a6 & 2) != 0 )
    *(_DWORD *)(a1 + 100) |= 2u;
  *(_BYTE *)(a1 + 176) = (a6 & 4) != 0;
  CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
    a1 + 112,
    &CRenderState::sc_DefaultBackfaceVisibility);
  v23 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(
          a1 + 8,
          (const struct CVisualTree *)a2,
          a2[3],
          (CHitTestContext *)a1,
          v55);
  v67 = v23;
  v25 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F3CB0, 1u, v23, 0x182u);
    goto LABEL_22;
  }
  v26 = *(CVisual **)(a1 + 104);
  v27 = 0;
  if ( !v26 )
    goto LABEL_20;
  v28 = 0LL;
  v57 = (CVisual *)a2[3];
  v66 = *(_DWORD *)(a1 + 96);
  do
  {
    if ( !v18 )
    {
      v34 = *(HWND (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v26 + 208LL);
      if ( v34 == CVisual::GetHwnd )
        Hwnd = CVisual::GetHwnd(v26);
      else
        Hwnd = v34(v26);
      v18 = Hwnd;
    }
    if ( !v28 )
    {
      if ( CVisual::GetInputHandle(v26) )
      {
        if ( !v29
          || (unsigned int)CVisual::GetInputQueueType(v26, *(unsigned int *)(a1 + 96))
          && (*(_DWORD *)(a1 + 96) != 4
           || (InteractionInternal = CVisual::GetInteractionInternal(v26),
               (*(unsigned int (__fastcall **)(struct CInteraction *, __int64, _QWORD))(*(_QWORD *)InteractionInternal
                                                                                      + 80LL))(
                 InteractionInternal,
                 4LL,
                 *(unsigned int *)(a1 + 100)))) )
        {
          v28 = v26;
          CVisual::GetWorldTransform(v26, a2, 4LL, &v58, 0LL, 0LL);
        }
      }
    }
    v30 = CVisual::GetInteractionInternal(v26);
    if ( !v56
      && CVisual::GetInteractionInternal(v26)
      && (!v66
       || *(_DWORD *)(a1 + 96) != 4
       || (*(unsigned int (__fastcall **)(struct CInteraction *, __int64, _QWORD))(*(_QWORD *)v30 + 80LL))(
            v30,
            4LL,
            *(unsigned int *)(a1 + 100))) )
    {
      v56 = v30;
    }
    if ( !v27 )
    {
      if ( !v30 )
        goto LABEL_17;
      v27 = !v66
         || (*(unsigned int (__fastcall **)(struct CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v30 + 80LL))(
              v30,
              *(unsigned int *)(a1 + 96),
              *(unsigned int *)(a1 + 100),
              0LL);
    }
    if ( v30 )
    {
      v36 = *((_QWORD *)v30 + 14);
      if ( v36 )
      {
        v24 = *(_QWORD *)(v36 + 64);
        if ( v24 )
        {
          if ( v63 < a10 && a9 )
            *(_QWORD *)(a9 + 8LL * v63) = v24;
          ++v63;
          if ( !v18 )
          {
            v37 = *((_QWORD *)v30 + 14);
            if ( v37 ? *(_BYTE *)(v37 + 104) : 0 )
            {
              if ( v37
                && (InputType = CInputSinkStruct::GetInputType(*(unsigned int *)(a1 + 96)),
                    (InputQueueInfo = CInputSinkStruct::GetInputQueueInfo(v53, InputType)) != 0) )
              {
                v18 = *(HWND *)(InputQueueInfo + 8);
              }
              else
              {
                v18 = 0LL;
              }
            }
          }
        }
      }
    }
LABEL_17:
    if ( v26 == v57 )
      break;
    v26 = (CVisual *)*((_QWORD *)v26 + 10);
  }
  while ( v26 );
  v31 = v28;
  v32 = v28 == 0LL;
  v25 = v67;
  if ( v32 )
    goto LABEL_20;
  if ( !v56 )
    goto LABEL_20;
  if ( !v27 )
    goto LABEL_20;
  InputHandle = CVisual::GetInputHandle(v31);
  if ( !InputHandle )
    goto LABEL_20;
  v41 = NtDuplicateCompositionInputSink(InputHandle, a13);
  if ( v41 < 0 )
  {
    v25 = v41 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, &dword_1801F3CB0, 1u, v41 | 0x10000000, 0x1E2u);
  }
  else
  {
    InputLuid = (_QWORD *)CVisual::GetInputLuid(v31);
    v43 = v58;
    v44 = v59;
    *(_QWORD *)a14 = *InputLuid;
    LODWORD(InputLuid) = v62;
    *(_OWORD *)a15 = v43;
    v45 = v60;
    *(_OWORD *)(a15 + 16) = v44;
    v46 = v61;
    *(_OWORD *)(a15 + 32) = v45;
    *(_OWORD *)(a15 + 48) = v46;
    *(_DWORD *)(a15 + 64) = (_DWORD)InputLuid;
    *a17 = 1;
    *a16 = *((_DWORD *)v56 + 328);
    *((_QWORD *)v56 + 166) = a7;
    *((_DWORD *)v56 + 334) = a8;
    v47 = CVisual::GetInteractionInternal(v31);
    if ( v47 )
    {
      if ( *((_QWORD *)v47 + 14)
        && (v48 = CInputSinkStruct::GetInputType(*(unsigned int *)(a1 + 96)),
            (v50 = CInputSinkStruct::GetInputQueueInfo(*(_QWORD *)(v49 + 112), v48)) != 0) )
      {
        v51 = *(_DWORD *)(v50 + 4);
      }
      else
      {
        v51 = 0;
      }
      *a18 = v51;
    }
    LODWORD(v24) = (_DWORD)a11;
    *a11 = v63;
LABEL_20:
    *a12 = v18;
  }
  LOBYTE(v19) = v65;
  v20 = a3;
LABEL_22:
  *(_DWORD *)(a1 + 112) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(v24, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop, a2[3], v20, v19);
  return v25;
}
