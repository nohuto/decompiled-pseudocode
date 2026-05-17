/*
 * XREFs of sub_180042450 @ 0x180042450
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 * Callees:
 *     sub_180004624 @ 0x180004624 (sub_180004624.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitString @ 0x1800404B0 (RtlInitString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwRaiseHardError @ 0x18009D690 (ZwRaiseHardError.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

void __fastcall sub_180042450(UNICODE_STRING *a1, const char *a2, unsigned int a3)
{
  unsigned __int16 v6; // ax
  UNICODE_STRING *p_DestinationString; // r14
  unsigned int v8; // r15d
  int v9; // ecx
  unsigned int v10; // r12d
  _DWORD *v11; // rdi
  bool v12; // zf
  int v13; // ecx
  _DWORD *v14; // r13
  UNICODE_STRING v15; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING *v19; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  WCHAR Buffer[8]; // [rsp+90h] [rbp-70h] BYREF
  char v23; // [rsp+A0h] [rbp-60h] BYREF

  v6 = (unsigned __int16)a2;
  if ( !a1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    v6 = (unsigned __int16)a2;
  }
  p_DestinationString = &DestinationString;
  v8 = 3;
  if ( a1 )
    p_DestinationString = a1;
  switch ( a3 )
  {
    case 0xC0000135:
      RtlInitUnicodeString(&v15, 0LL);
      v10 = 1;
      v19 = p_DestinationString;
      v8 = 1;
      goto LABEL_15;
    case 0xC0000138:
      sub_180004624(Buffer, 0xEuLL, L"#%d", v6);
      RtlInitUnicodeString(&v15, Buffer);
      v13 = dword_180156A70;
      v21 = -1073741512LL;
      v19 = (UNICODE_STRING *)a2;
      v20 = p_DestinationString;
      v10 = 2;
      v14 = (_DWORD *)((char *)&unk_1801103B0 + (a1 == 0LL ? 0x10 : 0));
      if ( ((*v14 | 1) & dword_180156A70) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          805,
          (unsigned int)"LdrpReportError",
          a1 == 0LL,
          "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          (_DWORD)a2,
          p_DestinationString,
          -1073741512);
        v13 = dword_180156A70;
      }
      v12 = (v13 & v14[1]) == 0;
      break;
    case 0xC0000139:
      RtlInitString(&SourceString, a2);
      v15.Buffer = (wchar_t *)&v23;
      v15.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&v15, &SourceString, 0) < 0 )
        v15.Length = 0;
      v9 = dword_180156A70;
      v19 = &v15;
      v21 = -1073741511LL;
      v20 = p_DestinationString;
      v10 = 3;
      v11 = (_DWORD *)((char *)&unk_1801103B0 + (a1 == 0LL ? 0x10 : 0));
      if ( ((*v11 | 1) & dword_180156A70) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          831,
          (unsigned int)"LdrpReportError",
          a1 == 0LL,
          "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          &v15,
          p_DestinationString,
          -1073741511);
        v9 = dword_180156A70;
      }
      v12 = (v9 & v11[1]) == 0;
      break;
    default:
      RtlInitUnicodeString(&v15, 0LL);
      v10 = 3;
      goto LABEL_15;
  }
  if ( !v12 )
    __debugbreak();
LABEL_15:
  if ( a1 )
  {
    if ( (int)ZwRaiseHardError(a3, v8, v10, &v19, 1, v16) >= 0 && dword_18015CFB8 != 3 )
      ++dword_18015BEE8;
    if ( a3 + 1073741512 <= 1 )
      RtlRaiseStatus(a3);
  }
}
