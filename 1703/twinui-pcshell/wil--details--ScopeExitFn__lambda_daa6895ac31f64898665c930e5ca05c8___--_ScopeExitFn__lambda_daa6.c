/*
 * XREFs of wil::details::ScopeExitFn__lambda_daa6895ac31f64898665c930e5ca05c8___::_ScopeExitFn__lambda_daa6895ac31f64898665c930e5ca05c8___ @ 0x1800B8874
 * Callers:
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$0 @ 0x18019C9FB (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x18019CA37 (_CVirtualTouchpadExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x18019CA43 (_CVirtualTouchpadExperienceManager--OnViewShown_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe__&___ptr64_::Run_::_1_::dtor$0 @ 0x18019CA7F (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe__-___ptr6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_daa6895ac31f64898665c930e5ca05c8___::_ScopeExitFn__lambda_daa6895ac31f64898665c930e5ca05c8___(
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
