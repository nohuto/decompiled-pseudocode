/*
 * XREFs of vEnableSynchronize @ 0x1C011CAB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetTimer @ 0x1C0212D98 (UserSetTimer.c)
 */

void __fastcall vEnableSynchronize(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // esi
  signed __int32 v7; // ett

  v1 = *(_DWORD *)(a1 + 2144);
  if ( (v1 & 0xC0) != 0 )
  {
    if ( (unsigned int)UserIsUserCritSecIn() )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      UserEnterUserCritSec(v4, v3, v5);
    }
    if ( (v1 & 0x80u) != 0 && !++gcSynchronizeTimer )
      gidSynchronizeTimer = UserSetTimer();
    if ( (v1 & 0x40) != 0 )
      ++gcSynchronizeFlush;
    _m_prefetchw((const void *)(a1 + 32));
    do
      v7 = *(_DWORD *)(a1 + 32);
    while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v7 | 0x800, v7) );
    if ( v6 )
      UserLeaveUserCritSec();
  }
}
