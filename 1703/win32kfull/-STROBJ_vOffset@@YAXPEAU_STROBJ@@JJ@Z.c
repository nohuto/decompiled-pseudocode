/*
 * XREFs of ?STROBJ_vOffset@@YAXPEAU_STROBJ@@JJ@Z @ 0x1C02A4204
 * Callers:
 *     OffTextOut @ 0x1C02A4848 (OffTextOut.c)
 * Callees:
 *     <none>
 */

void __fastcall STROBJ_vOffset(struct _STROBJ *a1, int a2, int a3)
{
  LONG top; // r9d
  __int64 v4; // rax
  ULONG cGlyphs; // r10d
  _DWORD *v6; // r11
  _DWORD *v7; // r9
  ULONG v8; // r9d
  _DWORD *v9; // rax

  if ( a2 || a3 )
  {
    a1->rclBkGround.left += a2;
    a1->rclBkGround.right += a2;
    a1->rclBkGround.top += a3;
    a1->rclBkGround.bottom += a3;
    top = a1[1].rclBkGround.top;
    if ( (top & 0x100) != 0 )
    {
      a2 *= 16;
      a3 *= 16;
    }
    v4 = *(_QWORD *)&a1[1].rclBkGround.bottom;
    if ( (top & 0x1400) != 0 )
    {
      cGlyphs = a1->cGlyphs;
      v6 = *(_DWORD **)&a1[4].rclBkGround.bottom;
      if ( a1->cGlyphs )
      {
        v7 = (_DWORD *)(v4 + 20);
        do
        {
          if ( *v6 == a1[5].cGlyphs )
          {
            *(v7 - 1) += a2;
            --cGlyphs;
            *v7 += a3;
          }
          v7 += 6;
          ++v6;
        }
        while ( cGlyphs );
      }
    }
    else if ( a1->ulCharInc )
    {
      *(_DWORD *)(v4 + 16) += a2;
      *(_DWORD *)(v4 + 20) += a3;
    }
    else
    {
      v8 = a1->cGlyphs;
      if ( a1->cGlyphs )
      {
        v9 = (_DWORD *)(v4 + 20);
        do
        {
          *(v9 - 1) += a2;
          *v9 += a3;
          v9 += 6;
          --v8;
        }
        while ( v8 );
      }
    }
  }
}
