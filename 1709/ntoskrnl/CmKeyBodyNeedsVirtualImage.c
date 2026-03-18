/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x1406903A4
 * Callers:
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x14056AC30 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v1; // di
  bool v3; // si
  __int64 v4; // r14
  __int64 v5; // rbx
  ULONG_PTR v6; // rcx
  bool v7; // r8

  v1 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  CmpLockRegistry();
  v5 = *(_QWORD *)(a1 + 8);
  ExAcquirePushLockSharedEx(v5 + 40, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 1u);
  if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v3 = (*(_BYTE *)(v4 + 5360) & 0x10) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(v6 + 58) )
    v7 = v3;
  if ( (*(_DWORD *)(a1 + 48) & 0x10) == 0 )
    v1 = v7;
  CmpUnlockKcb(v6);
  CmpUnlockRegistry();
  return v1;
}
