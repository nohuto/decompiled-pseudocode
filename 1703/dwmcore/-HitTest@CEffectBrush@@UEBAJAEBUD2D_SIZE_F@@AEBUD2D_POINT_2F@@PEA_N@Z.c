/*
 * XREFs of ?HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801621A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x18001EB94 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::HitTest(
        CEffectBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  D2D_RECT_F v10; // [rsp+20h] [rbp-28h] BYREF

  *a4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CEffectBrush *))(*(_QWORD *)this + 176LL))(this) )
  {
    width = a2->width;
    v10.left = 0.0;
    v10.top = 0.0;
    height = a2->height;
    v10.right = width;
    v10.bottom = height;
    *a4 = Contains(&v10, a3);
  }
  return 0LL;
}
