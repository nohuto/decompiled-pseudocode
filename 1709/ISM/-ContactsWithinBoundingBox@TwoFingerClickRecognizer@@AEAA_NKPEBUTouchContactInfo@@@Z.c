/*
 * XREFs of ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x180047850
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800474D0 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TwoFingerClickRecognizer::ContactsWithinBoundingBox(
        TwoFingerClickRecognizer *this,
        unsigned int a2,
        const struct TouchContactInfo *a3)
{
  __int64 v3; // r10
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v3 = 0LL;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v5 = *((unsigned __int16 *)a3 + 20 * v3 + 1);
    if ( v5 == *((_DWORD *)this + 9) )
    {
      v6 = *(_QWORD *)((char *)this + 44);
    }
    else
    {
      if ( v5 != *((_DWORD *)this + 10) )
        return 0;
      v6 = *(_QWORD *)((char *)this + 52);
    }
    v7 = *((unsigned __int16 *)this + 33);
    if ( abs32(v6 - *((_DWORD *)a3 + 10 * v3 + 1)) >= v7 || abs32(HIDWORD(v6) - *((_DWORD *)a3 + 10 * v3 + 2)) >= v7 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 1;
  }
  return 0;
}
