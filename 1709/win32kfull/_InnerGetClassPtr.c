/*
 * XREFs of _InnerGetClassPtr @ 0x1C0073240
 * Callers:
 *     GetClassPtr @ 0x1C0072FE0 (GetClassPtr.c)
 *     _UnregisterClass @ 0x1C0073050 (_UnregisterClass.c)
 *     InternalRegisterClassEx @ 0x1C0073DB8 (InternalRegisterClassEx.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall InnerGetClassPtr(__int16 a1, __int64 **a2, __int64 a3)
{
  __int64 *i; // rcx

  if ( a1 )
  {
    for ( i = *a2; i; i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 4) == a1 && (!a3 || *((_WORD *)i + 61) == WORD1(a3)) && (*((_BYTE *)i + 34) & 4) == 0 )
        return a2;
      a2 = (__int64 **)i;
    }
  }
  return 0LL;
}
