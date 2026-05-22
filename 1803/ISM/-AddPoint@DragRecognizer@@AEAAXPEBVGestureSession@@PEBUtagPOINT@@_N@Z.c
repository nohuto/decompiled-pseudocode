/*
 * XREFs of ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1800DD658
 * Callers:
 *     ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DD440 (-Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DragRecognizer::AddPoint(
        struct tagPOINT *this,
        const struct GestureSession *a2,
        const struct tagPOINT *a3,
        char a4)
{
  int v6; // esi
  int v7; // ebx
  unsigned int y_low; // edi
  unsigned int v11; // r8d
  unsigned int y_high; // ecx
  char v13; // dl
  char v14; // r15
  bool v15; // zf
  bool v16; // sf
  unsigned __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  unsigned __int64 v21; // rbx
  int v22; // ecx
  int x_low; // r9d
  LONG v24; // ebp
  LONG v25; // r14d
  LONG v26; // edx
  char v27; // cl
  LONG y; // eax
  __int16 v29; // ax
  unsigned int x_high; // r8d

  v6 = a3->x - this[7].x;
  v7 = a3->y - this[7].y;
  y_low = LOWORD(this[4].y);
  v11 = abs32(v6);
  if ( v11 <= y_low )
  {
    y_high = HIWORD(this[4].y);
    if ( abs32(v7) <= y_high && y_low && y_high && !a4 )
      return;
  }
  v13 = BYTE2(this[3].y);
  v14 = 0;
  this[7] = *a3;
  if ( (v13 & 2) == 0 )
  {
    v14 = 1;
    BYTE2(this[3].y) = v13 | 2;
    if ( v11 <= y_low )
    {
      v15 = v7 == 0;
      v16 = v7 < 0;
    }
    else
    {
      v15 = v6 == 0;
      v16 = v6 < 0;
    }
    v17 = *((_QWORD *)a2 + 149);
    v18 = HIWORD(this[2].y) >> 1;
    v19 = v18 + LOWORD(this[2].x);
    v20 = HIWORD(this[2].y) - v18;
    v21 = HIDWORD(v17);
    if ( v16 || v15 )
      LODWORD(v21) = HIDWORD(*((_QWORD *)a2 + 149));
    v22 = -v19;
    x_low = LOWORD(this[3].x);
    if ( !v16 && !v15 )
      v22 = v19;
    if ( v11 <= y_low )
    {
      v25 = v17 + x_low;
      v24 = v21 + v22 - v20;
      v26 = v17 - x_low;
      x_low = v22 + v20;
    }
    else
    {
      v24 = v21 - x_low;
      v25 = v20 + v22 + v17;
      v26 = v17 + v22 - v20;
    }
    this[5].x = v26;
    this[6].x = v25;
    this[5].y = v24;
    this[6].y = x_low + v21;
    v13 = BYTE2(this[3].y);
    this[8] = this[7];
    this[9].x &= y_low < v11 ? -33 : -17;
  }
  v27 = v13;
  if ( (v13 & 6) == 2 )
  {
    if ( !HIWORD(this[2].y) )
    {
      v27 = v13 | 4;
LABEL_27:
      BYTE2(this[3].y) = v27;
      goto LABEL_28;
    }
    if ( a3->x < this[5].x || a3->x > this[6].x )
    {
      v27 = v13 | 4;
      this[9].x &= ~0x20u;
      goto LABEL_27;
    }
    y = a3->y;
    if ( y < this[5].y || (v27 = v13, y > this[6].y) )
    {
      v27 = v13 | 4;
      this[9].x &= ~0x10u;
      goto LABEL_27;
    }
  }
LABEL_28:
  v29 = this[3].y;
  LOWORD(this[4].y) = v29;
  HIWORD(this[4].y) = v29;
  if ( v14
    || a4
    || (x_high = HIWORD(this[3].x), abs32(this[7].x - this[8].x) > x_high)
    || abs32(this[7].y - this[8].y) > x_high
    || !HIWORD(this[3].x) )
  {
    BYTE2(this[3].y) = v27 | 8;
  }
}
