/*
 * XREFs of EditionForegroundQAccessibleToMouseProducer @ 0x1C01040E0
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C0116A20 (-WakeInjectedFlushWaiter@@YAXXZ.c)
 */

__int64 __fastcall EditionForegroundQAccessibleToMouseProducer(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  if ( !gpqForeground )
    return 1LL;
  v4 = *(_QWORD *)(gpqForeground + 420LL);
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( (unsigned int)a1 > (unsigned int)v4 )
    return 1LL;
  if ( (_DWORD)a1 == (_DWORD)v4 )
  {
    v5 = HIDWORD(a1);
    v6 = HIDWORD(v4);
    if ( (_DWORD)v5 == (_DWORD)v6 || (_DWORD)v6 == -1 || (_DWORD)v5 == -1 )
      return 1LL;
  }
  if ( a2 )
    MSGLUA_GPQFOREGROUND();
  if ( a3 )
    WakeInjectedFlushWaiter();
  return 0LL;
}
