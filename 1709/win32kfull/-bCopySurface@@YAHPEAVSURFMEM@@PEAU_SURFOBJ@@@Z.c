/*
 * XREFs of ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C024BE90
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

int __fastcall bCopySurface(struct SURFMEM *a1, struct _SURFOBJ *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  LONG cx; // edx
  ULONG iBitmapFormat; // ecx
  int result; // eax
  __int64 v9; // rax
  _QWORD v10[4]; // [rsp+60h] [rbp+7h] BYREF
  RECTL prclDest; // [rsp+80h] [rbp+27h] BYREF

  v4 = SURFOBJ_TO_SURFACE(a2);
  memset(v10, 0, sizeof(v10));
  v5 = 0;
  cx = a2->sizlBitmap.cx;
  LODWORD(v10[1]) = a2->sizlBitmap.cy;
  iBitmapFormat = a2->iBitmapFormat;
  HIDWORD(v10[0]) = cx;
  v10[2] = 0LL;
  LODWORD(v10[3]) = *(_DWORD *)(v4 + 112) & 0x40000;
  if ( iBitmapFormat == 7 )
  {
    LODWORD(v10[0]) = 2;
  }
  else if ( iBitmapFormat == 8 )
  {
    LODWORD(v10[0]) = 3;
  }
  else
  {
    LODWORD(v10[0]) = iBitmapFormat;
  }
  result = SURFMEM::bCreateDIB(a1, (struct _DEVBITMAPINFO *)v10, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( result )
  {
    prclDest.right = a2->sizlBitmap.cx;
    prclDest.bottom = a2->sizlBitmap.cy;
    v9 = *(_QWORD *)a1;
    *(_QWORD *)&prclDest.left = 0LL;
    LOBYTE(v5) = EngCopyBits(
                   (SURFOBJ *)((v9 + 24) & -(__int64)(v9 != 0)),
                   a2,
                   0LL,
                   xloIdent,
                   &prclDest,
                   (POINTL *)&prclDest);
    return v5;
  }
  return result;
}
