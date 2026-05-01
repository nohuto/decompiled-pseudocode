/*
 * XREFs of wil::details::ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___::_ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___ @ 0x1800CCBC4
 * Callers:
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$0 @ 0x1801EBBCB (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x1801EBC07 (_CVirtualTouchpadExperienceManager--OnViewShown_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_512366ecfeba81417a610fd392d16e61__&___ptr64_::Run_::_1_::dtor$0 @ 0x1801EBC43 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_512366ecfeba81417a610fd392d16e61__-___ptr6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___::_ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_DWORD *)(result + 736) = 0;
  }
  return result;
}
