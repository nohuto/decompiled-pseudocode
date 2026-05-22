/*
 * XREFs of ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1800455F4
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180045440 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z @ 0x1800456D4 (-ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z.c)
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1800457B0 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 */

void __fastcall ClickRecognizer::OnTouch(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned int a3,
        int a4,
        const struct TouchContactInfo *a5)
{
  ClickRecognizer *v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // kr00_8
  unsigned int v8; // eax
  bool v9; // zf
  int v10; // ecx
  __int64 v11; // rcx
  unsigned int v12; // [rsp+40h] [rbp+18h] BYREF

  *((_DWORD *)this + 32) = a3;
  v5 = this;
  if ( a4 != 1 || (*((_BYTE *)this + 16) & 2) != 0 )
  {
    ClickRecognizer::CancelTapAndHold(this);
    *(_WORD *)(v11 + 16) |= 2u;
  }
  else if ( (unsigned int)(((int)(*((_DWORD *)this + 5) << 28) >> 28) - 1) <= 3 )
  {
    v6 = *((unsigned __int16 *)this + 18);
    v7 = (int)(*((_QWORD *)a2 + 149) - *((_DWORD *)a5 + 1));
    if ( (HIDWORD(v7) ^ (unsigned int)v7) - HIDWORD(v7) > v6
      || abs32(HIDWORD(*((_QWORD *)a2 + 149)) - *((_DWORD *)a5 + 2)) > v6 )
    {
      ClickRecognizer::CancelTapAndHold(this);
    }
    else if ( a3 >= *((_DWORD *)this + 33) )
    {
      v8 = 0;
      *((_WORD *)this + 8) &= ~0x200u;
      v9 = (*((_BYTE *)this + 20) & 0xF) == 0;
      v12 = 0;
      if ( v9 )
      {
        v10 = -2147024809;
      }
      else
      {
        v10 = ClickRecognizer::ChangeTapAndHoldState(this, &v12);
        v8 = v12;
      }
      if ( v10 >= 0 )
      {
        if ( v8 )
        {
          *((_WORD *)v5 + 8) |= 0x200u;
          *((_DWORD *)v5 + 33) += v8;
        }
      }
    }
  }
}
