/*
 * XREFs of IsWindowHolographicForHitTest @ 0x1C0063E70
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     IsWindowEffectivelyCloaked @ 0x1C00CB5D4 (IsWindowEffectivelyCloaked.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00CF29C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 */

_BOOL8 __fastcall IsWindowHolographicForHitTest(__int64 a1)
{
  __int64 v1; // rbx
  _BOOL8 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rax
  __int16 v11; // ax

  v1 = a1;
  if ( !a1 )
    return 0LL;
  do
  {
    result = *(_QWORD *)(v1 + 104);
    if ( result )
    {
      v3 = *(_QWORD *)(v1 + 24);
      v4 = 0LL;
      if ( v3 )
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 )
          v4 = *(_QWORD *)(v5 + 16);
      }
      if ( result == v4 )
        break;
    }
    v1 = *(_QWORD *)(v1 + 104);
  }
  while ( result );
  v6 = 0LL;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 8);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 16);
  }
  if ( result != v6 && ((*(_BYTE *)(v1 + 66) & 8) == 0 || !GetTopLevelWindow(v1)) )
    return 0LL;
  v8 = *(_QWORD *)(v1 + 184);
  if ( !v8 )
    goto LABEL_16;
  if ( !atomDWMProp )
    goto LABEL_16;
  v9 = *(_DWORD *)(v8 + 4);
  v10 = v8 + 8;
  if ( !v9 )
    goto LABEL_16;
  while ( *(_WORD *)(v10 + 8) != atomDWMProp || (*(_BYTE *)(v10 + 10) & 1) == 0 )
  {
    v10 += 16LL;
    if ( !--v9 )
      goto LABEL_16;
  }
  if ( *(_QWORD *)v10 )
    v11 = *(_OWORD *)*(_QWORD *)v10;
  else
LABEL_16:
    v11 = 0;
  return (v11 & 0x2000) != 0;
}
