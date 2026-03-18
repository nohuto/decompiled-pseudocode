/*
 * XREFs of ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x180180EA8
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18017FD8C (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     _anonymous_namespace_::SynthesizeDescription @ 0x180181288 (_anonymous_namespace_--SynthesizeDescription.c)
 */

void __fastcall CAnimationLoggingManager::LogKeyframeAnimationDirtiedTarget(
        wchar_t **this,
        struct CKeyframeAnimation *a2)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // r14
  wchar_t *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource((CAnimationLoggingManager *)this, a2);
  v5 = word_180252860;
  if ( *((_QWORD *)DebugInfoForResource + 1) )
    v5 = (wchar_t *)*((_QWORD *)DebugInfoForResource + 1);
  if ( !*v5 )
  {
    v5 = this[19];
    if ( !v5 || !*v5 )
    {
      v6 = anonymous_namespace_::SynthesizeDescription(a2);
      *((_QWORD *)DebugInfoForResource + 1) = v6;
      v5 = (wchar_t *)v6;
      *((_DWORD *)a2 + 8) &= ~0x10u;
      *((_DWORD *)a2 + 8) |= v6 != 0 ? 0x10 : 0;
    }
  }
  v7 = (*((__int64 (__fastcall **)(wchar_t **))*this + 15))(this);
  CTelemetryFrames::FrameDirtiedByKeyframeAnimation(*(_DWORD *)(v7 + 128), *(_DWORD *)DebugInfoForResource, v5);
}
