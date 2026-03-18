/*
 * XREFs of ?DesiresTearing@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1801D1C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::DesiresTearing(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this + 31) & 0x1000) != 0;
}
