/*
 * XREFs of RtlDetermineDosPathNameType_U @ 0x18007A0F0
 * Callers:
 *     sub_1800250A4 @ 0x1800250A4 (sub_1800250A4.c)
 *     RtlDosSearchPath_U @ 0x180087400 (RtlDosSearchPath_U.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 * Callees:
 *     <none>
 */

RTL_PATH_TYPE __cdecl RtlDetermineDosPathNameType_U(PCWSTR DosFileName)
{
  WCHAR v2; // ax

  if ( *DosFileName == 92 || *DosFileName == 47 )
  {
    if ( DosFileName[1] == 92 || DosFileName[1] == 47 )
    {
      if ( DosFileName[2] == 46 || DosFileName[2] == 63 )
      {
        v2 = DosFileName[3];
        if ( v2 == 92 || v2 == 47 )
          return 6;
        else
          return v2 != 0 ? 1 : 7;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 4;
    }
  }
  else if ( *DosFileName && DosFileName[1] == 58 )
  {
    if ( DosFileName[2] == 92 || DosFileName[2] == 47 )
      return 2;
    else
      return 3;
  }
  else
  {
    return 5;
  }
}
