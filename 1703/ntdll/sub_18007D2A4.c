/*
 * XREFs of sub_18007D2A4 @ 0x18007D2A4
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlInitString @ 0x18003AB50 (RtlInitString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18007D6CC @ 0x18007D6CC (sub_18007D6CC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwRaiseHardError @ 0x1800A7E30 (ZwRaiseHardError.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

void __fastcall sub_18007D2A4(UNICODE_STRING *a1, const char *a2, unsigned int a3)
{
  UNICODE_STRING *p_DestinationString; // rdi
  char v6; // r14
  int v7; // ecx
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  _DWORD *v10; // rsi
  int v11; // ecx
  _DWORD *v12; // r13
  UNICODE_STRING v13; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING *v17; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  WCHAR Buffer[8]; // [rsp+90h] [rbp-70h] BYREF
  char v21; // [rsp+A0h] [rbp-60h] BYREF

  p_DestinationString = a1;
  if ( a1 )
  {
    v6 = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    p_DestinationString = &DestinationString;
    v6 = 0;
  }
  switch ( a3 )
  {
    case 0xC0000135:
      RtlInitUnicodeString(&v13, 0LL);
      v9 = 1;
      v17 = p_DestinationString;
      v8 = 1;
      break;
    case 0xC0000138:
      sub_18007D6CC(Buffer);
      RtlInitUnicodeString(&v13, Buffer);
      v11 = dword_180155A10;
      v8 = 3;
      v19 = -1073741512LL;
      v17 = (UNICODE_STRING *)a2;
      v9 = 2;
      v18 = p_DestinationString;
      v12 = (_DWORD *)((char *)&unk_1801106E0 + 16 * ((unsigned __int8)v6 ^ 1u));
      if ( ((*v12 | 1) & dword_180155A10) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          785,
          (unsigned int)"LdrpReportError",
          (unsigned __int8)v6 ^ 1,
          "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          (_DWORD)a2,
          p_DestinationString,
          -1073741512);
        v11 = dword_180155A10;
      }
      if ( (v11 & v12[1]) != 0 )
        __debugbreak();
      break;
    case 0xC0000139:
      RtlInitString(&SourceString, a2);
      v13.Buffer = (wchar_t *)&v21;
      v13.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&v13, &SourceString, 0) < 0 )
        v13.Length = 0;
      v7 = dword_180155A10;
      v17 = &v13;
      v8 = 3;
      v19 = -1073741511LL;
      v18 = p_DestinationString;
      v9 = 3;
      v10 = (_DWORD *)((char *)&unk_1801106E0 + 16 * ((unsigned __int8)v6 ^ 1u));
      if ( ((*v10 | 1) & dword_180155A10) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          811,
          (unsigned int)"LdrpReportError",
          (unsigned __int8)v6 ^ 1,
          "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          &v13,
          p_DestinationString,
          -1073741511);
        v7 = dword_180155A10;
      }
      if ( (v7 & v10[1]) != 0 )
        __debugbreak();
      break;
    default:
      RtlInitUnicodeString(&v13, 0LL);
      v8 = 3;
      v9 = 3;
      break;
  }
  if ( v6 )
  {
    if ( (int)ZwRaiseHardError(a3, v8, v9, &v17, 1, v14) >= 0 && dword_18015C018 != 3 )
      ++dword_18015AEC8;
    if ( a3 + 1073741512 <= 1 )
      RtlRaiseStatus(a3);
  }
}
