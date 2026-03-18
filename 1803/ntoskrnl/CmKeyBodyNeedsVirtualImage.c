/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 */

char __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  char v1; // di
  bool v3; // si
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r9
  ULONG_PTR v7; // rcx
  __int64 v8; // r8

  v1 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  CmpLockRegistry();
  v5 = *(_QWORD *)(a1 + 8);
  ExAcquirePushLockSharedEx(v5 + 40, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 1u);
  if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v3 = (*(_BYTE *)(v4 + 4152) & 0x10) != 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0LL;
  if ( !*(_WORD *)(v7 + 58) )
    v8 = v3;
  if ( (*(_DWORD *)(a1 + 48) & 0x10) == 0 )
    v1 = v8;
  CmpUnlockKcb(v7, (unsigned __int8)v8, v8, v6);
  CmpUnlockRegistry();
  return v1;
}
