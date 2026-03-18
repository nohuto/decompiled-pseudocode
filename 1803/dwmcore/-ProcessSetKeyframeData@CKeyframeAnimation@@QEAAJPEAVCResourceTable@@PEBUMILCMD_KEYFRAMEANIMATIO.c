/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18003EB04
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x18002BC88 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18003B55C (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18003BCD0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x18003E380 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18003E7DC (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18003F85C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800C39B4 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C3EDC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C6870 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  unsigned int v6; // edx
  __int64 Resource; // rax
  unsigned int v8; // edx
  int v9; // ebx
  void *v10; // rbp
  __int64 v12; // rax
  int CacheSizeForType; // eax
  __int64 v14; // rax
  void *v15; // rax
  unsigned int v16; // eax
  KeyframeSequence *v17; // rdi
  __int64 v18; // rcx

  if ( *((_QWORD *)this + 41) || *((_QWORD *)this + 48) )
  {
    v16 = 234;
    goto LABEL_37;
  }
  v6 = *((_DWORD *)a3 + 3);
  if ( !v6 )
  {
    v16 = 240;
    goto LABEL_37;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    CacheSizeForType = GetCacheSizeForType(*((unsigned int *)this + 36));
    if ( *((_DWORD *)a3 + 13) != CacheSizeForType )
    {
      v16 = 247;
LABEL_37:
      v9 = -2003303421;
      goto LABEL_38;
    }
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v16 = 253;
    goto LABEL_37;
  }
  if ( *((unsigned int *)a3 + 5) < 48 * (unsigned __int64)*((unsigned int *)a3 + 2) )
  {
    v16 = 259;
    goto LABEL_37;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v6, 0x83u);
  if ( !Resource )
  {
    v16 = 266;
    goto LABEL_37;
  }
  ReplaceInterface<CSharedSection,CSharedSection>((char *)this + 288, Resource);
  v8 = *((_DWORD *)a3 + 11);
  if ( v8 )
  {
    v12 = CResourceTable::GetResource((__int64)a2, v8, 2u);
    if ( !v12 || *((_DWORD *)a3 + 8) != 4 )
    {
      v16 = 280;
      goto LABEL_37;
    }
    *((_QWORD *)this + 48) = v12;
  }
  *((_DWORD *)this + 74) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 75) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 76) = *((_DWORD *)a3 + 2);
  v9 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  if ( v9 < 0 )
  {
    v16 = 289;
    goto LABEL_38;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    v14 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 12), 0x83u);
    ReplaceInterface<CSharedSection,CSharedSection>((char *)this + 312, v14);
    v15 = CSharedSection::ResolveAllocation(
            *((CSharedSection **)this + 39),
            *((unsigned int *)a3 + 14),
            *((unsigned int *)a3 + 13));
    *((_QWORD *)this + 40) = v15;
    if ( !v15 )
    {
      v9 = -2147024882;
      v16 = 300;
      goto LABEL_38;
    }
    if ( *((_DWORD *)a3 + 15) )
      memset_0(v15, 0, *((unsigned int *)a3 + 13));
  }
  v10 = CSharedSection::ResolveAllocation(
          *((CSharedSection **)this + 36),
          *((unsigned int *)this + 75),
          *((unsigned int *)this + 74));
  if ( v10 )
  {
    v9 = CKeyframeAnimation::SetIterationInfo(
           (__int64)this,
           *((float *)a3 + 7),
           *((_DWORD *)a3 + 8),
           *((float *)a3 + 6),
           *((_DWORD *)a3 + 9));
    if ( v9 < 0 )
    {
      v16 = 316;
    }
    else
    {
      v9 = CKeyframeAnimation::SetKeyFrameData((__int64)this, *((_DWORD *)a3 + 16), *((_DWORD *)a3 + 10), (__int64)v10);
      if ( v9 < 0 )
      {
        v16 = 321;
      }
      else
      {
        v9 = CBaseExpression::TryRegisterWithExpressionManager(this);
        if ( v9 >= 0 )
          return 0;
        v16 = 323;
      }
    }
  }
  else
  {
    v9 = -2147024882;
    v16 = 309;
  }
LABEL_38:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v16);
  v17 = (KeyframeSequence *)*((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = 0LL;
  if ( v17 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v17);
    v18 = *((_QWORD *)v17 + 8);
    if ( v18 )
    {
      *((_QWORD *)v17 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    operator delete(v17);
  }
  ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 288);
  return (unsigned int)v9;
}
