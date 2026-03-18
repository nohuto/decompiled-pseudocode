/*
 * XREFs of RtlAddMandatoryAce @ 0x1404A23F4
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401DF718 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140469F00 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404A1D38 (IopCreateSecurityDescriptorPerType.c)
 *     SepInitSystemDacls @ 0x14081C738 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x14082212C (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1404F5C90 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlAddMandatoryAce(
        PACL Acl,
        ULONG Revision,
        ULONG Flags,
        ULONG MandatoryFlags,
        UCHAR AceType,
        PSID LabelSid)
{
  __int64 v6; // rdi
  int v9; // ecx
  UCHAR AclRevision; // si
  PACE v11; // rdx
  WORD v12; // r8
  NTSTATUS result; // eax
  PACE Ace; // [rsp+20h] [rbp-28h] BYREF

  LODWORD(Ace) = 0;
  v6 = *(_QWORD *)&MandatoryFlags;
  WORD2(Ace) = 4096;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(*(PSID *)&MandatoryFlags) )
    return -1073741704;
  v9 = *(_DWORD *)(v6 + 2) - (_DWORD)Ace;
  if ( !v9 )
    v9 = *(unsigned __int16 *)(v6 + 6) - WORD2(Ace);
  if ( v9 )
    return -1073741811;
  if ( Acl->AclRevision > 4u )
    return -1073741735;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (Flags & 0xFFFFFFE0) != 0 || ((unsigned int)LabelSid & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &Ace) )
    return -1073741705;
  v11 = Ace;
  v12 = 4 * (*(unsigned __int8 *)(v6 + 1) + 4);
  if ( !Ace || (char *)Ace + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  Ace->Header.AceSize = v12;
  v11->Header.AceFlags = Flags;
  v11->Header.AceType = 17;
  v11->AccessMask = (unsigned int)LabelSid;
  RtlCopySid(4 * *(unsigned __int8 *)(v6 + 1) + 8, &v11[1], (PSID)v6);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
