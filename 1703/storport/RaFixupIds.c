/*
 * XREFs of RaFixupIds @ 0x1C00602C0
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C0016878 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C0016A04 (RaidUnitGetHardwareIds.c)
 *     RaidUnitGetDeviceId @ 0x1C0018120 (RaidUnitGetDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaFixupIds(_WORD *a1, char a2)
{
  _WORD *v2; // r8
  bool v3; // zf
  __int64 v4; // rdx
  __int16 v5; // cx
  __int64 result; // rax
  int v7; // r9d

  v2 = a1;
  v3 = a2 == 0;
  LODWORD(v4) = 0;
  if ( !v3 )
  {
    while ( 1 )
    {
      v5 = v2[(unsigned int)v4];
      if ( v5 )
      {
        if ( (unsigned __int16)(v5 - 33) > 0x5Eu || v5 == 44 )
          v2[(unsigned int)v4] = 95;
      }
      else
      {
        result = (unsigned int)(v4 + 1);
        if ( !v2[result] )
          return result;
      }
      LODWORD(v4) = v4 + 1;
    }
  }
  for ( ; *a1; a1 = &v2[v4] )
  {
    v7 = (unsigned __int16)*a1;
    result = (unsigned int)(v7 - 33);
    if ( (unsigned __int16)(v7 - 33) > 0x5Eu || (_WORD)v7 == 44 )
      *a1 = 95;
    v4 = (unsigned int)(v4 + 1);
  }
  return result;
}
