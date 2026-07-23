/*
 * XREFs of sub_1800DB144 @ 0x1800DB144
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     sub_1800DB244 @ 0x1800DB244 (sub_1800DB244.c)
 */

int __fastcall sub_1800DB144(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  int result; // eax
  int v6; // edx
  WCHAR *v7; // rax
  int v8; // ecx
  _UNICODE_STRING Destination; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  *(_DWORD *)&Destination.Length = 82051072;
  Destination.Buffer = (PWCH)&unk_18015A920;
  result = RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\USER\\");
  if ( result >= 0 )
  {
    result = sub_1800DB244(&Destination);
    if ( result >= 0 )
    {
      result = RtlAppendUnicodeStringToString(&Destination, &stru_180111418);
      if ( result >= 0 )
      {
        v6 = *a1;
        v7 = (WCHAR *)(*((_QWORD *)a1 + 1) + *a1);
        if ( *a1 )
        {
          do
          {
            if ( *(v7 - 1) == 92 )
              break;
            --v7;
            v6 -= 2;
          }
          while ( v6 );
        }
        v8 = *a1 - v6;
        Source.Buffer = v7;
        Source.Length = v8;
        if ( (unsigned __int16)v8 == v8 )
        {
          result = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( result >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            return ZwOpenKey(a3, 9u, &ObjectAttributes);
          }
        }
        else
        {
          return -1073741789;
        }
      }
    }
  }
  return result;
}
