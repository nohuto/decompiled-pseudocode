/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0053E50
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C001E430 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C006EFA0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GreCreateRectRgn @ 0x1C006F220 (GreCreateRectRgn.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00A9750 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct OBJECT *a2,
        unsigned __int8 a3,
        char a4,
        char a5)
{
  struct HOBJ__ *result; // rax
  __int16 v8; // dx

  result = 0LL;
  if ( !*(_QWORD *)this )
  {
    v8 = (2 * a3) | 8;
    if ( !a4 )
      v8 = 2 * a3;
    result = HmgInsertObjectInternal(a2, v8 | 1u, a5);
    if ( result )
      *(_QWORD *)this = a2;
  }
  return result;
}
