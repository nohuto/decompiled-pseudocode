/*
 * XREFs of ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x18004311C
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x180042E6C (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800CC365 (sqrtf_0.c)
 */

void __fastcall CursorAttraction::UpdateAttractionParameters(struct tagPOINT *this, const struct tagPOINT *a2)
{
  LONG y; // r10d
  LONG v4; // r8d
  LONG x; // r10d
  LONG v6; // r8d
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  LONG v10; // xmm7_4

  this[2] = *a2;
  y = a2->y;
  if ( this->y > y || this[1].y < y )
  {
    v4 = this[1].y;
    if ( (int)abs32(y - this->y) < (int)abs32(y - v4) )
      v4 = this->y;
    this[2].y = v4;
  }
  x = a2->x;
  if ( this->x > a2->x || this[1].x < x )
  {
    v6 = this[1].x;
    if ( (int)abs32(x - this->x) < (int)abs32(x - v6) )
      v6 = this->x;
    this[2].x = v6;
  }
  if ( this[2].x == a2->x && this[2].y == a2->y )
  {
    this[3].x = 0;
    this[3].y = 0;
  }
  else
  {
    v7 = (float)(this[2].x - a2->x);
    v8 = (float)(this[2].y - a2->y);
    v9 = sqrtf_0((float)(v7 * v7) + (float)(v8 * v8));
    *(float *)&v10 = (float)(v8 / v9) * *(float *)&this[4].y;
    *(float *)&this[3].x = (float)(v7 / v9) * *(float *)&this[4].y;
    this[3].y = v10;
  }
}
