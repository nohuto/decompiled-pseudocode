/*
 * XREFs of sub_18007B8F8 @ 0x18007B8F8
 * Callers:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 * Callees:
 *     sub_180028310 @ 0x180028310 (sub_180028310.c)
 */

void __fastcall sub_18007B8F8(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  int v3; // r8d
  __int64 v4; // r9
  PVOID v5; // r10

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 128);
    *(GUID *)(a1 + 232) = NtCurrentTeb()->ActivityId;
    if ( v1 )
    {
      if ( (*(_BYTE *)(v1 + 436) & 1) == 0 )
      {
        v2 = *(_DWORD *)(a1 + 104) | 8;
        *(_DWORD *)(a1 + 104) = v2;
        if ( NtCurrentTeb()->IsImpersonating )
          *(_DWORD *)(a1 + 104) = v2 | 4;
        if ( sub_180028310() )
        {
          v3 |= 0x10u;
          *(_DWORD *)(v4 + 104) = v3;
        }
        if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
        {
          v3 |= 0x20u;
          *(_DWORD *)(v4 + 104) = v3;
        }
        if ( NtCurrentTeb()->PreferredLanguages != v5 )
        {
          v3 |= 0x40u;
          *(_DWORD *)(v4 + 104) = v3;
        }
        if ( NtCurrentTeb()->SavedPriorityState != v5 )
          *(_DWORD *)(v4 + 104) = v3 | 0x80;
      }
    }
  }
}
