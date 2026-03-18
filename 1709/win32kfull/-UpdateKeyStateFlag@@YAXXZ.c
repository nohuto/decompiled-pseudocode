/*
 * XREFs of ?UpdateKeyStateFlag@@YAXXZ @ 0x1C00FDBF4
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

void UpdateKeyStateFlag(void)
{
  _QWORD *i; // rbx
  __int64 v1; // rcx

  if ( *(_QWORD *)(gptiCurrent + 432LL) == grpdeskRitInput )
  {
    for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
    {
      v1 = *(i - 38);
      *(_DWORD *)(v1 + 380) |= 1u;
      memset((void *)(v1 + 192), 255, 0x20uLL);
    }
  }
}
