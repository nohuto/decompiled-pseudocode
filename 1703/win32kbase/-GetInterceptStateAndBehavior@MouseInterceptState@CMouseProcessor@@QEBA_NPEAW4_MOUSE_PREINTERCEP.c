/*
 * XREFs of ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C0084424
 * Callers:
 *     IsMouseInterceptEnabled @ 0x1C00887E0 (IsMouseInterceptEnabled.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C013194C (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C0084494 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
        CMouseProcessor::MouseInterceptState *this,
        enum _MOUSE_PREINTERCEPT_BEHAVIOR *a2)
{
  bool IsCurrentInputDesktopInterceptable; // si

  if ( a2 )
    *(_DWORD *)a2 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  IsCurrentInputDesktopInterceptable = CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this);
  if ( IsCurrentInputDesktopInterceptable && a2 )
    *(_DWORD *)a2 = *((_DWORD *)this + 5);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return IsCurrentInputDesktopInterceptable;
}
