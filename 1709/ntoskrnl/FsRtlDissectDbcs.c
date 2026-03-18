/*
 * XREFs of FsRtlDissectDbcs @ 0x1406B1180
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x140581430 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x1406B1940 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlDissectDbcs(ANSI_STRING *Path, PANSI_STRING FirstName, PANSI_STRING RemainingName)
{
  unsigned int Length; // edx
  char *Buffer; // rdi
  _BOOL8 v7; // r10
  __int64 i; // rcx
  unsigned __int8 v9; // r11
  unsigned __int16 v10; // dx

  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  Length = Path->Length;
  if ( Path->Length )
  {
    Buffer = Path->Buffer;
    v7 = *Buffer == 92;
    for ( i = v7; (unsigned int)i < Length; i = (unsigned int)(i + 1) )
    {
      v9 = Buffer[i];
      if ( v9 == 92 )
        break;
      if ( v9 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v9] )
        LODWORD(i) = i + 1;
    }
    FirstName->Length = i - v7;
    FirstName->MaximumLength = i - v7;
    FirstName->Buffer = &Path->Buffer[v7];
    if ( (unsigned int)i < Length )
    {
      v10 = Length - i - 1;
      RemainingName->Length = v10;
      RemainingName->MaximumLength = v10;
      RemainingName->Buffer = &Path->Buffer[(unsigned int)(i + 1)];
    }
  }
}
