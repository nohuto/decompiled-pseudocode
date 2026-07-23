/*
 * XREFs of sub_1800196A4 @ 0x1800196A4
 * Callers:
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 * Callees:
 *     sub_18001655C @ 0x18001655C (sub_18001655C.c)
 */

void __fastcall sub_1800196A4(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // r8
  PVOID v5; // r9

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    *(GUID *)(a1 + 232) = NtCurrentTeb()->ActivityId;
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 436) & 1) == 0 )
      {
        *(_DWORD *)(a1 + 104) |= 8u;
        v3 = *(_DWORD *)(a1 + 104);
        if ( NtCurrentTeb()->IsImpersonating )
          *(_DWORD *)(a1 + 104) = v3 | 4;
        if ( sub_18001655C() )
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
