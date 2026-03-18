/*
 * XREFs of ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C009F1CC
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C006A4F4 (IntersectWithParents.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C010B2D8 (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateParents(struct tagWND *a1, int a2)
{
  struct tagWND *v2; // rsi
  int v3; // r15d
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v7; // r8
  int v8; // ebx
  HRGN v9; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h] BYREF

  v2 = a1;
  v3 = 0;
  while ( (*((_BYTE *)a1 + 71) & 0x40) != 0 )
    a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
  v4 = *((_QWORD *)v2 + 13);
  v5 = 0;
  if ( *((char *)a1 + 58) < 0 )
    v5 = a2;
  while ( 1 )
  {
    if ( !v4 || (*(_BYTE *)(v4 + 71) & 2) != 0 )
      return 1LL;
    if ( *(_QWORD *)(v4 + 176) )
      break;
LABEL_10:
    v4 = *(_QWORD *)(v4 + 104);
  }
  if ( !v5 )
  {
    if ( !v3 )
    {
      v3 = 1;
      v11 = *((_OWORD *)v2 + 8);
      if ( !(unsigned int)IntersectWithParents((__int64)v2, &v11) )
        return 1LL;
      SetRectRgnIndirect(ghrgnInv1, &v11);
      v7 = *((_QWORD *)v2 + 27);
      if ( v7 )
      {
        if ( !(unsigned int)GreCombineRgn(ghrgnInv1, ghrgnInv1, v7, 1LL) )
          return 1LL;
      }
    }
    v10 = *(struct tagRECT *)(v4 + 128);
    if ( !(unsigned int)IntersectWithParents(v4, &v10) )
      return 1LL;
    v9 = (HRGN)ghrgnInv1;
    v8 = LogicalToPhysicalInPlaceRgn(v2, &v9);
    InternalInvalidate2((struct tagWND *)v4, v9, v9, &v10, 0x8048u);
    if ( v8 )
      GreDeleteObject(v9);
    goto LABEL_10;
  }
  return 0LL;
}
