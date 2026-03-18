/*
 * XREFs of ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01C18C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 */

__int64 __fastcall xxxEnumTurnOffCompositing(struct tagWND *a1)
{
  if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
    xxxSetWindowStyle(a1, 4294967276LL, *((_DWORD *)a1 + 16) & 0x87F77FF);
  return 1LL;
}
