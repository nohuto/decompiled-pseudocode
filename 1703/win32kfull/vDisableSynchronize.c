/*
 * XREFs of vDisableSynchronize @ 0x1C010EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C010EE58 (-vDisableTimers@@YAXK@Z.c)
 */

__int64 __fastcall vDisableSynchronize(__int64 a1)
{
  int v2; // esi
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  signed __int32 v8; // ett

  v2 = 0;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v3 = 0;
    result = UserIsUserCritSecInShared();
    v2 = result;
  }
  else
  {
    v3 = 1;
    result = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
    if ( (_DWORD)result )
    {
      v2 = 1;
      v3 = 0;
    }
    else
    {
      result = UserEnterUserCritSec(v6, v5, v7);
    }
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    if ( v2 )
      UserPostNKAPC(
        KeGetCurrentThread(),
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPC,
        *(unsigned int *)(a1 + 2144));
    else
      vDisableTimers(*(_DWORD *)(a1 + 2144));
    _m_prefetchw((const void *)(a1 + 32));
    do
    {
      v8 = *(_DWORD *)(a1 + 32);
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v8 & 0xFFFFF7FF, v8);
    }
    while ( v8 != (_DWORD)result );
  }
  if ( v3 )
    return UserLeaveUserCritSec();
  return result;
}
