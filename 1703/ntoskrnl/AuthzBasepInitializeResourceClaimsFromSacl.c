/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x14008E7E0 (SepFilterCheck.c)
 *     SepNormalAccessCheck @ 0x140090270 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140090C10 (SepMaximumAccessCheck.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x1401331B0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401332E0 (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1406F5B50 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400654EC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x140065ED0 (AuthzBasepMemAlloc.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14008A070 (AuthzBasepQuerySecurityAttributesToken.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140262EC0 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  bool v11; // zf
  int v12; // r15d
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-B8h]
  _QWORD *v20; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v20 = a2;
  v17 = 2;
  v18 = 0LL;
  v19 = 0LL;
  v3 = 0;
  v4 = P;
  v5 = (_DWORD *)AuthzBasepMemAlloc(48LL, a2, 1950442835LL);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v7 = a1 + 8;
  v8 = v5 + 2;
  v9 = 0;
  v8[1] = v8;
  *v8 = v8;
  v6[6] = 0;
  *((_QWORD *)v6 + 5) = v6 + 8;
  *((_QWORD *)v6 + 4) = v6 + 8;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_3;
  while ( 1 )
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v11 = *(_BYTE *)v7 == 18;
    v4 = P;
    v15 = 256;
    if ( !v11 || (*(_BYTE *)(v7 + 1) & 8) != 0 )
      goto LABEL_9;
    v12 = *(unsigned __int16 *)(v7 + 2) - 4 * *(unsigned __int8 *)(v7 + 9);
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 4 * (*(unsigned __int8 *)(v7 + 9) + 4LL),
           (unsigned int)(v12 - 16),
           P,
           &v15);
    if ( v3 == -1073741789 )
      break;
LABEL_20:
    if ( v3 < 0 )
      goto LABEL_10;
    v19 = v4;
    LOWORD(v18) = 1;
    HIDWORD(v18) = 1;
    v14 = AuthzBasepQuerySecurityAttributesToken(v6, v4, 1LL, 0LL, 0, &v16);
    v3 = v14;
    if ( v14 == -1073741789 || v14 == -1073741275 )
      v3 = 0;
    if ( v3 < 0 )
      goto LABEL_10;
    if ( v16 <= 0x10 )
      v3 = AuthzBasepSetSecurityAttributesToken(v6, &v17, (__int64)&v18);
    if ( v3 < 0 )
      goto LABEL_10;
LABEL_9:
    ++v9;
    v7 += *(unsigned __int16 *)(v7 + 2);
    if ( v9 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_10;
  }
  v4 = (_BYTE *)AuthzBasepMemAlloc(v15, v13, 1950442835LL);
  if ( v4 )
  {
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 4 * (*(unsigned __int8 *)(v7 + 9) + 4LL),
           (unsigned int)(v12 - 16),
           v4,
           &v15);
    goto LABEL_20;
  }
  v3 = -1073741801;
LABEL_10:
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
  {
    AuthzBasepFreeSecurityAttributesList(v6);
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)v3;
  }
LABEL_3:
  *v20 = v6;
  return (unsigned int)v3;
}
