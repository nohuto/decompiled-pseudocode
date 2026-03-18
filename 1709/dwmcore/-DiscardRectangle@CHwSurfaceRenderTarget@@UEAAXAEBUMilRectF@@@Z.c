/*
 * XREFs of ?DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18011AE94
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1801AD200 (-DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180045A04 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x18011B470 (-DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z.c)
 */

void __fastcall CHwSurfaceRenderTarget::DiscardRectangle(CHwSurfaceRenderTarget *this, const struct MilRectF *a2)
{
  LONG v4; // eax
  float v5; // xmm0_4
  LONG v6; // eax
  float v7; // xmm0_4
  LONG v8; // eax
  float v9; // xmm0_4
  LONG v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // r9d
  CD3DDeviceLevel1 *v13; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v14; // [rsp+28h] [rbp-20h] BYREF

  if ( (*(int (__fastcall **)(CHwSurfaceRenderTarget *, CD3DDeviceLevel1 **))(*(_QWORD *)this + 216LL))(this, &v13) >= 0 )
  {
    v4 = CFloatFPU::CeilingSat(*(float *)a2 - 0.5);
    v5 = *((float *)a2 + 1) - 0.5;
    v14.left = v4;
    v6 = CFloatFPU::CeilingSat(v5);
    v7 = *((float *)a2 + 2) - 0.5;
    v14.top = v6;
    v8 = CFloatFPU::CeilingSat(v7);
    v9 = *((float *)a2 + 3) - 0.5;
    v14.right = v8;
    v10 = CFloatFPU::CeilingSat(v9);
    v11 = *((_QWORD *)this + 23);
    v14.bottom = v10;
    CD3DDeviceLevel1::DiscardView(v13, *(struct ID3D11View **)(v11 + 192), &v14, v12);
  }
}
