/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1C00FE9F0
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C00CB970 (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1C00FEAC4 (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(_WORD *a1, __int64 a2, int *a3, _QWORD *a4)
{
  _WORD *v6; // rdx
  _WORD *v8; // rcx
  int v9; // ebp
  unsigned int AclForString; // ebx
  _WORD *i; // rcx
  PVOID P; // [rsp+40h] [rbp+8h]
  _WORD *v13; // [rsp+50h] [rbp+18h]

  *a4 = 0LL;
  *a3 = 0;
  while ( *a1 == 32 )
    ++a1;
  v6 = a1;
  if ( *a1 != 68 )
    return 3221225485LL;
  v8 = a1 + 1;
  if ( *v8 != 58 )
    return 3221225485LL;
  v9 = 4104;
  if ( v8[1] != 80 )
  {
    v8 = v6;
    v9 = 8;
  }
  AclForString = SepSddlGetAclForString(v8 + 2);
  if ( AclForString )
    goto LABEL_15;
  for ( i = v13; *i == 32; ++i )
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
  *a3 = v9;
  return AclForString;
}
