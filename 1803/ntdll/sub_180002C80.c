/*
 * XREFs of sub_180002C80 @ 0x180002C80
 * Callers:
 *     sub_18002EC40 @ 0x18002EC40 (sub_18002EC40.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x18002E5E0 (RtlSidDominatesForTrust.c)
 */

char __fastcall sub_180002C80(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char result; // al
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( !a1 )
  {
    result = 0;
    goto LABEL_5;
  }
  *a4 = RtlSidDominatesForTrust(a1, a2, &v6);
  result = v6;
  if ( !v6 )
LABEL_5:
    *a4 = -1073741790;
  return result;
}
