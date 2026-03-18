/*
 * XREFs of ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C020FD88
 * Callers:
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01B5C04 (safe_cast_fnid_to_PSBWND.c)
 *     xxxInvalidateRect @ 0x1C02045B4 (xxxInvalidateRect.c)
 */

__int64 __fastcall xxxEnableSBCtlArrows(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rbx
  int v7; // edi
  unsigned int v8; // eax
  struct tagWND *v9; // rcx
  int v10; // ebx

  v2 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v5 = v2;
  if ( !v2 )
    return 0LL;
  v7 = *(_DWORD *)(v2 + 12);
  v8 = v4 ? v4 | v7 : v7 & 0xFFFFFFFC;
  *(_DWORD *)(v5 + 12) = v8;
  if ( v7 == v8 )
    return 0LL;
  if ( (unsigned int)IsVisible(v3) )
    xxxInvalidateRect(v9, 0LL, 1);
  v10 = *(_DWORD *)(v5 + 12);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v10) & 1) != 0 )
    xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 4294967292LL, 1LL, 1);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v10) & 2) != 0 )
    xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 4294967292LL, 5LL, 1);
  return 1LL;
}
