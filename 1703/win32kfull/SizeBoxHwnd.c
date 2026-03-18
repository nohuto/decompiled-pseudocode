/*
 * XREFs of SizeBoxHwnd @ 0x1C0239024
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxWindowHitTest2 @ 0x1C00FD4B0 (xxxWindowHitTest2.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     DrawSize @ 0x1C020ED64 (DrawSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SizeBoxHwnd(__int64 a1)
{
  int v1; // r11d
  int v2; // r9d
  int v3; // r10d
  int v5; // edx

  v1 = *(_DWORD *)(a1 + 140);
  v2 = *(_BYTE *)(a1 + 66) & 0x40;
  if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
    v3 = *(_DWORD *)(a1 + 128);
  else
    v3 = *(_DWORD *)(a1 + 136);
  while ( 1 )
  {
    if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
      return 0LL;
    if ( (*(_BYTE *)(a1 + 70) & 4) != 0 )
      break;
    if ( (*(_BYTE *)(a1 + 71) & 0x40) == 0 || (*(_BYTE *)(a1 + 56) & 8) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(a1 + 104);
  }
  if ( (*(_BYTE *)(a1 + 71) & 1) != 0 )
    return 0LL;
  if ( v2 )
    v5 = *(_DWORD *)(a1 + 144);
  else
    v5 = *(_DWORD *)(a1 + 152);
  if ( v2 )
  {
    if ( v3 - 2 <= v5 )
      goto LABEL_17;
    return 0LL;
  }
  if ( v3 + 2 < v5 )
    return 0LL;
LABEL_17:
  if ( v1 + 2 < *(_DWORD *)(a1 + 156) )
    return 0LL;
  return a1;
}
