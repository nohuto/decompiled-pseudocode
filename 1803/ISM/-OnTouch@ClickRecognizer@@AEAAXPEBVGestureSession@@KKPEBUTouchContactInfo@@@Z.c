/*
 * XREFs of ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1800DCCA8
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DCAE0 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z @ 0x1800DCD9C (-ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z.c)
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1800DCE78 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 */

void __fastcall ClickRecognizer::OnTouch(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned int a3,
        int a4,
        const struct TouchContactInfo *a5)
{
  ClickRecognizer *v6; // r10
  __int16 v7; // r9
  int v8; // r8d
  unsigned int v9; // edi
  __int64 v10; // kr00_8
  unsigned int v11; // eax
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int v14; // [rsp+40h] [rbp+18h] BYREF

  *((_DWORD *)this + 32) = a3;
  v6 = this;
  if ( a4 != 1 || (v7 = *((_WORD *)this + 8), (v7 & 2) != 0) )
  {
    ClickRecognizer::CancelTapAndHold(this);
    *(_WORD *)(v13 + 16) |= 2u;
  }
  else
  {
    v8 = (int)(*((_DWORD *)this + 5) << 28) >> 28;
    if ( (unsigned int)(v8 - 1) <= 3 )
    {
      v9 = *((unsigned __int16 *)this + 18);
      v10 = (int)(*((_QWORD *)a2 + 149) - *((_DWORD *)a5 + 1));
      if ( (HIDWORD(v10) ^ (unsigned int)v10) - HIDWORD(v10) > v9
        || abs32(HIDWORD(*((_QWORD *)a2 + 149)) - *((_DWORD *)a5 + 2)) > v9 )
      {
        ClickRecognizer::CancelTapAndHold(this);
      }
      else if ( a3 >= *((_DWORD *)this + 33) )
      {
        v11 = 0;
        v14 = 0;
        *((_WORD *)this + 8) = v7 & 0xFDFF;
        if ( v8 )
        {
          v12 = ClickRecognizer::ChangeTapAndHoldState(this, &v14);
          v11 = v14;
        }
        else
        {
          v12 = -2147024809;
        }
        if ( v12 >= 0 )
        {
          if ( v11 )
          {
            *((_WORD *)v6 + 8) |= 0x200u;
            *((_DWORD *)v6 + 33) += v11;
          }
        }
      }
    }
  }
}
