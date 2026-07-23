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

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, __int64 a2, char a3, __int64 a4, char *a5)
{
  NTSTATUS v5; // edi
  _KPROCESS *Process; // rcx
  char v9; // al
  char v10; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h] BYREF
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  if ( qword_1403A5CF0 )
  {
    return (unsigned int)((__int64 (__fastcall *)(PVOID))qword_1403A5CF0)(Object);
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
    v5 = qword_1403A5CB8(Object, &v12, &v13);
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( v12 || v13 )
      goto LABEL_22;
    v5 = RtlIsUntrustedObject(0LL, Object, IsUntrustedObject);
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( IsUntrustedObject[0] )
    {
LABEL_22:
      *a5 = 6;
      return (unsigned int)v5;
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
  return (unsigned int)v5;
}
