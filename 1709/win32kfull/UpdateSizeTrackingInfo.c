/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1C01DD398
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01ED2B0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01D87E8 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(struct tagWND *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __m128i *MonitorWorkRectForWindow; // rax
  int v10; // ebx
  __int64 v11; // rcx
  BOOL v12; // ecx
  int v13; // eax
  int v14; // ebx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 v17; // [rsp+52h] [rbp+Ah]

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 648LL);
  v7 = *(_QWORD *)(v6 + 232);
  if ( *(_QWORD *)(v6 + 216) != v7 )
    return 0LL;
  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v15, v7, a1);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(*MonitorWorkRectForWindow, 8)) - _mm_cvtsi128_si32(*MonitorWorkRectForWindow);
  if ( IsLeftOrRightArranged(a1) && (unsigned int)GetWindowExtendedMargin(v11, (__int64)&v16) )
    v10 += v17 + v16;
  v12 = 0;
  v13 = v10 - *a3;
  if ( v13 <= 0 )
    return 0LL;
  v14 = v10 - *a2;
  if ( v14 > 0 )
    v12 = v14 > *(_DWORD *)(v6 + 108);
  if ( v13 < *(_DWORD *)(v6 + 112) )
    *(_DWORD *)(v6 + 112) = v13;
  if ( v12 )
    *(_DWORD *)(v6 + 104) = v14;
  return 1LL;
}
