/*
 * XREFs of SepTokenIsOwner @ 0x1400151D0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1400829D0 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepTokenIsOwner(__int64 a1)
{
  __int64 result; // rax

  result = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 232), 0, 0);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(a1 + 128) )
      return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 504), 1, 0);
  }
  return result;
}
