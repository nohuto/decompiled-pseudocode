/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::Run @ 0x1801101C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1800F7418 (-OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 */

char __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::Run(
        __int64 a1)
{
  char result; // al

  result = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 40LL);
  if ( result )
    return ViewEventDispatcher::OverrideNavigationLevelForView(
             *(RTL_SRWLOCK **)(*(_QWORD *)(a1 + 16) + 24LL),
             *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 40),
             2);
  return result;
}
