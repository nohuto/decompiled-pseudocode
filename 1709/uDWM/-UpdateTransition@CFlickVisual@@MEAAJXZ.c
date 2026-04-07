/*
 * XREFs of ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x180089290
 * Callers:
 *     <none>
 * Callees:
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x180082E14 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800891E0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CFlickVisual::UpdateTransition(CFlickVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 44);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CFlickVisual::Stop(this);
  else
    CContactManager::PostFlickFeedbackUpdate(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22),
      *((_DWORD *)this + 74),
      *((_DWORD *)this + 75),
      (_QWORD *)this + 39,
      v1 != 0);
  return 0LL;
}
