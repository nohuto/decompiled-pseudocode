/*
 * XREFs of ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x180045F88
 * Callers:
 *     ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180045D70 (-Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DragRecognizer::AddPoint(
        struct tagPOINT *this,
        const struct GestureSession *a2,
        const struct tagPOINT *a3,
        char a4)
{
  int v5; // r11d
  int v7; // r8d
  unsigned int y_low; // ebx
  unsigned int y_high; // ecx
  unsigned int v11; // edi
  char v12; // r14
  char v13; // al
  bool v14; // zf
  bool v15; // sf
  unsigned __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // r11d
  int x_low; // edx
  int v21; // r9d
  LONG v22; // ecx
  unsigned __int64 v23; // rax
  LONG v24; // ecx
  unsigned __int64 v25; // rax
  char v26; // cl
  char v27; // cl
  LONG y; // eax
  __int16 v29; // ax
  unsigned int x_high; // ecx

  v5 = a3->x - this[7].x;
  v7 = a3->y - this[7].y;
  y_low = LOWORD(this[4].y);
  y_high = HIWORD(this[4].y);
  v11 = abs32(v5);
  if ( v11 <= y_low && abs32(v7) <= y_high && y_low && y_high && !a4 )
    return;
  v12 = 0;
  this[7] = *a3;
  v13 = BYTE2(this[3].y);
  if ( (v13 & 2) == 0 )
  {
    v12 = 1;
    BYTE2(this[3].y) = v13 | 2;
    if ( v11 <= y_low )
    {
      v14 = v7 == 0;
      v15 = v7 < 0;
    }
    else
    {
      v14 = v5 == 0;
      v15 = v5 < 0;
    }
    v16 = *((_QWORD *)a2 + 149);
    v17 = HIWORD(this[2].y) >> 1;
    v18 = v17 + LOWORD(this[2].x);
    v19 = HIWORD(this[2].y) - v17;
    x_low = LOWORD(this[3].x);
    v21 = -v18;
    if ( !v15 && !v14 )
      v21 = v18;
    if ( v11 <= y_low )
    {
      this[5].x = v16 - x_low;
      this[6].x = x_low + v16;
      v25 = HIDWORD(v16);
      this[5].y = v25 + v21 - v19;
      v24 = v19 + v21 + v25;
    }
    else
    {
      this[5].x = v16 + v21 - v19;
      v22 = v19 + v21 + v16;
      v23 = HIDWORD(v16);
      this[6].x = v22;
      this[5].y = v23 - x_low;
      v24 = x_low + v23;
    }
    this[8] = this[7];
    this[6].y = v24;
    this[9].x &= y_low < v11 ? -33 : -17;
  }
  v26 = BYTE2(this[3].y);
  if ( (v26 & 6) == 2 )
  {
    if ( !HIWORD(this[2].y) )
    {
      v27 = v26 | 4;
LABEL_25:
      BYTE2(this[3].y) = v27;
      goto LABEL_26;
    }
    if ( a3->x < this[5].x || a3->x > this[6].x )
    {
      v27 = v26 | 4;
      this[9].x &= ~0x20u;
      goto LABEL_25;
    }
    y = a3->y;
    if ( y < this[5].y || y > this[6].y )
    {
      v27 = v26 | 4;
      this[9].x &= ~0x10u;
      goto LABEL_25;
    }
  }
LABEL_26:
  v29 = this[3].y;
  LOWORD(this[4].y) = v29;
  HIWORD(this[4].y) = v29;
  if ( v12
    || a4
    || (x_high = HIWORD(this[3].x), abs32(this[7].x - this[8].x) > x_high)
    || abs32(this[7].y - this[8].y) > x_high
    || !HIWORD(this[3].x) )
  {
    BYTE2(this[3].y) |= 8u;
  }
}
