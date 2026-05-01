/*
 * XREFs of ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x18006063C
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800653B8 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampSystemEdpQueryDplEnforcedPolicyOwnerIds(PSID Sid, unsigned __int16 **a2)
{
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v6[384]; // [rsp+30h] [rbp-198h] BYREF

  memset_0(v6, 0, 0x176uLL);
  *(_DWORD *)&UnicodeString.Length = 24510464;
  UnicodeString.Buffer = (PWSTR)v6;
  RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  return EdpQueryDplEnforcedPolicyOwnerIds(UnicodeString.Buffer, a2);
}
