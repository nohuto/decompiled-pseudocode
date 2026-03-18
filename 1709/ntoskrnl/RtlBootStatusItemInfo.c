/*
 * XREFs of RtlBootStatusItemInfo @ 0x1405ACA68
 * Callers:
 *     PopBootStatGet @ 0x1405AC1B8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1405AC38C (PopBootStatSet.c)
 *     RtlpGetSetBootStatusData @ 0x1405AC8AC (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBootStatusItemInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 >= 0x10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = RtlpBootStatusFields[2 * a1];
    *a3 = RtlpBootStatusFields[2 * a1 + 1];
  }
  return v3;
}
