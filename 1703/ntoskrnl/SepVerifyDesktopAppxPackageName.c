/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x1402471D0
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140247014 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400654EC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140154F04 (AuthzBasepAllocateSecurityAttributesList.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeQuerySecurityAttributesToken @ 0x1404F76E0 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  int v6; // esi
  _BYTE *PoolWithTag; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *SecurityAttributesList; // rax
  _DWORD *v12; // r14
  ACL *v13; // rcx
  __int64 v14; // rax
  _DWORD *AceByType; // rax
  _DWORD *v16; // r15
  int v17; // eax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE *v22; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[512]; // [rsp+90h] [rbp-70h] BYREF

  v22 = a3;
  v20 = 0;
  NumberOfBytes = 0LL;
  *a3 = 0;
  SecurityAttributesToken = 0;
  v21 = 2;
  v6 = 0;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !SeSecurityAttributePresent((__int64)a1, (struct _KTHREAD *)&DestinationString) )
    return (unsigned int)SecurityAttributesToken;
  PoolWithTag = P;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              (_DWORD)a1,
                              (unsigned int)&DestinationString,
                              1,
                              (unsigned int)P,
                              512,
                              (__int64)&NumberOfBytes);
  if ( SecurityAttributesToken == -1073741789 )
  {
    v10 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20206553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                (_DWORD)a1,
                                (unsigned int)&DestinationString,
                                1,
                                (_DWORD)PoolWithTag,
                                v10,
                                (__int64)&NumberOfBytes);
  }
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  if ( !PoolWithTag )
    return (unsigned int)-1073739509;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v9, v8);
  v12 = SecurityAttributesList;
  if ( !SecurityAttributesList )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_25;
  }
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v21, (__int64)PoolWithTag);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_24;
  do
  {
    if ( (~(unsigned __int8)*(_WORD *)(a2 + 2) & 4) != 0 )
    {
LABEL_13:
      v13 = 0LL;
      goto LABEL_18;
    }
    if ( *(__int16 *)(a2 + 2) >= 0 )
    {
      v13 = *(ACL **)(a2 + 32);
    }
    else
    {
      v14 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v14 )
        goto LABEL_13;
      v13 = (ACL *)(v14 + a2);
    }
LABEL_18:
    AceByType = RtlFindAceByType(v13, 9u, (PULONG)&NumberOfBytes + 1);
    v16 = AceByType;
    if ( AceByType )
    {
      v17 = AuthzBasepEvaluateAceCondition(
              a1,
              v12,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              &AceByType[*((unsigned __int8 *)AceByType + 9) + 4],
              *((unsigned __int16 *)AceByType + 1) - (4 * (unsigned int)*((unsigned __int8 *)AceByType + 9) + 8) - 8,
              0,
              0,
              &v20);
      v6 = v20;
      SecurityAttributesToken = v17;
      if ( v17 < 0 )
        break;
      if ( v20 == 1 )
        goto LABEL_23;
    }
    ++HIDWORD(NumberOfBytes);
  }
  while ( v16 );
  if ( v6 != 1 )
    goto LABEL_24;
LABEL_23:
  *v22 = 1;
LABEL_24:
  AuthzBasepFreeSecurityAttributesList(v12);
LABEL_25:
  if ( PoolWithTag && PoolWithTag != P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SecurityAttributesToken;
}
