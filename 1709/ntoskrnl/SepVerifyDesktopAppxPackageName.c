/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x14025E908
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x14025E74C (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlFindAceByType @ 0x140087840 (RtlFindAceByType.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14014C0E0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeQuerySecurityAttributesToken @ 0x14048C9E0 (SeQuerySecurityAttributesToken.c)
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
  __int16 v13; // ax
  ACL *v14; // rcx
  __int64 v15; // rax
  _DWORD *AceByType; // rax
  _DWORD *v17; // r15
  int v18; // eax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE *v23; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[512]; // [rsp+90h] [rbp-70h] BYREF

  v23 = a3;
  v21 = 0;
  NumberOfBytes = 0LL;
  *a3 = 0;
  SecurityAttributesToken = 0;
  v22 = 2;
  v6 = 0;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !SeSecurityAttributePresent((__int64)a1, &DestinationString) )
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
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(
                              (__int64)SecurityAttributesList,
                              &v22,
                              (__int64)PoolWithTag);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_24;
  do
  {
    v13 = *(_WORD *)(a2 + 2);
    if ( (v13 & 4) == 0 )
    {
LABEL_13:
      v14 = 0LL;
      goto LABEL_18;
    }
    if ( v13 >= 0 )
    {
      v14 = *(ACL **)(a2 + 32);
    }
    else
    {
      v15 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v15 )
        goto LABEL_13;
      v14 = (ACL *)(v15 + a2);
    }
LABEL_18:
    AceByType = RtlFindAceByType(v14, 9u, (PULONG)&NumberOfBytes + 1);
    v17 = AceByType;
    if ( AceByType )
    {
      v18 = AuthzBasepEvaluateAceCondition(
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
              &v21);
      v6 = v21;
      SecurityAttributesToken = v18;
      if ( v18 < 0 )
        break;
      if ( v21 == 1 )
        goto LABEL_23;
    }
    ++HIDWORD(NumberOfBytes);
  }
  while ( v17 );
  if ( v6 != 1 )
    goto LABEL_24;
LABEL_23:
  *v23 = 1;
LABEL_24:
  AuthzBasepFreeSecurityAttributesList(v12);
LABEL_25:
  if ( PoolWithTag && PoolWithTag != P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SecurityAttributesToken;
}
