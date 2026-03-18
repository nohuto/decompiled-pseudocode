/*
 * XREFs of IopValidateQueryInformationParameters @ 0x14052C8E0
 * Callers:
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IoQueryInformationByName @ 0x14068B8F0 (IoQueryInformationByName.c)
 * Callees:
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopValidateQueryInformationParameters(
        char a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int Length,
        signed int a6)
{
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int16 v10; // ax

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)a6 >= 0x45 )
    return 3221225475LL;
  v6 = *((_BYTE *)IopQueryOperationLength + a6);
  if ( !v6 )
    return 3221225475LL;
  if ( Length >= v6 )
  {
    if ( a3 >= 0x7FFFFFFF0000LL )
      a3 = 0x7FFFFFFF0000LL;
    *(_DWORD *)a3 = *(_DWORD *)a3;
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 1064LL);
    if ( v7 && ((v10 = *(_WORD *)(v7 + 8), v10 == 332) || v10 == 452) )
    {
      ProbeForWrite((volatile void *)a4, Length, 4u);
    }
    else if ( Length )
    {
      if ( ((unsigned int)a4 & (*((unsigned __int8 *)IopQuerySetAlignmentRequirement + a6) - 1)) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a4 + Length - 1LL;
      if ( a4 > v8 || v8 >= 0x7FFFFFFF0000LL )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
      }
      else
      {
        v9 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)a4 = *(_BYTE *)a4;
          a4 = (a4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( a4 != v9 );
      }
    }
    return 0LL;
  }
  return 3221225476LL;
}
