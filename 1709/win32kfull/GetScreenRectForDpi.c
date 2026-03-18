/*
 * XREFs of GetScreenRectForDpi @ 0x1C005D54C
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x1C005D45C (GetMaxTrackSizeForWindow.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     GetScreenRectForWindow @ 0x1C023A808 (GetScreenRectForWindow.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 */

_OWORD *__fastcall GetScreenRectForDpi(_OWORD *a1, unsigned __int16 a2)
{
  __int64 *DispInfo; // rdi
  __int64 v5; // rax
  __int128 v6; // xmm0
  _OWORD *result; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  __m128i *MonitorRectForDpi; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  char v20[16]; // [rsp+30h] [rbp-10h] BYREF

  DispInfo = (__int64 *)GetDispInfo();
  v5 = *DispInfo;
  if ( a2 )
  {
    if ( *(_DWORD *)v5 == 1 )
    {
      v8 = GetDispInfo();
      v6 = *(_OWORD *)GetMonitorRectForDpi(&v19, *(_QWORD *)(v8 + 88), a2);
    }
    else
    {
      v9 = DispInfo[12];
      v19 = 0uLL;
      if ( v9 )
      {
        v10 = HIDWORD(v19);
        v11 = 0;
        v12 = DWORD1(v19);
        v13 = 0;
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 24LL) & 1) != 0 )
          {
            MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v20, v9, a2);
            v15 = *MonitorRectForDpi;
            v16 = MonitorRectForDpi->m128i_i64[0];
            v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
            if ( v13 >= (int)v16 )
              v13 = v16;
            v18 = HIDWORD(v16);
            LODWORD(v19) = v13;
            if ( v12 >= (int)v18 )
              v12 = v18;
            DWORD1(v19) = v12;
            if ( v11 <= (int)v17 )
              v11 = v17;
            DWORD2(v19) = v11;
            if ( v10 <= SHIDWORD(v17) )
              v10 = HIDWORD(v17);
            HIDWORD(v19) = v10;
          }
          v9 = *(_QWORD *)(v9 + 56);
        }
        while ( v9 );
      }
      v6 = v19;
    }
  }
  else
  {
    v6 = *(_OWORD *)(v5 + 24);
  }
  result = a1;
  *a1 = v6;
  return result;
}
