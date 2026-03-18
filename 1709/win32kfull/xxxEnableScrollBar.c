/*
 * XREFs of xxxEnableScrollBar @ 0x1C0083C74
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C0083BB0 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0083CA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxEnableWindow @ 0x1C009DF50 (xxxEnableWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01B5C04 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // r10
  int v8; // eax
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // eax

  if ( a2 != 2 )
    return xxxEnableWndSBArrows((struct tagWND *)BugCheckParameter2, a2, a3);
  v5 = safe_cast_fnid_to_PSBWND();
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = *(_DWORD *)(v5 + 12);
  v9 = v8 & 3;
  if ( v9 == v6 )
    return 0LL;
  if ( v6 == 3 )
  {
    v10 = 1;
LABEL_7:
    v11 = v6 | v8;
    goto LABEL_8;
  }
  if ( v6 )
  {
    if ( (v6 | v9) != 3 )
    {
LABEL_21:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 1);
    }
    v10 = 1;
  }
  else
  {
    v10 = 2;
    if ( v9 != 3 )
      v10 = 0;
  }
  if ( !v10 )
    goto LABEL_21;
  if ( v6 )
    goto LABEL_7;
  v11 = v8 & 0xFFFFFFFC;
LABEL_8:
  *(_DWORD *)(v7 + 12) = v11;
  v12 = xxxEnableWindow((struct tagWND *)BugCheckParameter2, v10 == 2);
  if ( !v12 )
    return *(_BYTE *)(BugCheckParameter2 + 71) & 8;
  LOBYTE(v12) = ~*(_BYTE *)(BugCheckParameter2 + 71);
  return (v12 >> 3) & 1;
}
