/*
 * XREFs of RtlMapGenericMask @ 0x180037EF0
 * Callers:
 *     sub_180037A68 @ 0x180037A68 (sub_180037A68.c)
 *     sub_180071344 @ 0x180071344 (sub_180071344.c)
 *     sub_180078B08 @ 0x180078B08 (sub_180078B08.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D2110 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMapGenericMask(int *a1, _DWORD *a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 < 0 )
  {
    v2 |= *a2;
    *a1 = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    result = (unsigned int)v2 | a2[1];
    v2 = result;
    *a1 = result;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    result = (unsigned int)v2 | a2[2];
    v2 = result;
    *a1 = result;
  }
  if ( (v2 & 0x10000000) != 0 )
  {
    result = (unsigned int)v2 | a2[3];
    v2 = result;
    *a1 = result;
  }
  *a1 = v2 & 0xFFFFFFF;
  return result;
}
