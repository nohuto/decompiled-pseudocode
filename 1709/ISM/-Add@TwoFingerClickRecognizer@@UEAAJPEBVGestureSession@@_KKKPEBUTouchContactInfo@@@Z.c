/*
 * XREFs of ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800474D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180047690 (-TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x180047850 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1800478CC (-SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::Add(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v6; // edi
  char v8; // bp
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // edx
  __int64 v15; // r8
  unsigned int v16; // ecx

  v6 = 0;
  v8 = a3;
  if ( (*((_BYTE *)this + 16) & 0x10) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    *((_WORD *)this + 8) &= ~0x10u;
    *((_WORD *)this + 8) |= 8u;
    *((_DWORD *)this + 5) = 0;
  }
  v11 = *((_DWORD *)this + 5);
  if ( !v11 )
    return (unsigned int)TwoFingerClickRecognizer::TapInactive(this, a2, a3, a4, a5, a6);
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (a3 & 4) == 0 && a5 <= 2 && TwoFingerClickRecognizer::ContactsWithinBoundingBox(this, 1u, a6) )
    {
      if ( a5 != 2 )
        return v6;
      *((_DWORD *)this + 10) = *(unsigned __int16 *)(v15 + 42);
      *(_QWORD *)((char *)this + 52) = *(_QWORD *)(v15 + 44);
      v16 = *((unsigned __int16 *)this + 30);
      if ( abs32(*(_DWORD *)(v15 + 4) - *(_DWORD *)(v15 + 44)) <= v16
        && abs32(*(_DWORD *)(v15 + 8) - *(_DWORD *)(v15 + 48)) <= v16
        && *((_WORD *)this + 30) )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 32);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 2;
        return v6;
      }
    }
    *((_DWORD *)this + 5) = 4;
    *((_WORD *)this + 8) = 0;
    return v6;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      return v6;
    if ( a5 == 1 )
    {
      v14 = 1;
      goto LABEL_14;
    }
LABEL_22:
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
    return v6;
  }
  if ( a5 != 2 )
  {
    if ( a5 == 1 )
    {
      if ( (a3 & 4) == 0 )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 31);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 3;
        return v6;
      }
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  v14 = 2;
LABEL_14:
  if ( !TwoFingerClickRecognizer::ContactsWithinBoundingBox(this, v14, a6) )
    goto LABEL_22;
  if ( (v8 & 4) != 0 )
LABEL_16:
    TwoFingerClickRecognizer::SaveTapInfo(this, a4);
  return v6;
}
