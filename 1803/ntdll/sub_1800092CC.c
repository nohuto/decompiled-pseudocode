/*
 * XREFs of sub_1800092CC @ 0x1800092CC
 * Callers:
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800092CC(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, _QWORD *a6)
{
  int v8; // r15d
  bool v9; // di
  int v10; // ebx
  __int64 v12; // [rsp+60h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v15[8]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v16; // [rsp+90h] [rbp-49h]
  int v17; // [rsp+98h] [rbp-41h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-39h]
  UNICODE_STRING *p_UnicodeString; // [rsp+A8h] [rbp-31h]
  int v20; // [rsp+B0h] [rbp-29h]
  __int128 v21; // [rsp+B8h] [rbp-21h]
  _DWORD v22[10]; // [rsp+C8h] [rbp-11h] BYREF

  *a6 = 0LL;
  v8 = 3;
  if ( *a4 != 1 )
    v8 = 5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v9 = 0;
  if ( DestinationString.Length > 1u )
    v9 = SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92;
  v10 = sub_18003C228(0, DestinationString.Buffer, (unsigned int)&UnicodeString, 0, 0LL);
  if ( v10 >= 0 )
  {
    v18 = 0LL;
    v17 = 48;
    v20 = 64;
    p_UnicodeString = &UnicodeString;
    v21 = 0LL;
    v10 = ZwCreateFile(&v12, 3222274176LL, &v17, v15, 0LL, 128, 5, v8, 104, 0LL, 0);
    if ( v10 >= 0 )
    {
      if ( *a4 == 1 && v16 == 2 )
        *a4 = 0;
      if ( !v9 )
      {
        memset(v22, 0, sizeof(v22));
        v22[8] = 0x2000;
        v10 = ZwSetInformationFile(v12, v15, v22, 40LL, 4);
      }
      *a6 = v12;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v10;
}
