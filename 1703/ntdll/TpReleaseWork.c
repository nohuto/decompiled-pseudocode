/*
 * XREFs of TpReleaseWork @ 0x180014510
 * Callers:
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 * Callees:
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_180014918 @ 0x180014918 (sub_180014918.c)
 */

char __fastcall TpReleaseWork(__int64 a1)
{
  signed __int32 v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_180014918(a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = sub_1800144B8(a1, 1LL);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v2;
}
