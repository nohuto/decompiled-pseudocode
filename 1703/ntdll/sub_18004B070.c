/*
 * XREFs of sub_18004B070 @ 0x18004B070
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 * Callees:
 *     sub_1800044F8 @ 0x1800044F8 (sub_1800044F8.c)
 *     RtlFindAceByType @ 0x18004A2D0 (RtlFindAceByType.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18004B070(__int64 a1, __int64 a2)
{
  unsigned __int8 *AceByType; // rax
  __int64 v5; // r8
  unsigned __int8 *v6; // rbx
  int v8; // ecx
  unsigned int v9; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-1Ch] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  unsigned __int16 v12; // [rsp+2Ch] [rbp-14h]

  v10 = 0;
  v11 = 0;
  v9 = 0;
  v12 = 256;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(a1, 21, &v9);
    v6 = AceByType;
    if ( !AceByType )
      goto LABEL_3;
    if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
      return 3221225485LL;
    if ( (AceByType[1] & 0x40) == 0 )
      break;
    if ( !sub_1800044F8(a2, (__int64)(AceByType + 8), v5, &v10) )
      return 3221225506LL;
LABEL_3:
    ++v9;
    if ( !v6 )
      return v10;
  }
  v8 = *(_DWORD *)(AceByType + 10) - v11;
  if ( !v8 )
    v8 = *((unsigned __int16 *)AceByType + 7) - v12;
  if ( !v8 && AceByType[9] == 1 && !*((_DWORD *)AceByType + 4) )
    goto LABEL_3;
  return 3221225485LL;
}
