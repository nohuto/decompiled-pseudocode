/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01B2ED0
 * Callers:
 *     DestroyThreadHidObjects @ 0x1C00B0770 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01B37FC (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 36); ; i = *(_QWORD *)(i + 584) )
  {
    if ( !i )
      return 0LL;
    if ( (*(_DWORD *)(i + 1096) & 0x200000) != 0 )
      break;
  }
  return 1LL;
}
