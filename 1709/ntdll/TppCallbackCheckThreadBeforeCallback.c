/*
 * XREFs of TppCallbackCheckThreadBeforeCallback @ 0x18007E9F0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     TppCheckForTransactions @ 0x18000EE1C (TppCheckForTransactions.c)
 */

void __fastcall TppCallbackCheckThreadBeforeCallback(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // r8
  void *v5; // r9

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    *(_GUID *)(a1 + 232) = NtCurrentTeb()->ActivityId;
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 436) & 1) == 0 )
      {
        *(_DWORD *)(a1 + 104) |= 8u;
        v3 = *(_DWORD *)(a1 + 104);
        if ( NtCurrentTeb()->IsImpersonating )
          *(_DWORD *)(a1 + 104) = v3 | 4;
        if ( TppCheckForTransactions() )
          *(_DWORD *)(v4 + 104) |= 0x10u;
        if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
          *(_DWORD *)(v4 + 104) |= 0x20u;
        if ( NtCurrentTeb()->PreferredLanguages != v5 )
          *(_DWORD *)(v4 + 104) |= 0x40u;
        if ( NtCurrentTeb()->SavedPriorityState != v5 )
          *(_DWORD *)(v4 + 104) |= 0x80u;
      }
    }
  }
}
