/*
 * XREFs of ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800995B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000C028 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x180098F74 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180099244 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180099644 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180099B58 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::OnGlobalTimeUpdated(CScreenRotation *this)
{
  __int64 v1; // rax
  int v2; // ebx
  int v4; // ebx
  unsigned int v5; // eax

  v1 = *((_QWORD *)this + 37);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    v4 = *((_DWORD *)this + 76);
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28));
    if ( v4 == 1 )
    {
      v2 = CScreenRotation::PreDelayExpired(this);
      if ( v2 < 0 )
      {
        v5 = 469;
LABEL_8:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v5);
        CScreenRotation::Stop(this, 0);
      }
    }
    else
    {
      v2 = CScreenRotation::MidDelayExpired(this);
      if ( v2 < 0 )
      {
        v5 = 475;
        goto LABEL_8;
      }
    }
  }
  return (unsigned int)v2;
}
