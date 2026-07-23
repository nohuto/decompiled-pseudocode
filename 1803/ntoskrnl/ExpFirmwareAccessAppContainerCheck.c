/*
 * XREFs of ExpFirmwareAccessAppContainerCheck @ 0x1407BFCEC
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14057FEC8 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14058A1CC (ExpGetSystemFirmwareTableInformation.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407C4F40 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembershipEx @ 0x14009F5A0 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x1401A78E0 (ZwQueryInformationToken.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     RtlInitializeSid @ 0x140541FB0 (RtlInitializeSid.c)
 *     ExpCapabilityCheck @ 0x1407BEED4 (ExpCapabilityCheck.c)
 */

bool __fastcall ExpFirmwareAccessAppContainerCheck(int a1)
{
  int v1; // ecx
  BOOLEAN IsMember[4]; // [rsp+30h] [rbp-D0h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  ULONG v5; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 SystemInformation; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v7; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE TokenInformation; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v11; // [rsp+78h] [rbp-88h] BYREF
  _QWORD Sid[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-60h] BYREF
  int v14; // [rsp+A8h] [rbp-58h]
  wchar_t v15; // [rsp+ACh] [rbp-54h]
  _OWORD v16[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+F0h] [rbp-10h]
  wchar_t v18; // [rsp+F8h] [rbp-8h]
  _OWORD v19[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v20; // [rsp+140h] [rbp+40h]
  int v21; // [rsp+148h] [rbp+48h]

  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(Sid, 0, sizeof(Sid));
  v13 = *(_QWORD *)L"smbios";
  v14 = *(_DWORD *)L"os";
  v16[0] = *(_OWORD *)L"Microsoft.firmwareRead_cw5n1h2txyewy";
  v15 = aSmbios[6];
  v16[2] = *(_OWORD *)L"reRead_cw5n1h2txyewy";
  v11.Buffer = (wchar_t *)&v13;
  v16[1] = *(_OWORD *)L"t.firmwareRead_cw5n1h2txyewy";
  v17 = *(_QWORD *)L"yewy";
  v18 = aMicrosoftFirmw[36];
  v16[3] = *(_OWORD *)L"w5n1h2txyewy";
  v19[0] = *(_OWORD *)L"Microsoft.firmwareWrite_cw5n1h2txyewy";
  CapabilityName.Buffer = (wchar_t *)v16;
  v21 = *(_DWORD *)L"y";
  v19[1] = *(_OWORD *)L"t.firmwareWrite_cw5n1h2txyewy";
  v19[2] = *(_OWORD *)L"reWrite_cw5n1h2txyewy";
  v7.Buffer = (wchar_t *)v19;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)&v11.Length = 917516;
  *(_DWORD *)&CapabilityName.Length = 4849736;
  v19[3] = *(_OWORD *)L"cw5n1h2txyewy";
  v20 = *(_QWORD *)L"xyewy";
  *(_DWORD *)&v7.Length = 4980810;
  if ( !a1 )
    return ExpCapabilityCheck(&v11);
  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0;
LABEL_6:
    if ( !ExpCapabilityCheck(&v7) )
      return 0;
    goto LABEL_8;
  }
  if ( !ExpCapabilityCheck(&CapabilityName) )
    goto LABEL_6;
LABEL_8:
  if ( BYTE2(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]) != 0x81 )
  {
    SystemInformation = 8LL;
    if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength) < 0
      || (SystemInformation & 0x200000000LL) == 0 )
    {
      return 0;
    }
  }
  IsMember[0] = 0;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *RtlSubAuthoritySid(Sid, 0) = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  return ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenLinkedToken, &TokenInformation, 8u, &v5) >= 0
      && v5 == 8
      && RtlCheckTokenMembershipEx(TokenInformation, Sid, 1u, IsMember) >= 0
      && IsMember[0];
}
