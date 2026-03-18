/*
 * XREFs of ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C003F348
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C003F39C (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 */

struct SURFACE *__fastcall SURFACE::Allocate(size_t a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  struct SURFACE *result; // rax
  struct SURFACE *v4; // rbx

  v2 = a2;
  LOWORD(v2) = ~a2;
  result = (struct SURFACE *)AllocateObject(a1, 5u, (v2 >> 2) & 1);
  v4 = result;
  if ( result )
  {
    if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(0LL, result, (char *)result + 616) )
    {
      FreeObject((__int64)v4, 5);
      return 0LL;
    }
    return v4;
  }
  return result;
}
