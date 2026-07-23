/*
 * XREFs of SepTokenIsOwner @ 0x140063010
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1401047E0 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14005E750 (SepSidInTokenSidHash.c)
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 */

char __fastcall SepTokenIsOwner(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  void *v7; // rbx
  char result; // al

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v7 = *(void **)(a2 + 8);
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v6 )
      v7 = (void *)(a2 + v6);
    else
      v7 = 0LL;
  }
  result = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 232), 0LL, v7, 0, 0, 0, a4);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 128) )
      return SepSidInToken(a1, 0, (_DWORD)v7, 0, 1, 0, a4);
  }
  return result;
}
