/*
 * XREFs of ?SetDragOptions@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_DRAG_OPTIONS@@@Z @ 0x18005F2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::SetDragOptions(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 88) = a2;
  result = 0LL;
  *(_BYTE *)(a1 + 92) = 1;
  return result;
}
