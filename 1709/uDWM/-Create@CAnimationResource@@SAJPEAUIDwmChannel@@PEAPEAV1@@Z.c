/*
 * XREFs of ?Create@CAnimationResource@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18008A328
 * Callers:
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x18008A990 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::Create(struct IDwmChannel *a1, struct CAnimationResource **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           104LL);
    if ( v5 )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)v5 = &CAnimationResource::`vftable';
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_DWORD *)(v5 + 24) = 1;
      *(_QWORD *)(v5 + 32) = 0LL;
      *(_QWORD *)(v5 + 40) = 0LL;
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_QWORD *)(v5 + 56) = 0LL;
      *(_DWORD *)(v5 + 64) = 0;
      *(_QWORD *)(v5 + 72) = 0LL;
      *(_WORD *)(v5 + 80) = 0;
      *(_DWORD *)(v5 + 84) = 0;
      *(_DWORD *)(v5 + 88) = 7;
      *(_QWORD *)(v5 + 96) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      *(_QWORD *)(v5 + 8) = a1;
      *a2 = (struct CAnimationResource *)v5;
      return v2;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147024809;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x15u);
  return v2;
}
