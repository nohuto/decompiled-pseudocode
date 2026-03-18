/*
 * XREFs of IsWindowHolographicForHitTest @ 0x1C0062580
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0062420 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowEffectivelyCloaked @ 0x1C00B4684 (IsWindowEffectivelyCloaked.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

_BOOL8 __fastcall IsWindowHolographicForHitTest(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  __int16 v11; // ax
  _OWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1;
  if ( !a1 )
    return 0LL;
  memset(v13, 0, 0x28uLL);
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 104);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v1 + 24);
      v4 = 0LL;
      if ( v3 )
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 )
          v4 = *(_QWORD *)(v5 + 16);
      }
      if ( v2 == v4 )
        break;
    }
    v1 = *(_QWORD *)(v1 + 104);
    if ( !v2 )
      return 0LL;
  }
  v6 = 0LL;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 8);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 16);
  }
  if ( v2 != v6 && ((*(_BYTE *)(v1 + 66) & 8) == 0 || !GetTopLevelWindow(v1)) )
    return 0LL;
  v8 = *(_QWORD *)(v1 + 184);
  if ( !v8 )
    goto LABEL_19;
  if ( !atomDWMProp )
    goto LABEL_19;
  v9 = *(_DWORD *)(v8 + 4);
  v10 = v8 + 8;
  if ( !v9 )
    goto LABEL_19;
  while ( *(_WORD *)(v10 + 8) != atomDWMProp || (*(_BYTE *)(v10 + 10) & 1) == 0 )
  {
    v10 += 16LL;
    if ( !--v9 )
      goto LABEL_19;
  }
  if ( *(_QWORD *)v10 )
  {
    v13[0] = *(_OWORD *)*(_QWORD *)v10;
    v11 = v13[0];
  }
  else
  {
LABEL_19:
    v11 = 0;
  }
  return (v11 & 0x2000) != 0;
}
