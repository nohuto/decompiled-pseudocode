/*
 * XREFs of wil::details::ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___::_ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___ @ 0x1801808A8
 * Callers:
 *     __lambda_fd1385ca299a5b2ab1a689d13634879a_::operator()_::_1_::dtor$0 @ 0x180180BCA (__lambda_fd1385ca299a5b2ab1a689d13634879a_--operator()_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$0 @ 0x1801819D5 (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x180182143 (_CVirtualTouchpadExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x18018224C (_CVirtualTouchpadExperienceManager--OnViewShown_--_1_--dtor$0.c)
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
