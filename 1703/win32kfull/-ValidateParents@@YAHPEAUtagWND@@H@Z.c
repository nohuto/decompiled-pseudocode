/*
 * XREFs of ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0048C6C
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C0066098 (IntersectWithParents.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00FF554 (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateParents(struct tagWND *a1, unsigned int a2)
{
  __int64 v2; // r8
  struct tagWND *v3; // rsi
  int v4; // r14d
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // r15
  int v9; // ebx
  HRGN v10; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v11; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0;
  while ( (*((_BYTE *)a1 + 71) & 0x40) != 0 )
    a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
  v5 = *((_QWORD *)v3 + 13);
  if ( v5 )
  {
    v6 = 0;
    if ( *((char *)a1 + 58) < 0 )
      v6 = a2;
    v7 = (int)v6;
    while ( (*(_BYTE *)(v5 + 71) & 2) == 0 )
    {
      if ( *(_QWORD *)(v5 + 176) )
      {
        if ( v7 )
          return 0LL;
        if ( !v4 )
        {
          v4 = 1;
          v12 = *((_OWORD *)v3 + 8);
          if ( !(unsigned int)IntersectWithParents(v3, &v12, v2) )
            return 1LL;
          SetRectRgnIndirect(ghrgnInv1, &v12);
          v2 = *((_QWORD *)v3 + 27);
          if ( v2 )
          {
            if ( !(unsigned int)GreCombineRgn(ghrgnInv1, ghrgnInv1, v2, 1LL) )
              return 1LL;
          }
        }
        v11 = *(struct tagRECT *)(v5 + 128);
        if ( !(unsigned int)IntersectWithParents(v5, &v11, v2) )
          return 1LL;
        v10 = (HRGN)ghrgnInv1;
        v9 = LogicalToPhysicalInPlaceRgn(v3, &v10);
        InternalInvalidate2((struct tagWND *)v5, v10, v10, &v11, 0x8048u);
        if ( v9 )
          GreDeleteObject(v10);
      }
      v5 = *(_QWORD *)(v5 + 104);
      if ( !v5 )
        return 1LL;
    }
  }
  return 1LL;
}
