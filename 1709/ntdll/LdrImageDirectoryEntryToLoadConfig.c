/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8
 * Callers:
 *     LdrpUnsuppressAddressTakenIat @ 0x180001314 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpGetTargetRvaFlag @ 0x1800016B8 (RtlpGetTargetRvaFlag.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180020260 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002259C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180022F34 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F6A00 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(void *a1)
{
  int v2; // eax
  _DWORD *v3; // r8
  unsigned __int16 Machine; // dx
  int v6; // [rsp+40h] [rbp+8h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1u, a1, 0LL, &OutHeaders);
  if ( !a1 )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx((int)a1, (__int64)&v7);
  v3 = (_DWORD *)v7;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  Machine = OutHeaders->FileHeader.Machine;
  if ( Machine == 14948 )
    Machine = 332;
  if ( Machine == 0x8664 )
    return v3;
  else
    return 0LL;
}
