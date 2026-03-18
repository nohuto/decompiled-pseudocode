/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x140538F14
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x1405391F8 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspGetProcessProtectionRequirementsFromImage(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  _BYTE *v3; // r8
  char v4; // r9
  char *v5; // r11
  __int64 v6; // rcx
  char v8; // r10
  char v9; // r9

  v1 = MiSectionControlArea(a1);
  v6 = *(_QWORD *)v1;
  if ( (*(_BYTE *)(*(_QWORD *)v1 + 15LL) & 0xF0) == 0x50 )
  {
    v8 = -127;
    if ( v4 )
    {
      if ( v4 != -127 )
      {
        LOBYTE(v2) = -127;
        LOBYTE(v6) = v4;
        if ( (unsigned __int8)RtlTestProtectedAccess(v6, v2) )
          v8 = v9;
      }
    }
    *v5 = v8;
  }
  else
  {
    *v3 = v4;
  }
  return 0LL;
}
