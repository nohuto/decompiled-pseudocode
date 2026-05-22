/*
 * XREFs of ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180047064
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180046E20 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x180047328 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::DragOneFingerDown(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v7; // ecx
  _QWORD *v9; // rdx
  _DWORD *v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+38h] [rbp+10h]

  if ( (a3 & 4) != 0 )
    goto LABEL_7;
  if ( a5 != 1 )
  {
    if ( a5 == 2 )
    {
      v9 = (_QWORD *)((char *)this + 36);
      v10 = (_DWORD *)((char *)this + 28);
      v11 = 2LL;
      v12 = (__int64 *)((char *)a6 + 4);
      do
      {
        *v10++ = *((unsigned __int16 *)v12 - 1);
        v13 = *v12;
        v12 += 5;
        *v9++ = v13;
        --v11;
      }
      while ( v11 );
      if ( TwoFingerDragRecognizer::ContactsAreValid(this, 2u, a6) )
      {
        *((_WORD *)this + 8) &= ~8u;
        LODWORD(v15) = (*((_DWORD *)a6 + 11) + *((_DWORD *)a6 + 1)) / 2;
        v14 = *((_DWORD *)a6 + 12) + *((_DWORD *)a6 + 2);
        *((_DWORD *)this + 5) = 2;
        HIDWORD(v15) = v14 / 2;
        *(_QWORD *)((char *)this + 68) = v15;
        *(_QWORD *)((char *)this + 52) = v15;
        return 0LL;
      }
    }
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 7) != *((unsigned __int16 *)a6 + 1)
    || (v7 = *((unsigned __int16 *)this + 39), abs32(*((_DWORD *)a6 + 1) - *((_DWORD *)this + 9)) > v7)
    || abs32(*((_DWORD *)a6 + 2) - *((_DWORD *)this + 10)) > v7
    || !*((_WORD *)this + 39) )
  {
LABEL_7:
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  return 0LL;
}
