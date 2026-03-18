/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x140060010
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x14015E9E0 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeQuerySecurityAttributesToken @ 0x14050B450 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140546170 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14005C310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14005FD50 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x1400600B0 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14006C5FC (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140178488 (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1402A104C (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepInternalFillNoAttribs @ 0x1402A10F4 (SepInternalFillNoAttribs.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _QWORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdi
  int SecurityAttributesToken; // ebx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // rsi
  KIRQL v17; // r15
  _QWORD *SecurityAttributesList; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  size_t v21; // [rsp+20h] [rbp-38h]
  char v22; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v23 = 0;
  if ( (*(_DWORD *)(a1 + 200) & 0x20000) != 0
    || !a5 && !(unsigned __int8)SepDetermineGlobalTableCheckNeededForQuery(a1, a3, a4) )
  {
    LODWORD(v21) = a7;
    return (unsigned int)AuthzBasepQuerySecurityAttributesToken(*(_DWORD **)(a1 + 776), a3, a4, a6, v21, a8);
  }
  if ( (int)SepGetProcUniqueLuidAndIndexFromToken(a1, &v23, &v22) < 0 )
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v23);
  v16 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  v17 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
  if ( *((_QWORD *)v16 + 2) )
  {
    SecurityAttributesList = (_QWORD *)AuthzBasepAllocateSecurityAttributesList();
    v8 = SecurityAttributesList;
    SecurityAttributesToken = SecurityAttributesList
                            ? AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v16 + 2), SecurityAttributesList, 0)
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
    LODWORD(v21) = a7;
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, v21, a8);
  }
  if ( v8 )
  {
    AuthzBasepFreeSecurityAttributesList(v8, v19, v20);
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)SecurityAttributesToken;
}
