/*
 * XREFs of ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C024A588
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

int __fastcall bCopySurface(struct SURFMEM *a1, struct _SURFOBJ *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  LONG cx; // edx
  ULONG iBitmapFormat; // ecx
  int result; // eax
  SURFOBJ *v9; // rcx
  __int64 v10; // rax
  _QWORD v11[4]; // [rsp+60h] [rbp+7h] BYREF
  RECTL prclDest; // [rsp+80h] [rbp+27h] BYREF

  v4 = SURFOBJ_TO_SURFACE(a2);
  memset(v11, 0, sizeof(v11));
  v5 = 0;
  cx = a2->sizlBitmap.cx;
  LODWORD(v11[1]) = a2->sizlBitmap.cy;
  iBitmapFormat = a2->iBitmapFormat;
  HIDWORD(v11[0]) = cx;
  v11[2] = 0LL;
  LODWORD(v11[3]) = *(_DWORD *)(v4 + 112) & 0x40000;
  if ( iBitmapFormat == 7 )
  {
    LODWORD(v11[0]) = 2;
  }
  else if ( iBitmapFormat == 8 )
  {
    LODWORD(v11[0]) = 3;
  }
  else
  {
    LODWORD(v11[0]) = iBitmapFormat;
  }
  result = SURFMEM::bCreateDIB(a1, (struct _DEVBITMAPINFO *)v11, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( result )
  {
    v9 = 0LL;
    prclDest.right = a2->sizlBitmap.cx;
    prclDest.bottom = a2->sizlBitmap.cy;
    v10 = *(_QWORD *)a1;
    *(_QWORD *)&prclDest.left = 0LL;
    if ( v10 )
      v9 = (SURFOBJ *)(v10 + 24);
    LOBYTE(v5) = EngCopyBits(v9, a2, 0LL, xloIdent, &prclDest, (POINTL *)&prclDest);
    return v5;
  }
  return result;
}
