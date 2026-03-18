/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x1405040C8
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x140503E04 (MiValidateExistingImage.c)
 * Callees:
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x14074C274 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        ULONG_PTR a5,
        int a6,
        int a7,
        char a8,
        char a9,
        int a10,
        char a11,
        char a12)
{
  _KPROCESS *Process; // r13
  int v17; // eax
  int v18; // r8d
  int v19; // r9d
  int v20; // ebx
  int v21; // ecx
  __int64 v22; // [rsp+20h] [rbp-38h]

  if ( a1 < 2 )
  {
    if ( !a8 && !a9 )
      return 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v17 = MiValidateSectionCreate(a2, a3, a4, a5, a7, a11, a12);
    v20 = v17;
    if ( v17 < 0 && a1 == 1 )
      dword_1403882F8 = 60;
    if ( a8 != 1 )
      goto LABEL_29;
    if ( v17 < 0 )
      goto LABEL_24;
    if ( !(unsigned int)SeCompareSigningLevels() && (a6 || (Process[2].ActiveProcessors.Bitmap[0] & 0x80000) == 0) )
      v20 = -1073740760;
    if ( v20 < 0 )
    {
LABEL_24:
      if ( a10 != 1 || v20 != -1073740760 )
        return (unsigned int)v20;
      LOBYTE(v18) = a11;
      v22 = a2 + 88;
      v21 = 2;
    }
    else
    {
LABEL_29:
      if ( a9 != 1 )
        return (unsigned int)v20;
      if ( v20 < 0 )
        return 0;
      if ( (unsigned int)SeCompareSigningLevels() )
        return (unsigned int)v20;
      LOBYTE(v18) = a12;
      v22 = a2 + 88;
      v21 = 1;
    }
    LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
    EtwTimLogProhibitNonMicrosoftBinaries(v21, (_DWORD)Process, v18, v19, v22);
    return (unsigned int)v20;
  }
  return 3221225485LL;
}
