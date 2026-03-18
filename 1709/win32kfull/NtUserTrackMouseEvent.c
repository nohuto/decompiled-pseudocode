/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C0084A90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     QueryTrackMouseEvent @ 0x1C0084B6C (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C0084C04 (TrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __m128i v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]

  EnterCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (__m128i *)MmUserProbeAddress;
  v7 = *v2;
  v8 = v2[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v7) == 24 )
  {
    if ( (v7.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL, MmUserProbeAddress);
      v5 = 0;
    }
    else if ( (v7.m128i_i32[1] & 0x40000000) != 0 )
    {
      v5 = QueryTrackMouseEvent(&v7);
      *a1 = v7;
      a1[1].m128i_i64[0] = v8;
    }
    else
    {
      v5 = TrackMouseEvent(&v7);
    }
  }
  else
  {
    UserSetLastError(87LL, MmUserProbeAddress);
    v5 = 0;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
