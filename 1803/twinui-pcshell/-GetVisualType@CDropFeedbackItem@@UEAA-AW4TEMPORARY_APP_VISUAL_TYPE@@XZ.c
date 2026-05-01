/*
 * XREFs of ?GetVisualType@CDropFeedbackItem@@UEAA?AW4TEMPORARY_APP_VISUAL_TYPE@@XZ @ 0x1802F61F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDropFeedbackItem::GetVisualType(__int64 a1)
{
  return *(_DWORD *)(a1 + 68) == 0;
}
