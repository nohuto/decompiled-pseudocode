/*
 * XREFs of ?GetSourceState@CSystemMemoryBitmap@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x180170CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetSourceState(__int64 a1)
{
  return (unsigned int)(*(_QWORD *)(a1 + 216) != 0LL) + 1;
}
