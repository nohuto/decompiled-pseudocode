/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x180084B60 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800A1DBC (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800A2348 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A48AC (-SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800A4BEC (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x1800A6B20 (--0KeyframeSequence@@QEAA@I@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A7440 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BB200 (--4-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800BBA18 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800BC708 (-DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Composit.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BE6E4 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  KeyframeSequence **v3; // r14
  __int64 v7; // rdx
  __int64 Resource; // rax
  __int64 v9; // rdx
  int v10; // eax
  DWORD v11; // ebx
  unsigned int v12; // eax
  KeyframeSequence *v13; // rax
  void *v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm6_4
  float *v17; // rbp
  __int64 v18; // r8
  unsigned int v19; // esi
  int v20; // r15d
  int CacheSizeForType; // eax
  __int64 v23; // rax
  void *v24; // rax
  __int64 v25; // rax
  DWORD v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  KeyframeSequence *v30; // rsi
  unsigned int v31; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  void *lpMem; // [rsp+70h] [rbp+8h] BYREF

  v3 = (KeyframeSequence **)((char *)this + 312);
  if ( *((_QWORD *)this + 39) || *((_QWORD *)this + 46) )
  {
    v31 = 126;
    goto LABEL_52;
  }
  v7 = *((unsigned int *)a3 + 3);
  if ( !(_DWORD)v7 )
  {
    v31 = 132;
    goto LABEL_52;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    CacheSizeForType = GetCacheSizeForType(*((unsigned int *)this + 34));
    if ( *((_DWORD *)a3 + 13) != CacheSizeForType )
    {
      v31 = 139;
LABEL_52:
      v26 = -2003303421;
      goto LABEL_53;
    }
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v31 = 145;
    goto LABEL_52;
  }
  if ( *((unsigned int *)a3 + 5) < 48 * (unsigned __int64)*((unsigned int *)a3 + 2) )
  {
    v31 = 151;
    goto LABEL_52;
  }
  Resource = CResourceTable::GetResource(a2, v7, 118LL);
  if ( !Resource )
  {
    v31 = 158;
    goto LABEL_52;
  }
  ReplaceInterface<CSharedSection,CSharedSection>((char *)this + 272, Resource);
  v9 = *((unsigned int *)a3 + 11);
  if ( (_DWORD)v9 )
  {
    v25 = CResourceTable::GetResource(a2, v9, 2LL);
    if ( !v25 || *((_DWORD *)a3 + 8) != 4 )
    {
      v31 = 172;
      goto LABEL_52;
    }
    *((_QWORD *)this + 46) = v25;
  }
  *((_DWORD *)this + 70) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 71) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 72) = *((_DWORD *)a3 + 2);
  v10 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v11 = v10;
  if ( v10 < 0 )
  {
    v31 = 181;
  }
  else
  {
    if ( *((_DWORD *)a3 + 13) )
    {
      v23 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 12), 118LL);
      ReplaceInterface<CSharedSection,CSharedSection>((char *)this + 296, v23);
      v24 = CSharedSection::ResolveAllocation(
              *((CSharedSection **)this + 37),
              *((unsigned int *)a3 + 14),
              *((unsigned int *)a3 + 13));
      *((_QWORD *)this + 38) = v24;
      if ( !v24 )
      {
        v26 = -2147024882;
        v31 = 192;
        goto LABEL_53;
      }
      if ( *((_DWORD *)a3 + 15) )
        memset_0(v24, 0, *((unsigned int *)a3 + 13));
    }
    v12 = *((_DWORD *)a3 + 16);
    if ( v12 > 1 )
    {
      v31 = 210;
      goto LABEL_52;
    }
    *((_DWORD *)this + 111) = v12;
    v13 = (KeyframeSequence *)WPF::ProcessHeapImpl::AllocClear(0x88uLL);
    if ( !v13 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    lpMem = KeyframeSequence::KeyframeSequence(v13, *((_DWORD *)this + 72));
    std::unique_ptr<KeyframeSequence>::operator=(v3, &lpMem);
    v14 = lpMem;
    if ( lpMem )
    {
      KeyframeSequence::RemoveAllKeyFrames((KeyframeSequence *)lpMem);
      WPF::ProcessHeapImpl::Free(v14);
    }
    v10 = CKeyframeAnimation::DetermineCoordinateSpace(*((unsigned int *)this + 34), *((unsigned int *)a3 + 10), &lpMem);
    v11 = v10;
    if ( v10 < 0 )
    {
      v31 = 224;
    }
    else
    {
      v10 = CKeyframeAnimation::SetIterationInfo(this, v15, *((unsigned int *)a3 + 8));
      v11 = v10;
      if ( v10 >= 0 )
      {
        v16 = 0.0;
        v17 = (float *)CSharedSection::ResolveAllocation(
                         *((CSharedSection **)this + 34),
                         *((unsigned int *)this + 71),
                         *((unsigned int *)this + 70));
        if ( v17 )
        {
          v19 = 0;
          if ( *((_DWORD *)this + 72) )
          {
            v20 = (int)lpMem;
            while ( 1 )
            {
              v16 = v19 ? fmaxf(v16 + 0.001, v17[12 * v19]) : 0.0;
              v10 = CKeyframeAnimation::SetKeyframeData(this, v19, v18, &v17[12 * v19], v20);
              v11 = v10;
              if ( v10 < 0 )
                break;
              if ( ++v19 >= *((_DWORD *)this + 72) )
                goto LABEL_24;
            }
            v31 = 259;
          }
          else
          {
LABEL_24:
            *((_QWORD *)this + 48) = 0LL;
            *((_QWORD *)this + 49) = 0LL;
            *((_QWORD *)this + 50) = 0LL;
            *((_QWORD *)this + 51) = 0LL;
            *(_QWORD *)((char *)this + 436) = 0LL;
            v10 = CBaseExpression::TryRegisterWithExpressionManager(this);
            v11 = v10;
            if ( v10 >= 0 )
              return 0;
            v31 = 270;
          }
          goto LABEL_46;
        }
        v26 = -2147024882;
        v31 = 237;
LABEL_53:
        v11 = v26;
        goto LABEL_54;
      }
      v31 = 231;
    }
  }
LABEL_46:
  v26 = v10;
LABEL_54:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, v31);
  v30 = *v3;
  if ( *v3 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*v3);
    WPF::ProcessHeapImpl::Free(v30);
    *v3 = 0LL;
  }
  ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 272, v27, v28, v29);
  return v11;
}
