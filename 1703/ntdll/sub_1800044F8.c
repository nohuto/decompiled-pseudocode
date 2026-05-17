/*
 * XREFs of sub_1800044F8 @ 0x1800044F8
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004B070 @ 0x18004B070 (sub_18004B070.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x18004BA60 (RtlSidDominatesForTrust.c)
 */

char __fastcall sub_1800044F8(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
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
