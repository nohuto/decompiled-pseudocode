/*
 * XREFs of ??0CRectanglesShape@@QEAA@XZ @ 0x1800643AC
 * Callers:
 *     _dynamic_initializer_for__CRectanglesShape::sc_emptyShape__ @ 0x180002A20 (_dynamic_initializer_for__CRectanglesShape--sc_emptyShape__.c)
 * Callees:
 *     <none>
 */

CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this)
{
  CRectanglesShape *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 48;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)((char *)this + 36) = 1LL;
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  return result;
}
