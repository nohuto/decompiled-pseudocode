/*
 * XREFs of sub_1800537C0 @ 0x1800537C0
 * Callers:
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationFile @ 0x1800A57E0 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800537C0(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, _QWORD *a6)
{
  int v8; // r15d
  __int64 v9; // rcx
  bool v10; // di
  int v11; // ebx
  __int64 v13; // [rsp+60h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v16[8]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v17; // [rsp+90h] [rbp-49h]
  int v18; // [rsp+98h] [rbp-41h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-39h]
  UNICODE_STRING *p_UnicodeString; // [rsp+A8h] [rbp-31h]
  int v21; // [rsp+B0h] [rbp-29h]
  __int128 v22; // [rsp+B8h] [rbp-21h]
  _DWORD v23[10]; // [rsp+C8h] [rbp-11h] BYREF

  *a6 = 0LL;
  v8 = 3;
  if ( *a4 != 1 )
    v8 = 5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v10 = 0;
  if ( DestinationString.Length > 1u )
    v10 = SourceString[(DestinationString.Length >> 1) - 1] == 92;
  v11 = sub_18003D6A4(v9, 0, (__int64)DestinationString.Buffer, (__int64)&UnicodeString, 0LL, 0LL);
  if ( v11 >= 0 )
  {
    v19 = 0LL;
    v18 = 48;
    v21 = 64;
    p_UnicodeString = &UnicodeString;
    v22 = 0LL;
    v11 = ZwCreateFile(&v13, 3222274176LL, &v18, v16, 0LL, 128, 5, v8, 104, 0LL, 0);
    if ( v11 >= 0 )
    {
      if ( *a4 == 1 && v17 == 2 )
        *a4 = 0;
      if ( !v10 )
      {
        memset(v23, 0, sizeof(v23));
        v23[8] = 0x2000;
        v11 = ZwSetInformationFile(v13, v16, v23, 40LL, 4);
      }
      *a6 = v13;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v11;
}
