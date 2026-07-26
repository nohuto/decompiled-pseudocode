/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1C00FC65C
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C00C7010 (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1C00FC720 (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(_WORD *a1, __int64 a2, int *a3, _QWORD *a4)
{
  wchar_t *v7; // rcx
  int v8; // edi
  unsigned int AclForString; // ebx
  _WORD *i; // rax
  PVOID P; // [rsp+40h] [rbp+8h]
  _WORD *v12; // [rsp+50h] [rbp+18h]

  *a4 = 0LL;
  *a3 = 0;
  while ( *a1 == 32 )
    ++a1;
  if ( *a1 != 68 || a1[1] != 58 )
    return 3221225485LL;
  v7 = a1 + 2;
  v8 = 8;
  if ( *v7 == 80 )
  {
    ++v7;
    v8 = 4104;
  }
  AclForString = SepSddlGetAclForString(v7);
  if ( AclForString )
    goto LABEL_15;
  for ( i = v12; *i == 32; ++i )
    ;
  if ( *i )
  {
    AclForString = -1073741811;
LABEL_15:
    if ( P )
      ExFreePoolWithTag(P, 0);
    return AclForString;
  }
  *a4 = P;
  *a3 = v8;
  return AclForString;
}
