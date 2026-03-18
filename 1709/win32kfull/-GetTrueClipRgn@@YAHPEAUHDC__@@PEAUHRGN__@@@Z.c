/*
 * XREFs of ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013D2A8
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C00808C0 (GreGetRandomRgn.c)
 */

__int64 __fastcall GetTrueClipRgn(HDC a1, HRGN a2, __int64 a3, __int64 a4)
{
  HRGN EmptyRgn; // rbx
  unsigned int v7; // ebp
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+44h] [rbp+1Ch]

  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2, a3, a4);
  v7 = GreCopyVisRgn(a1, a2);
  if ( !(unsigned int)GreGetDCOrg(a1, &v9) )
    return 0LL;
  if ( (unsigned int)GreGetRandomRgn(a1, EmptyRgn, 1) )
  {
    GreOffsetRgn(EmptyRgn, v9, v10);
    v7 = GreCombineRgn(a2, a2, EmptyRgn, 1LL);
  }
  GreOffsetRgn(a2, -v9, -v10);
  GreDeleteObject(EmptyRgn);
  return v7;
}
