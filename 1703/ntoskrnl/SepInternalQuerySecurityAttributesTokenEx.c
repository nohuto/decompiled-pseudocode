/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x1400372B0 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeQuerySecurityAttributesToken @ 0x1404F76E0 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1404F7910 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepPotentialGlobalTableAttribute @ 0x140035648 (SepPotentialGlobalTableAttribute.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140066010 (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14008A070 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140093E50 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140154F04 (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x140247E80 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepInternalFillNoAttribs @ 0x140247F28 (SepInternalFillNoAttribs.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1402639B8 (AuthzBasepSecurityAttributePresent.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  _DWORD *v8; // rdi
  bool v10; // zf
  unsigned int v14; // r14d
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // r14
  KIRQL v17; // r15
  __int64 SecurityAttributesList; // rax
  int SecurityAttributesToken; // ebx
  char v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(v21) = a2;
  v8 = 0LL;
  v10 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v21 = 0;
  if ( !v10 )
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  if ( a5 )
    goto LABEL_10;
  if ( (SepSingletonGlobal[4] & 1) == 0 || !a3 )
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  v14 = 0;
  if ( a4 )
  {
    while ( SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a3 + 16LL * v14))
         && !(unsigned __int8)AuthzBasepSecurityAttributePresent(*(_QWORD *)(a1 + 776), a3 + 16LL * v14) )
    {
      if ( ++v14 >= a4 )
        goto LABEL_10;
    }
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  }
LABEL_10:
  if ( (int)SepGetProcUniqueLuidAndIndexFromToken(a1, &v21, &v20) < 0 )
    return SepInternalFillNoAttribs(a6, a7, a8);
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v21);
  v16 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return SepInternalFillNoAttribs(a6, a7, a8);
  v17 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
  if ( *((_QWORD *)v16 + 2) )
  {
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v8 = (_DWORD *)SecurityAttributesList;
    SecurityAttributesToken = SecurityAttributesList
                            ? AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v16 + 2), SecurityAttributesList, 0LL)
                            : -1073741801;
  }
  else
  {
    SecurityAttributesToken = -1073741275;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v16);
  __writecr8(v17);
  if ( SecurityAttributesToken == -1073741275 )
    return SepInternalFillNoAttribs(a6, a7, a8);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_22;
  if ( v8 )
  {
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, a7, a8);
LABEL_22:
    if ( v8 )
    {
      AuthzBasepFreeSecurityAttributesList(v8);
      ExFreePoolWithTag(v8, 0);
    }
  }
  return (unsigned int)SecurityAttributesToken;
}
