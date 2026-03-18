/*
 * XREFs of EditionForegroundQAccessibleToMouseProducer @ 0x1C0106FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C010CDD0 (-WakeInjectedFlushWaiter@@YAXXZ.c)
 */

__int64 __fastcall EditionForegroundQAccessibleToMouseProducer(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  if ( !gpqForeground )
    return 1LL;
  v4 = *(_QWORD *)(gpqForeground + 380LL);
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( (unsigned int)a1 > (unsigned int)v4 )
    return 1LL;
  if ( (_DWORD)a1 == (_DWORD)v4 )
  {
    v6 = HIDWORD(a1);
    v7 = HIDWORD(v4);
    if ( (_DWORD)v6 == (_DWORD)v7 || (_DWORD)v7 == -1 || (_DWORD)v6 == -1 )
      return 1LL;
  }
  if ( a2 )
    EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  if ( a3 )
    WakeInjectedFlushWaiter();
  return 0LL;
}
