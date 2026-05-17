/*
 * XREFs of sub_18005712C @ 0x18005712C
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 * Callees:
 *     TpAllocTimer @ 0x180058CD0 (TpAllocTimer.c)
 */

void __fastcall sub_18005712C(__int64 a1)
{
  int v1; // [rsp+20h] [rbp-50h] BYREF
  __int64 v2; // [rsp+28h] [rbp-48h]
  __int64 v3; // [rsp+30h] [rbp-40h]
  __int64 v4; // [rsp+38h] [rbp-38h]
  __int128 v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]
  int v9; // [rsp+60h] [rbp-10h]
  __int64 v10; // [rsp+88h] [rbp+18h] BYREF

  if ( (dword_18015A43C & 0x40) != 0 )
  {
    v10 = 0LL;
    if ( a1 )
    {
      v3 = 0LL;
      v4 = 0LL;
      v6 = 0LL;
      v7 = 0;
      v2 = a1;
      v5 = 0LL;
      v1 = 3;
      v9 = 72;
      v8 = 2;
      if ( (int)TpAllocTimer(&v10, sub_1800601D0, 0LL, &v1) >= 0 )
      {
        qword_18015D008 = v10;
        dword_18015D2B4 = 1;
      }
    }
  }
}
