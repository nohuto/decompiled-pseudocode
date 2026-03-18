/*
 * XREFs of DWP_GetEnabledPopup @ 0x1C020F330
 * Callers:
 *     GetActiveTrackPwnd @ 0x1C01C0854 (GetActiveTrackPwnd.c)
 *     xxxActivateEnabledPopup @ 0x1C020F3C8 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C020F4B8 (xxxFlashEnabledPopup.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C005D3B8 (_GhostWindowFromHungWindow.c)
 */

__int64 __fastcall DWP_GetEnabledPopup(_QWORD *a1)
{
  __int64 v1; // rbx
  int v2; // r8d
  _QWORD *i; // rax
  __int64 v4; // rax

  v1 = a1[11];
  v2 = 0;
  while ( (_QWORD *)v1 != a1 )
  {
    if ( v1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v1 + 16) + 408LL) == *(_QWORD *)(a1[2] + 408LL)
        && (*(_BYTE *)(v1 + 71) & 0x18) == 0x10 )
      {
        for ( i = *(_QWORD **)(v1 + 120); i; i = (_QWORD *)i[15] )
        {
          if ( i == a1 )
            goto LABEL_14;
        }
      }
      v1 = *(_QWORD *)(v1 + 88);
    }
    else
    {
      if ( v2 )
        return 0LL;
      v2 = 1;
      v1 = *(_QWORD *)(a1[13] + 112LL);
    }
  }
  v1 = 0LL;
LABEL_14:
  if ( v1 )
  {
    v4 = GhostWindowFromHungWindow(v1);
    if ( v4 )
      return v4;
  }
  return v1;
}
