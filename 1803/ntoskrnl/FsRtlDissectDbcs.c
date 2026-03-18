/*
 * XREFs of FsRtlDissectDbcs @ 0x140715C60
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x14056E910 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x140716410 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlDissectDbcs(ANSI_STRING *Path, PANSI_STRING FirstName, PANSI_STRING RemainingName)
{
  unsigned int Length; // ecx
  char *Buffer; // rdi
  _BOOL8 v7; // r10
  __int64 v8; // rdx
  unsigned __int8 v9; // r11
  __int64 v10; // rax
  char v11; // r11
  int v12; // eax
  unsigned __int16 v13; // cx

  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  Length = Path->Length;
  if ( Length )
  {
    Buffer = Path->Buffer;
    v7 = *Buffer == 92;
    v8 = v7;
    while ( (unsigned int)v8 < Length )
    {
      v9 = Buffer[v8];
      if ( v9 == 92 )
        break;
      if ( v9 >= 0x80u )
      {
        if ( (_BYTE)NlsMbOemCodePageTag )
        {
          v10 = v9;
          v11 = 1;
          if ( NlsOemLeadByteInfoTable[v10] )
            continue;
        }
      }
      v11 = 0;
      v12 = v8 + 1;
      if ( !v11 )
        v12 = v8;
      v8 = (unsigned int)(v12 + 1);
    }
    FirstName->Length = v8 - v7;
    FirstName->MaximumLength = v8 - v7;
    FirstName->Buffer = &Path->Buffer[v7];
    if ( (unsigned int)v8 < Length )
    {
      v13 = Length - v8 - 1;
      RemainingName->Length = v13;
      RemainingName->MaximumLength = v13;
      RemainingName->Buffer = &Path->Buffer[(unsigned int)(v8 + 1)];
    }
  }
}
