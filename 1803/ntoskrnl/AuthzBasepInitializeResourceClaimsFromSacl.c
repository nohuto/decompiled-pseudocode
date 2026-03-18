/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x14005EAA0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14005F060 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x140101D80 (SepFilterCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x140149980 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140149AA0 (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x140790F20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140791850 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14005FD50 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14006BBD4 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x1400BBFF8 (AuthzBasepMemAlloc.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1402C2DF8 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // r14
  _QWORD *v10; // rax
  unsigned int v11; // r12d
  bool v13; // zf
  int v14; // r13d
  __int64 v15; // rax
  int v16; // eax
  size_t v17; // [rsp+20h] [rbp-E0h]
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v22; // [rsp+48h] [rbp-B8h]
  __int64 *v23; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v23 = a2;
  v20 = 2;
  v21 = 0LL;
  v22 = 0LL;
  v3 = 0;
  v4 = P;
  v5 = (_DWORD *)AuthzBasepMemAlloc(0x30uLL);
  v8 = (__int64)v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v9 = a1 + 8;
  v10 = v5 + 2;
  v11 = 0;
  v10[1] = v10;
  *v10 = v10;
  *(_DWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 40) = v8 + 32;
  *(_QWORD *)(v8 + 32) = v8 + 32;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_3;
  while ( 1 )
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v13 = *(_BYTE *)v9 == 18;
    v4 = P;
    NumberOfBytes = 256;
    if ( !v13 || (*(_BYTE *)(v9 + 1) & 8) != 0 )
      goto LABEL_9;
    v14 = *(unsigned __int16 *)(v9 + 2) - 4 * *(unsigned __int8 *)(v9 + 9);
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v9 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v9 + 9) + 8,
           (unsigned int)(v14 - 16),
           P,
           &NumberOfBytes);
    if ( v3 == -1073741789 )
      break;
LABEL_20:
    if ( v3 < 0 )
      goto LABEL_10;
    v22 = v4;
    LOWORD(v21) = 1;
    HIDWORD(v21) = 1;
    LODWORD(v17) = 0;
    v16 = AuthzBasepQuerySecurityAttributesToken((_DWORD *)v8, (__int64)v4, 1LL, 0LL, v17, &NumberOfBytes_4);
    v3 = v16;
    if ( v16 == -1073741789 || v16 == -1073741275 )
      v3 = 0;
    if ( v3 < 0 )
      goto LABEL_10;
    if ( NumberOfBytes_4 <= 0x10 )
      v3 = AuthzBasepSetSecurityAttributesToken(v8, &v20, (__int64)&v21);
    if ( v3 < 0 )
      goto LABEL_10;
LABEL_9:
    ++v11;
    v9 += *(unsigned __int16 *)(v9 + 2);
    if ( v11 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_10;
  }
  v15 = AuthzBasepMemAlloc(NumberOfBytes);
  v4 = (_BYTE *)v15;
  if ( v15 )
  {
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v9 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v9 + 9) + 8,
           (unsigned int)(v14 - 16),
           v15,
           &NumberOfBytes);
    goto LABEL_20;
  }
  v3 = -1073741801;
LABEL_10:
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
  {
    AuthzBasepFreeSecurityAttributesList(v8, v6, v7);
    ExFreePoolWithTag((PVOID)v8, 0);
    return (unsigned int)v3;
  }
LABEL_3:
  *v23 = v8;
  return (unsigned int)v3;
}
