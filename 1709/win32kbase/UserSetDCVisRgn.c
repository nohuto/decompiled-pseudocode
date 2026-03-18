/*
 * XREFs of UserSetDCVisRgn @ 0x1C007B3E0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C00569D0 (GreOffsetRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0056A80 (CreateEmptyRgnPublic.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  struct HOBJ__ *EmptyRgnPublic; // rdi
  int v3; // esi
  int v4; // eax
  HRGN v5; // rcx
  int v6; // r9d
  __int64 StyleWindow; // rsi
  HRGN v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (int)IsCalcVisRgnSupported() >= 0
    && (unsigned int)CalcVisRgn(&v8, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3), *((unsigned int *)a1 + 16)) )
  {
    *((_DWORD *)a1 + 16) &= ~0x10000000u;
  }
  else
  {
    *((_DWORD *)a1 + 16) |= 0x10000000u;
  }
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported() >= 0
    && (StyleWindow = GetStyleWindow(*((_QWORD *)a1 + 2), 2848LL)) != 0 )
  {
    EmptyRgnPublic = CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn(EmptyRgnPublic, *(_DWORD *)(StyleWindow + 128), *(_DWORD *)(StyleWindow + 132));
    v3 = 1;
  }
  else
  {
    EmptyRgnPublic = (struct HOBJ__ *)*((_QWORD *)a1 + 6);
    v3 = 0;
  }
  v4 = *((_DWORD *)a1 + 16);
  if ( (v4 & 0x80u) != 0 )
  {
    v5 = v8;
    if ( EmptyRgnPublic )
    {
      v6 = 1;
LABEL_13:
      GreCombineRgn(v5, v5, (HRGN)EmptyRgnPublic, v6);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (v4 & 0x40) == 0 )
      goto LABEL_8;
    v5 = v8;
    if ( EmptyRgnPublic != (struct HOBJ__ *)1 )
    {
      v6 = 4;
      goto LABEL_13;
    }
  }
  GreSetRectRgn((struct HOBJ__ *)v5, gZero.LowPart, gZero.HighPart, 0, 0);
LABEL_8:
  ResetOrg((struct HOBJ__ *)v8, a1, 1);
  if ( v3 )
    GreDeleteObject((HBRUSH)EmptyRgnPublic);
}
