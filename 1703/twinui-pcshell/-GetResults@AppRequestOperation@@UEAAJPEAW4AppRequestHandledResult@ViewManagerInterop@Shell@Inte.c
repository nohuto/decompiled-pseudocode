/*
 * XREFs of ?GetResults@AppRequestOperation@@UEAAJPEAW4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180112040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppRequestOperation::GetResults(
        AppRequestOperation *this,
        enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult *a2)
{
  *(_DWORD *)a2 = _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 0, 0);
  return 0LL;
}
