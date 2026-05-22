/*
 * XREFs of ?SetLocked@MobileCursor@@UEAAJ_N@Z @ 0x180030900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileCursor::SetLocked(MobileCursor *this, char a2)
{
  *((_BYTE *)this + 57) = a2;
  return 0LL;
}
