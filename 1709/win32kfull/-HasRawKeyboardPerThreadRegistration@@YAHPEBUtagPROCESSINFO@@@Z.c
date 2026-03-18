/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01B5E80
 * Callers:
 *     DestroyThreadHidObjects @ 0x1C00C6FF0 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01B676C (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 37); ; i = *(_QWORD *)(i + 640) )
  {
    if ( !i )
      return 0LL;
    if ( (*(_DWORD *)(i + 1184) & 0x200000) != 0 )
      break;
  }
  return 1LL;
}
