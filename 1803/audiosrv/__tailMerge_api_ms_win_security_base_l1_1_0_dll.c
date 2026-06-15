/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180061B5C
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x180061B50 (__imp_load_GetTokenInformation.c)
 *     __imp_load_GetSidLengthRequired @ 0x1800621EA (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x1800621F6 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x180062202 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x18006220E (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x18006221A (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x180062226 (__imp_load_IsValidSid.c)
 *     __imp_load_EqualSid @ 0x180062232 (__imp_load_EqualSid.c)
 *     __imp_load_InitializeAcl @ 0x18006223E (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x18006224A (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x180062256 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetAce @ 0x180062262 (__imp_load_GetAce.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x18006226E (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x18006227A (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x180062286 (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x180062292 (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x18006229E (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_SetSecurityDescriptorSacl @ 0x1800622AA (__imp_load_SetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x1800622B6 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x1800622C2 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x1800622CE (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x1800622DA (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x1800622E6 (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AddAccessAllowedAceEx @ 0x1800622F2 (__imp_load_AddAccessAllowedAceEx.c)
 *     __imp_load_SetKernelObjectSecurity @ 0x1800622FE (__imp_load_SetKernelObjectSecurity.c)
 *     __imp_load_CheckTokenMembership @ 0x1800623EF (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x1800623FB (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x180062407 (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x180062413 (__imp_load_FreeSid.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x18006241F (__imp_load_GetKernelObjectSecurity.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180049AA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_base_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_base_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
