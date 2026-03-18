/*
 * XREFs of ?UpdateKeyStateFlag@@YAXXZ @ 0x1C00B2C64
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

void UpdateKeyStateFlag(void)
{
  _QWORD *i; // rbx
  __int64 v1; // rcx

  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput )
  {
    for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
    {
      v1 = *(i - 34);
      *(_DWORD *)(v1 + 340) |= 1u;
      memset((void *)(v1 + 160), 255, 0x20uLL);
    }
  }
}
