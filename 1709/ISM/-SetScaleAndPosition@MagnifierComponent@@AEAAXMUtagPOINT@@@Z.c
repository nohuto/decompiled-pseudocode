/*
 * XREFs of ?SetScaleAndPosition@MagnifierComponent@@AEAAXMUtagPOINT@@@Z @ 0x1800A5DD8
 * Callers:
 *     ?UpdatePosition@MagnifierComponent@@QEAAJUtagPOINT@@@Z @ 0x1800A5CEC (-UpdatePosition@MagnifierComponent@@QEAAJUtagPOINT@@@Z.c)
 *     ?UpdateScale@MagnifierComponent@@QEAAJM@Z @ 0x1800A5D68 (-UpdateScale@MagnifierComponent@@QEAAJM@Z.c)
 *     ?ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z @ 0x1800A5F38 (-ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierComponent::SetScaleAndPosition(struct tagPOINT *this, float a2, struct tagPOINT a3)
{
  int y; // eax
  float v4; // xmm2_4
  int v5; // r9d
  int v6; // r8d
  LONG v7; // edx
  LONG v8; // eax

  this[4] = a3;
  *(float *)&this[5].x = a2;
  if ( a2 >= 1.0 )
  {
    if ( a2 > 8.0 )
      this[5].x = 1090519040;
  }
  else
  {
    this[5].x = 1065353216;
  }
  y = this[3].y;
  v4 = *(float *)&this[5].x + *(float *)&this[5].x;
  v5 = (int)(float)((float)this[3].x / v4);
  v6 = (int)(float)((float)y / v4);
  if ( this[4].x >= v5 )
  {
    v7 = this[3].x - v5;
    if ( this[4].x > v7 )
      this[4].x = v7;
  }
  else
  {
    this[4].x = v5;
  }
  if ( this[4].y >= v6 )
  {
    v8 = y - v6;
    if ( this[4].y > v8 )
      this[4].y = v8;
  }
  else
  {
    this[4].y = v6;
  }
}
