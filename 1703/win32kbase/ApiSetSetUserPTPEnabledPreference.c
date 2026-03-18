/*
 * XREFs of ApiSetSetUserPTPEnabledPreference @ 0x1C013DDFC
 * Callers:
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C009BF98 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = IsSetUserPTPEnabledPreferenceSupported();
  if ( (int)result >= 0 )
    return SetUserPTPEnabledPreference(a1, a2, a3);
  return result;
}
