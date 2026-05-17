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

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // eax
  _DWORD *v5; // r8
  __int16 v6; // dx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1LL, a1, 0LL, &v10);
  if ( !a1 )
    return 0LL;
  LOWORD(v3) = 10;
  LOBYTE(v2) = 1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, v2, v3, (unsigned int)&v8, (__int64)&v9);
  v5 = v9;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( !v5 || !v8 || v8 != *v5 )
    return 0LL;
  v6 = *(_WORD *)(v10 + 4);
  if ( v6 == 14948 )
    v6 = 332;
  if ( v6 == -31132 )
    return v5;
  else
    return 0LL;
}
