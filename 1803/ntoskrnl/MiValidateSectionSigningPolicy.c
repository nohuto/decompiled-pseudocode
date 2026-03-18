/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x1404F1598
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x1404F12F4 (MiValidateExistingImage.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1407AE1B8 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r9d
  int v22; // ebx
  int v23; // ecx
  __int64 v24; // [rsp+20h] [rbp-38h]

  if ( a1 < 2 )
  {
    if ( !a8 && !a9 )
      return 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v17 = MiValidateSectionCreate(a2, a3, a4, a5, a7, a11, a12);
    v22 = v17;
    if ( v17 < 0 && a1 == 1 )
      dword_1403CB498 = 60;
    if ( a8 != 1 )
      goto LABEL_28;
    if ( v17 < 0 )
      goto LABEL_23;
    LOBYTE(v18) = a11;
    LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
    if ( !(unsigned int)SeCompareSigningLevels(v19, v18)
      && (a6 || (Process[2].ActiveProcessors.Bitmap[0] & 0x80000) == 0) )
    {
      v22 = -1073740760;
    }
    if ( v22 < 0 )
    {
LABEL_23:
      if ( v22 != -1073740760 || a10 != 1 )
        return (unsigned int)v22;
      LOBYTE(v20) = a11;
      v24 = a2 + 88;
      v23 = 2;
    }
    else
    {
LABEL_28:
      if ( a9 != 1 )
        return (unsigned int)v22;
      if ( v22 < 0 )
        return 0;
      LOBYTE(v18) = a12;
      LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      if ( (unsigned int)SeCompareSigningLevels(v19, v18) )
        return (unsigned int)v22;
      LOBYTE(v20) = a12;
      v24 = a2 + 88;
      v23 = 1;
    }
    LOBYTE(v21) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
    EtwTimLogProhibitNonMicrosoftBinaries(v23, (_DWORD)Process, v20, v21, v24);
    return (unsigned int)v22;
  }
  return 3221225485LL;
}
