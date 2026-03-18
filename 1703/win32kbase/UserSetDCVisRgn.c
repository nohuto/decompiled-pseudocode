/*
 * XREFs of UserSetDCVisRgn @ 0x1C002B840
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C00400D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C0040BF0 (GreSetRectRgn.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     CreateEmptyRgnPublic @ 0x1C00425D0 (CreateEmptyRgnPublic.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  HRGN EmptyRgnPublic; // rdi
  int v3; // esi
  int v4; // eax
  HRGN v5; // rcx
  int v6; // r9d
  HRGN v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (int)IsCalcVisRgnSupported() >= 0
    && (unsigned int)CalcVisRgn(&v7, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3), *((unsigned int *)a1 + 16)) )
  {
    *((_DWORD *)a1 + 16) &= ~0x10000000u;
  }
  else
  {
    *((_DWORD *)a1 + 16) |= 0x10000000u;
  }
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported() >= 0
    && GetStyleWindow(*((_QWORD *)a1 + 2), 2848LL) )
  {
    EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
    GreCombineRgn(EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn(EmptyRgnPublic);
    v3 = 1;
  }
  else
  {
    EmptyRgnPublic = (HRGN)*((_QWORD *)a1 + 6);
    v3 = 0;
  }
  v4 = *((_DWORD *)a1 + 16);
  if ( (v4 & 0x80u) != 0 )
  {
    v5 = v7;
    if ( EmptyRgnPublic )
    {
      v6 = 1;
LABEL_13:
      GreCombineRgn(v5, v5, EmptyRgnPublic, v6);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (v4 & 0x40) == 0 )
      goto LABEL_8;
    v5 = v7;
    if ( EmptyRgnPublic != (HRGN)1 )
    {
      v6 = 4;
      goto LABEL_13;
    }
  }
  GreSetRectRgn(v5, 0);
LABEL_8:
  ResetOrg(v7, a1, 1);
  if ( v3 )
    GreDeleteObject((HBRUSH)EmptyRgnPublic);
}
