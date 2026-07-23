/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x140504F5C
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x140503E04 (MiValidateExistingImage.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x14000C7D0 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  NTSTATUS v5; // edi
  char v6; // bl
  unsigned int v9; // ecx
  _KPROCESS *Process; // rcx
  char v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+31h] [rbp-17h] BYREF
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v6 = a3;
  if ( qword_140362690 )
    return (unsigned int)((__int64 (__fastcall *)(PVOID, __int64, __int64))qword_140362690)(Object, a2, a3);
  if ( (unsigned int)SeCompareSigningLevels() )
    goto LABEL_3;
  v9 = (unsigned __int8)SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v9 = (unsigned __int8)SeILSigningPolicyRuntime;
  if ( v9 >= 2
    || (Process = KeGetCurrentThread()->ApcState.Process, (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0)
    || v6 != 6 )
  {
LABEL_3:
    *a5 = v6;
    return (unsigned int)v5;
  }
  if ( (Process[2].UserDirectoryTableBase & 0x800000) != 0 )
    goto LABEL_17;
  if ( !qword_140362658 )
    return (unsigned int)-1073741823;
  v5 = qword_140362658(Object, &v11, &v12);
  if ( v5 >= 0 )
  {
    if ( !v11 && !v12 )
    {
      v5 = RtlIsUntrustedObject(0LL, Object, IsUntrustedObject);
      if ( v5 >= 0 )
        *a5 = IsUntrustedObject[0] != 0 ? 6 : 0;
      return (unsigned int)v5;
    }
LABEL_17:
    *a5 = 6;
  }
  return (unsigned int)v5;
}
