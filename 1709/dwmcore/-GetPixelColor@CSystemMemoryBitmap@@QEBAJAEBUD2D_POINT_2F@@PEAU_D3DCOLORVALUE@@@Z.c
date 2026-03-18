/*
 * XREFs of ?GetPixelColor@CSystemMemoryBitmap@@QEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801C3FB8
 * Callers:
 *     ?GetPixelColor@CSectionBitmapRealization@@UEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801D0F00 (-GetPixelColor@CSectionBitmapRealization@@UEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::GetPixelColor(
        CSystemMemoryBitmap *this,
        const struct D2D_POINT_2F *a2,
        struct _D3DCOLORVALUE *a3)
{
  unsigned int v3; // ebx
  char *v6; // rcx
  void (__fastcall *v7)(char *, float *, unsigned int *); // rax
  float v8; // xmm0_4
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  unsigned __int8 *v11; // rdx
  float v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 29) )
  {
    v6 = (char *)this + 224;
    v7 = *(void (__fastcall **)(char *, float *, unsigned int *))(*(_QWORD *)v6 + 32LL);
    v8 = a2->x + 6291456.25;
    v13 = v8;
    v9 = (int)(LODWORD(v8) << 10) >> 11;
    v13 = a2->y + 6291456.25;
    v10 = (int)(LODWORD(v13) << 10) >> 11;
    v7(v6, &v13, &v14);
    if ( v9 >= LODWORD(v13) || v10 >= v14 )
    {
      return (unsigned int)-2147024809;
    }
    else if ( (unsigned int)(*((_DWORD *)this + 46) - 87) <= 1 )
    {
      v11 = (unsigned __int8 *)(*((_QWORD *)this + 29) + 4 * v9 + (unsigned __int64)(v10 * *((_DWORD *)this + 60)));
      a3->b = GammaLUT_sRGB_to_scRGB[*v11] / 255.0;
      a3->g = GammaLUT_sRGB_to_scRGB[v11[1]] / 255.0;
      a3->r = GammaLUT_sRGB_to_scRGB[v11[2]] / 255.0;
      if ( *((_DWORD *)this + 46) != 87 || *((_DWORD *)this + 47) == 3 )
        a3->a = 1.0;
      else
        a3->a = (float)v11[3] / 255.0;
    }
    else
    {
      return (unsigned int)-2003292288;
    }
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v3;
}
