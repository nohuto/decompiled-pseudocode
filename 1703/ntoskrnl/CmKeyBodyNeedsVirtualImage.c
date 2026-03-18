/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x14056C82C
 * Callers:
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x140521290 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 * Callees:
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v1; // di
  bool v3; // bl
  __int64 v4; // rbp
  __int64 v5; // rcx
  bool v6; // r8

  v1 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  CmpLockRegistry();
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v3 = (*(_BYTE *)(v4 + 5360) & 0x10) != 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  if ( !*(_WORD *)(v5 + 58) )
    v6 = v3;
  if ( (*(_DWORD *)(a1 + 48) & 0x10) == 0 )
    v1 = v6;
  CmpUnlockKcb(v5);
  CmpUnlockRegistry();
  return v1;
}
