/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180033D5C
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x180033D50 (__imp_load_GetTokenInformation.c)
 *     __imp_load_GetSidLengthRequired @ 0x1800342D4 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x1800342E0 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x1800342EC (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x1800342F8 (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x180034304 (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x180034310 (__imp_load_IsValidSid.c)
 *     __imp_load_EqualSid @ 0x18003431C (__imp_load_EqualSid.c)
 *     __imp_load_InitializeAcl @ 0x180034328 (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x180034334 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x180034340 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetAce @ 0x18003434C (__imp_load_GetAce.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x180034358 (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x180034364 (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x180034370 (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x18003437C (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x180034388 (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_SetSecurityDescriptorSacl @ 0x180034394 (__imp_load_SetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x1800343A0 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x1800343AC (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x1800343B8 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x1800343C4 (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x1800343D0 (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AddAccessAllowedAceEx @ 0x1800343DC (__imp_load_AddAccessAllowedAceEx.c)
 *     __imp_load_SetKernelObjectSecurity @ 0x1800343E8 (__imp_load_SetKernelObjectSecurity.c)
 *     __imp_load_CheckTokenMembership @ 0x1800344CD (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x1800344D9 (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x1800344E5 (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x1800344F1 (__imp_load_FreeSid.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x1800344FD (__imp_load_GetKernelObjectSecurity.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800DDF20 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_base_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_base_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
