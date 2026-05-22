/*
 * XREFs of ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DCAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1800DCCA8 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1800DCE78 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 */

__int64 __fastcall ClickRecognizer::Add(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v5; // bp
  unsigned int v8; // r9d
  char *v9; // rsi
  int v10; // eax
  unsigned int v11; // r11d
  __int16 v12; // cx
  __int64 v13; // r8
  unsigned int v14; // r9d
  __int16 v15; // cx
  __int16 v16; // cx

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    v8 = 1;
    if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
      v8 = *((_DWORD *)a2 + 187);
    v9 = (char *)a2 + (-(__int64)((*((_DWORD *)a2 + 3) & 0x7880) != 0) & 0xFFFFFFFFFFFFFE70uLL) + 1152;
    *((_QWORD *)this + 14) = *(_QWORD *)(v9 + 4);
    if ( (a3 & 1) != 0 )
    {
      *((_WORD *)this + 8) &= ~2u;
      v10 = *((unsigned __int16 *)this + 14);
      *((_DWORD *)this + 33) = a4;
      *((_WORD *)this + 8) |= 0x200u;
      *((_DWORD *)this + 5) &= 0xFFFFFFF1;
      *((_DWORD *)this + 33) += v10;
      *((_DWORD *)this + 5) |= 1u;
      if ( (*((_DWORD *)a2 + 3) & 2) != 0
        && (*((_WORD *)this + 8) & 0x80u) != 0
        && a4 - *((_DWORD *)this + 32) <= *((unsigned __int16 *)this + 13) )
      {
        v11 = *((unsigned __int16 *)this + 12);
        if ( abs32(*((_DWORD *)this + 30) - *((_DWORD *)v9 + 1)) <= v11
          && abs32(*((_DWORD *)this + 31) - *((_DWORD *)v9 + 2)) <= v11 )
        {
          *((_WORD *)this + 8) |= 9u;
          *((_QWORD *)this + 7) = *(_QWORD *)(v9 + 4);
        }
      }
    }
    ClickRecognizer::OnTouch(this, a2, a4, v8, (const struct TouchContactInfo *)v9);
    if ( (v5 & 4) != 0 )
    {
      v12 = *((_WORD *)this + 8);
      v13 = *((_QWORD *)a2 + 149);
      if ( (v12 & 2) != 0
        || (v14 = *((unsigned __int16 *)this + 18), abs32(v13 - *((_DWORD *)v9 + 1)) > v14)
        || abs32(HIDWORD(v13) - *((_DWORD *)v9 + 2)) > v14
        || (unsigned int)(((int)(*((_DWORD *)this + 5) << 28) >> 28) - 1) > 2
        || (v12 & 1) != 0 )
      {
        v16 = v12 & 0xFF7F;
      }
      else
      {
        v15 = v12 | 4;
        *(_QWORD *)((char *)this + 44) = *((_QWORD *)this + 14);
        *((_WORD *)this + 8) = v15;
        v16 = v15 | 0x80;
      }
      *((_WORD *)this + 8) = v16;
      *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
      ClickRecognizer::CancelTapAndHold(this);
    }
  }
  return 0LL;
}
