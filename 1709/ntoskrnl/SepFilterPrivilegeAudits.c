/*
 * XREFs of SepFilterPrivilegeAudits @ 0x14046C45C
 * Callers:
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046BD00 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14046C374 (SePrivilegedServiceAuditAlarm.c)
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepFilterPrivilegeAudits(char a1, unsigned int *a2)
{
  int v2; // r9d
  unsigned int v4; // r8d
  _DWORD *v5; // rcx
  __int64 v6; // r11
  __int64 **v7; // r10
  _DWORD *v8; // rcx
  __int64 v9; // r10
  LUID **v10; // rdx

  v2 = 0;
  if ( !a2 )
    return 0;
  v4 = *a2;
  if ( !*a2 )
    return 0;
  v5 = a2 + 2;
  v6 = v4;
  do
  {
    v7 = SepFilterPrivileges;
    while ( *v5 != *(_DWORD *)*v7 || v5[1] != *((_DWORD *)*v7 + 1) )
    {
      if ( !*++v7 )
        goto LABEL_7;
    }
    ++v2;
LABEL_7:
    v5 += 3;
    --v6;
  }
  while ( v6 );
  if ( (a1 & 1) != 0 && v4 )
  {
    v8 = a2 + 2;
    v9 = *a2;
    do
    {
      v10 = &SepServicesFilterPrivileges;
      while ( *v8 != (*v10)->LowPart || v8[1] != (*v10)->HighPart )
      {
        if ( !*++v10 )
          goto LABEL_15;
      }
      ++v2;
LABEL_15:
      v8 += 3;
      --v9;
    }
    while ( v9 );
  }
  return v2 != v4;
}
