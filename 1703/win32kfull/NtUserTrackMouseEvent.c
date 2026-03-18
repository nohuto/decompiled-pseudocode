/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C00B1C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     QueryTrackMouseEvent @ 0x1C00B1D2C (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C00B1DC4 (TrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  int v2; // ebx
  __m128i *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]

  v2 = 0;
  EnterCrit(0LL, 1LL);
  v3 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v3 = (__m128i *)W32UserProbeAddress;
  v9 = *v3;
  v10 = v3[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v9) == 24 )
  {
    if ( (v9.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL);
    }
    else if ( (v9.m128i_i32[1] & 0x40000000) != 0 )
    {
      v2 = QueryTrackMouseEvent(&v9);
      *a1 = v9;
      a1[1].m128i_i64[0] = v10;
    }
    else
    {
      v2 = TrackMouseEvent(&v9);
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
