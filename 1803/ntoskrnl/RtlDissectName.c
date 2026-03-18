/*
 * XREFs of RtlDissectName @ 0x1400A2240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlDissectName(UNICODE_STRING *Path, PUNICODE_STRING FirstName, PUNICODE_STRING RemainingName)
{
  unsigned int v3; // r9d
  unsigned int v7; // r8d
  wchar_t *Buffer; // rdx
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // r8

  v3 = 0;
  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  v7 = Path->Length >> 1;
  if ( v7 )
  {
    Buffer = Path->Buffer;
    LOBYTE(v3) = *Buffer == 92;
    v9 = v3;
    if ( v3 < v7 )
    {
      do
      {
        if ( Buffer[v9] == 92 )
          break;
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < v7 );
    }
    v10 = 2 * (v9 - v3);
    FirstName->Length = v10;
    FirstName->MaximumLength = v10;
    FirstName->Buffer = &Path->Buffer[v3];
    if ( (unsigned int)v9 < v7 )
    {
      v11 = 2 * (v7 - v9) - 2;
      RemainingName->Length = v11;
      RemainingName->MaximumLength = v11;
      RemainingName->Buffer = &Path->Buffer[(unsigned int)(v9 + 1)];
    }
  }
}
