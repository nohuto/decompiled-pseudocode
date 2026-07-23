/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x1405464A4
 * Callers:
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x1405463A0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspGetProcessProtectionRequirementsFromImage(__int64 a1)
{
  unsigned __int8 *v1; // r8
  PS_PROTECTION v2; // r9
  char *v3; // r11
  char v5; // r10
  char v6; // r9

  if ( (*(_BYTE *)(*(_QWORD *)MiSectionControlArea(a1) + 15LL) & 0xF0) == 0x50 )
  {
    v5 = -127;
    if ( v2.Level && v2.Level != 0x81 && RtlTestProtectedAccess(v2, (PS_PROTECTION)-127) )
      v5 = v6;
    *v3 = v5;
  }
  else
  {
    *v1 = v2.Level;
  }
  return 0LL;
}
