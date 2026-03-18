/*
 * XREFs of ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801977E8
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801A7194 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18003BCD0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18003BD74 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x18003E380 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18003E75C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18003E7DC (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18003F85C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z @ 0x1800C5424 (--$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C6870 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::Initialize(
        __int64 a1,
        struct CResource *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        float a10,
        __int64 a11,
        float a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  int updated; // ebx
  unsigned int CacheSizeForType; // eax
  SIZE_T v18; // r8
  size_t v19; // rbx
  void *v20; // rax
  unsigned int v21; // eax
  KeyframeSequence *v22; // rsi
  __int64 v23; // rcx

  updated = CBaseExpression::SetTarget(a1, 0, a2, 0, 0x46u, 0, 0, 0LL);
  if ( updated < 0 )
  {
    v21 = 78;
  }
  else
  {
    CacheSizeForType = GetCacheSizeForType(*(_DWORD *)(a1 + 144));
    v18 = CacheSizeForType;
    if ( !CacheSizeForType )
      v18 = 1LL;
    v19 = CacheSizeForType;
    v20 = HeapAlloc(WPF::g_processHeap, 0, v18);
    *(_QWORD *)(a1 + 320) = v20;
    if ( v20 )
    {
      memset_0(v20, 0, v19);
      *(_DWORD *)(a1 + 304) = 2;
      updated = CKeyframeAnimation::SetIterationInfo(a1, a10, 0, a12, 0);
      if ( updated < 0 )
      {
        v21 = 91;
      }
      else
      {
        updated = CKeyframeAnimation::SetKeyFrameData(a1, 0, 0, a15);
        if ( updated < 0 )
        {
          v21 = 96;
        }
        else
        {
          updated = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
          if ( updated < 0 )
          {
            v21 = 98;
          }
          else
          {
            updated = CKeyframeAnimation::UpdatePlaybackState(a1, 1u, 1, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL));
            if ( updated >= 0 )
              return (unsigned int)updated;
            v21 = 103;
          }
        }
      }
    }
    else
    {
      updated = -2147024882;
      v21 = 82;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v21);
  v22 = *(KeyframeSequence **)(a1 + 328);
  *(_QWORD *)(a1 + 328) = 0LL;
  if ( v22 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v22);
    v23 = *((_QWORD *)v22 + 8);
    if ( v23 )
    {
      *((_QWORD *)v22 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    operator delete(v22);
  }
  SAFE_DELETE_ARRAY<unsigned char>((void **)(a1 + 320));
  return (unsigned int)updated;
}
