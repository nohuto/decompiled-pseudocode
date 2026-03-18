/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1405626F0
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x1404F12F4 (MiValidateExistingImage.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x1400BAED0 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, __int64 a2, char a3, __int64 a4, char *a5)
{
  NTSTATUS IsUntrustedObject; // edi
  _KPROCESS *Process; // rcx
  char v9; // al
  char v10; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h] BYREF
  char v14[22]; // [rsp+32h] [rbp-16h] BYREF

  IsUntrustedObject = 0;
  if ( qword_1403A5CF0 )
  {
    return (unsigned int)((__int64 (__fastcall *)(__int64))qword_1403A5CF0)(a1);
  }
  else if ( (unsigned int)SeCompareSigningLevels()
         || (Process = KeGetCurrentThread()->ApcState.Process, (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0)
         || a3 != 6 )
  {
    *a5 = a3;
  }
  else
  {
    if ( (Process[2].UserDirectoryTableBase & 0x800000) != 0 )
      goto LABEL_22;
    if ( !qword_1403A5CB8 )
      return (unsigned int)-1073741823;
    IsUntrustedObject = qword_1403A5CB8(a1, &v12, &v13);
    if ( IsUntrustedObject < 0 )
      return (unsigned int)IsUntrustedObject;
    if ( v12 || v13 )
      goto LABEL_22;
    IsUntrustedObject = RtlIsUntrustedObject(0LL, a1, v14);
    if ( IsUntrustedObject < 0 )
      return (unsigned int)IsUntrustedObject;
    if ( v14[0] )
    {
LABEL_22:
      *a5 = 6;
      return (unsigned int)IsUntrustedObject;
    }
    v9 = SeILSigningPolicy;
    if ( !SeILSigningPolicy )
      v9 = SeILSigningPolicyRuntime;
    if ( (unsigned __int8)v9 < 2u )
    {
      *a5 = 0;
    }
    else
    {
      v10 = 9;
      if ( v9 != 2 )
        v10 = 6;
      *a5 = v10;
    }
  }
  return (unsigned int)IsUntrustedObject;
}
