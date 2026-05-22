/*
 * XREFs of ?GetDisplay@DWMCursor@@UEAAPEAUIInputDisplay@@XZ @ 0x180006DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInputDisplay *__fastcall DWMCursor::GetDisplay(DWMCursor *this)
{
  return (struct IInputDisplay *)*((_QWORD *)this + 4);
}
