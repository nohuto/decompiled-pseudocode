/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0022FB0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00593E0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C00598A0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0078460 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C009FAA0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     GreCreateRectRgn @ 0x1C00FC750 (GreCreateRectRgn.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct OBJECT *a2,
        char a3,
        char a4,
        unsigned __int8 a5)
{
  struct HOBJ__ *result; // rax
  unsigned int v9; // edx

  result = 0LL;
  if ( !*(_QWORD *)this )
  {
    v9 = (a3 != 0 ? 3 : 1) | 8;
    if ( !a4 )
      v9 = a3 != 0 ? 3 : 1;
    result = HmgInsertObjectInternal(a2, v9, a5);
    if ( result )
      *(_QWORD *)this = a2;
  }
  return result;
}
