/*
 * XREFs of xxxMNReleaseCapture @ 0x1C0209100
 * Callers:
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0214754 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 */

__int64 __fastcall xxxMNReleaseCapture(__int64 a1)
{
  __int64 result; // rax

  result = gptiCurrent;
  if ( a1 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 0x40000) != 0 )
    {
      *(_DWORD *)(a1 + 8) = result & 0xFFFBFFFF;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= ~0x100000u;
      return xxxReleaseCapture();
    }
  }
  return result;
}
