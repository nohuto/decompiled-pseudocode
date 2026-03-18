/*
 * XREFs of ??0CRectanglesShape@@QEAA@XZ @ 0x180094240
 * Callers:
 *     _dynamic_initializer_for__CRectanglesShape::sc_emptyShape__ @ 0x180001470 (_dynamic_initializer_for__CRectanglesShape--sc_emptyShape__.c)
 * Callees:
 *     <none>
 */

CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this)
{
  CRectanglesShape *result; // rax

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 1) = (char *)this + 40;
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 7) = 1;
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  return result;
}
