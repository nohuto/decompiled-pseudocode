/*
 * XREFs of ?SetClipRect@DWMCursor@@UEAAJPEBUtagRECT@@@Z @ 0x180027110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::SetClipRect(DWMCursor *this, const struct tagRECT *a2)
{
  *(struct tagRECT *)((char *)this + 120) = *a2;
  return (*(__int64 (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 80LL))(this);
}
