/*
 * XREFs of ?SetVisibility@DWMHardwareCursor@@UEAAJ_N@Z @ 0x1800280E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMHardwareCursor::SetVisibility(DWMHardwareCursor *this, char a2)
{
  if ( *((_BYTE *)this + 360) != a2 )
  {
    *((_BYTE *)this + 360) = a2;
    *((_BYTE *)this + 392) = a2;
  }
  return 0LL;
}
