/*
 * XREFs of ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DEBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DEDC4 (-TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1800DEFA0 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1800DF01C (-SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::Add(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  __int16 v6; // r10
  unsigned int v7; // edi
  char v9; // bp
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // ecx

  v6 = *((_WORD *)this + 8);
  v7 = 0;
  v9 = a3;
  if ( (v6 & 0x10) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *((_WORD *)this + 8) = 0;
    v6 = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    *((_DWORD *)this + 5) = 0;
    v6 = v6 & 0xFFE7 | 8;
    *((_WORD *)this + 8) = v6;
    v12 = 0;
  }
  else
  {
    v12 = *((_DWORD *)this + 5);
  }
  if ( !v12 )
    return (unsigned int)TwoFingerClickRecognizer::TapInactive(this, a2, a3, a4, a5, a6);
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (a3 & 4) == 0 && a5 <= 2 && TwoFingerClickRecognizer::ContactsWithinBoundingBox(this, 1u, a6) )
    {
      if ( a5 != 2 )
        return v7;
      *((_DWORD *)this + 10) = *(unsigned __int16 *)(v17 + 42);
      *(_QWORD *)((char *)this + 52) = *(_QWORD *)(v17 + 44);
      v18 = *((unsigned __int16 *)this + 30);
      if ( abs32(*(_DWORD *)(v17 + 4) - *(_DWORD *)(v17 + 44)) <= v18
        && abs32(*(_DWORD *)(v17 + 8) - *(_DWORD *)(v17 + 48)) <= v18
        && *((_WORD *)this + 30) )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 32);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 2;
        return v7;
      }
    }
    *((_DWORD *)this + 5) = 4;
    *((_WORD *)this + 8) = 0;
    return v7;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
      return v7;
    if ( a5 == 1 )
    {
      v15 = 1;
      goto LABEL_15;
    }
LABEL_23:
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
    return v7;
  }
  if ( a5 != 2 )
  {
    if ( a5 == 1 )
    {
      if ( (a3 & 4) == 0 )
      {
        v16 = a4 + *((unsigned __int16 *)this + 31);
        *((_DWORD *)this + 5) = 3;
        *((_DWORD *)this + 6) = v16;
        *((_WORD *)this + 8) = v6 | 0x10;
        return v7;
      }
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  v15 = 2;
LABEL_15:
  if ( !TwoFingerClickRecognizer::ContactsWithinBoundingBox(this, v15, a6) )
    goto LABEL_23;
  if ( (v9 & 4) != 0 )
LABEL_17:
    TwoFingerClickRecognizer::SaveTapInfo(this, a4);
  return v7;
}
