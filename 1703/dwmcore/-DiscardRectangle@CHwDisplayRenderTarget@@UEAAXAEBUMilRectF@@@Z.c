/*
 * XREFs of ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18003A910
 * Callers:
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z @ 0x1800D63A0 (-DiscardRectangle@CHwDisplayRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003A080 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x180077914 (-DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::DiscardRectangle(CHwDisplayRenderTarget *this, const struct MilRectF *a2)
{
  __int64 (__fastcall *v4)(CHwDisplayRenderTarget *, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  unsigned int v6; // r9d
  __int64 v7; // rdx
  float v8; // xmm0_4
  float v9; // eax
  double v10; // xmm0_8
  int v11; // eax
  double v12; // xmm0_8
  int v13; // eax
  float v14; // [rsp+20h] [rbp-38h]
  struct CD3DDeviceLevel1 *v15; // [rsp+28h] [rbp-30h] BYREF
  struct tagRECT v16; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 208LL);
  if ( v4 == CHwDisplayRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v15);
  else
    DeviceNoRef = v4(this, &v15);
  if ( DeviceNoRef >= 0 )
  {
    v7 = *((_QWORD *)this + 21);
    v8 = *(float *)a2 + 6291456.25;
    v9 = v8;
    v10 = *((float *)a2 + 1);
    v16.left = (int)(LODWORD(v9) << 10) >> 11;
    *(float *)&v10 = v10 + 6291456.25;
    v11 = LODWORD(v10);
    v12 = *((float *)a2 + 2);
    v16.top = v11 << 10 >> 11;
    *(float *)&v12 = v12 + 6291456.25;
    v13 = LODWORD(v12);
    LODWORD(v12) = *((_DWORD *)a2 + 3);
    v16.right = v13 << 10 >> 11;
    v14 = *(float *)&v12 + 6291456.25;
    v16.bottom = (int)(LODWORD(v14) << 10) >> 11;
    CD3DDeviceLevel1::DiscardView(v15, *(struct ID3D11View **)(v7 + 200), &v16, v6);
  }
}
