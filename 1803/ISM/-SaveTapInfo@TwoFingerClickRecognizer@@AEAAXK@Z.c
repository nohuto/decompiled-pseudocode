/*
 * XREFs of ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1800DF01C
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DEBF0 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerClickRecognizer::SaveTapInfo(TwoFingerClickRecognizer *this, int a2)
{
  int v4; // r10d
  int v5; // edx
  __int16 v6; // cx
  int v7; // eax
  unsigned int v8; // r10d
  __int16 v9; // cx
  __int64 v10; // [rsp+8h] [rbp+8h]

  v4 = (*((_DWORD *)this + 11) + *((_DWORD *)this + 13)) / 2;
  LODWORD(v10) = v4;
  v5 = (*((_DWORD *)this + 12) + *((_DWORD *)this + 14)) / 2;
  HIDWORD(v10) = v5;
  v6 = *((_WORD *)this + 8) & 0xFFE6 | 1;
  *((_WORD *)this + 8) = v6;
  if ( (v6 & 4) != 0 )
  {
    v7 = *((_DWORD *)this + 7) - v4;
    v8 = *((unsigned __int16 *)this + 34);
    if ( abs32(v7) < v8 && abs32(*((_DWORD *)this + 8) - v5) < v8 )
    {
      v6 |= 2u;
      *((_WORD *)this + 8) = v6;
    }
  }
  else
  {
    *((_WORD *)this + 8) = v6 | 8;
    *((_DWORD *)this + 6) = a2 + *((unsigned __int16 *)this + 35);
    *((_WORD *)this + 8) |= 0x10u;
    v6 = *((_WORD *)this + 8);
  }
  if ( (v6 & 2) != 0 )
    v9 = v6 & 0xFFFB;
  else
    v9 = v6 | 4;
  *((_WORD *)this + 8) = v9;
  if ( (v9 & 2) == 0 )
    *(_QWORD *)((char *)this + 28) = v10;
  *((_DWORD *)this + 5) = 0;
}
