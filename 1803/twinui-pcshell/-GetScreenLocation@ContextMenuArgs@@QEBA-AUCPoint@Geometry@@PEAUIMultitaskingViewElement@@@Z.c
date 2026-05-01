/*
 * XREFs of ?GetScreenLocation@ContextMenuArgs@@QEBA?AUCPoint@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1802A88B0
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x18029D988 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x180294BA4 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 */

_DWORD *__fastcall ContextMenuArgs::GetScreenLocation(__int16 *a1, _DWORD *a2, __int64 a3)
{
  int v4; // edx
  int v5; // eax
  _DWORD *ScreenLocation; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = HIWORD(*(_DWORD *)a1);
  if ( *(_DWORD *)a1 == -1 )
  {
    ScreenLocation = (_DWORD *)ElementHelpers::GetScreenLocation((__int64)v8, a3);
    *a2 = *ScreenLocation + (ScreenLocation[2] - *ScreenLocation) / 2;
    v5 = ScreenLocation[1] + (ScreenLocation[3] - ScreenLocation[1]) / 2;
  }
  else
  {
    *a2 = *a1;
    v5 = (__int16)v4;
  }
  a2[1] = v5;
  return a2;
}
