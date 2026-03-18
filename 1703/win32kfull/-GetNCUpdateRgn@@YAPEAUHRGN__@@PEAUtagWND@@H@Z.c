/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F11D0
 * Callers:
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00CC88C (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     DecPaintCount @ 0x1C001C338 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     CalcWindowRgn @ 0x1C00F12D0 (CalcWindowRgn.c)
 */

unsigned __int64 __fastcall GetNCUpdateRgn(struct tagWND *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v4; // esi
  __int64 EmptyRgnPublic; // rax
  int v8; // eax

  v3 = *((_QWORD *)a1 + 22);
  v4 = a2;
  if ( v3 <= 1 )
    return v3;
  EmptyRgnPublic = CreateEmptyRgnPublic(a1, a2, a3);
  v3 = EmptyRgnPublic;
  if ( EmptyRgnPublic )
  {
    if ( (unsigned int)GreCombineRgn(EmptyRgnPublic, *((_QWORD *)a1 + 22), 0LL, 5LL) )
      goto LABEL_5;
    GreDeleteObject(v3);
  }
  v3 = 1LL;
LABEL_5:
  if ( v4 )
  {
    CalcWindowRgn(a1, ghrgnInv2, 1LL);
    v8 = GreCombineRgn(*((_QWORD *)a1 + 22), *((_QWORD *)a1 + 22), ghrgnInv2, 1LL);
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        GreDeleteObject(*((_QWORD *)a1 + 22));
        *((_QWORD *)a1 + 22) = 0LL;
        SetOrClrWF(0, a1, 0x120u, 1);
        if ( (*((_BYTE *)a1 + 57) & 0x10) == 0 )
          DecPaintCount((__int64)a1);
      }
    }
    else
    {
      GreDeleteObject(*((_QWORD *)a1 + 22));
      *((_QWORD *)a1 + 22) = 1LL;
    }
  }
  return v3;
}
