/*
 * XREFs of ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18003E7DC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18003EB04 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801977E8 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x18003EF08 (--0KeyframeSequence@@QEAA@I@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18003F85C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C3600 (--4-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$.c)
 *     ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800C4524 (-DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Composit.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyFrameData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KeyframeSequence *v7; // rax
  _QWORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rsi
  float v12; // xmm6_4
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-48h]
  void *lpMem; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 > 1 )
  {
    v10 = -2003303421;
    v18 = 574;
    v17 = -2003303421;
    goto LABEL_22;
  }
  *(_DWORD *)(a1 + 496) = a2;
  v7 = (KeyframeSequence *)WPF::ProcessHeapImpl::AllocClear(0x90uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  lpMem = KeyframeSequence::KeyframeSequence(v7, *(_DWORD *)(a1 + 304));
  std::unique_ptr<KeyframeSequence>::operator=(a1 + 328, &lpMem);
  v8 = lpMem;
  if ( lpMem )
  {
    KeyframeSequence::RemoveAllKeyFrames((KeyframeSequence *)lpMem);
    v16 = v8[8];
    if ( v16 )
    {
      v8[8] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    operator delete(v8);
  }
  v9 = CKeyframeAnimation::DetermineCoordinateSpace(*(unsigned int *)(a1 + 144), a3, &v21);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = 587;
LABEL_20:
    v17 = v9;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v18);
    return v10;
  }
  v11 = 0LL;
  v12 = 0.0;
  if ( *(_DWORD *)(a1 + 304) )
  {
    v13 = v21;
    while ( 1 )
    {
      if ( (_DWORD)v11 )
      {
        v14 = (unsigned int)v11;
        v12 = fmaxf(v12 + 0.001, *(float *)(a4 + 48 * v11));
      }
      else
      {
        v12 = 0.0;
        v14 = 0LL;
      }
      v9 = CKeyframeAnimation::AddKeyframeData(a1, v11, v12, (__int128 *)(a4 + 48 * v14), v13);
      v10 = v9;
      if ( v9 < 0 )
        break;
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 304) )
        goto LABEL_11;
    }
    v18 = 612;
    goto LABEL_20;
  }
LABEL_11:
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 492) = 0;
  return v10;
}
