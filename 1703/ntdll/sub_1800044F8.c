/*
 * XREFs of sub_1800044F8 @ 0x1800044F8
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004B070 @ 0x18004B070 (sub_18004B070.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x18004BA60 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall sub_1800044F8(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  DominatesTrust = 0;
  if ( !a1 )
  {
    result = 0;
    goto LABEL_5;
  }
  *a4 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust);
  result = DominatesTrust;
  if ( !DominatesTrust )
LABEL_5:
    *a4 = -1073741790;
  return result;
}
