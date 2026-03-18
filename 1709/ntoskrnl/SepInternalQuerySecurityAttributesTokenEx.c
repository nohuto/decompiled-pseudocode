/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x140017800
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x140130C80 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x140482C50 (NtQuerySecurityAttributesToken.c)
 *     SeQuerySecurityAttributesToken @ 0x14048C9E0 (SeQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400178A0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x140018090 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14001ABFC (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140089720 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14014C0E0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14025F5A0 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepInternalFillNoAttribs @ 0x14025F648 (SepInternalFillNoAttribs.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  void *v8; // rdi
  int SecurityAttributesToken; // ebx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // rsi
  KIRQL v17; // r15
  __int64 SecurityAttributesList; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v22 = 0;
  if ( (*(_DWORD *)(a1 + 200) & 0x20000) != 0
    || !a5 && !(unsigned __int8)SepDetermineGlobalTableCheckNeededForQuery(a1, a3, a4) )
  {
    return (unsigned int)AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  }
  if ( (int)SepGetProcUniqueLuidAndIndexFromToken(a1, &v22, &v21) < 0 )
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v22);
  v16 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  v17 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
  if ( *((_QWORD *)v16 + 2) )
  {
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v8 = (void *)SecurityAttributesList;
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
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  if ( SecurityAttributesToken >= 0 )
  {
    if ( !v8 )
      return (unsigned int)SecurityAttributesToken;
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, a7, a8);
  }
  if ( v8 )
  {
    AuthzBasepFreeSecurityAttributesList(v8, v19, v20);
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)SecurityAttributesToken;
}
