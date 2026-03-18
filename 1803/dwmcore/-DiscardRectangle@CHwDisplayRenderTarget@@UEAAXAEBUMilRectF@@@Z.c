/*
 * XREFs of ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1800461A0
 * Callers:
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@WNI@EAAXAEBUMilRectF@@@Z @ 0x1800DE240 (-DiscardRectangle@CHwDisplayRenderTarget@@WNI@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800435C8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x180046520 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqdddd @ 0x1801E16DC (McTemplateU0xqdddd.c)
 */

void __fastcall CHwDisplayRenderTarget::DiscardRectangle(CHwDisplayRenderTarget *this, const struct MilRectF *a2)
{
  __int64 (__fastcall *v4)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm0_4
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r9d
  struct CD3DDeviceLevel1 *v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+54h] [rbp-Ch]

  v4 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 256LL);
  if ( v4 == CHwDisplayRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v17);
  else
    DeviceNoRef = v4(this, &v17);
  if ( DeviceNoRef >= 0 )
  {
    v6 = CFloatFPU::CeilingSat(*(float *)a2 - 0.5);
    v7 = *((float *)a2 + 1) - 0.5;
    v18 = v6;
    v8 = CFloatFPU::CeilingSat(v7);
    v9 = *((float *)a2 + 2) - 0.5;
    v19 = v8;
    v10 = CFloatFPU::CeilingSat(v9);
    v11 = *((float *)a2 + 3) - 0.5;
    v20 = v10;
    if ( v11 < -2147483600.0 )
    {
      v21 = 0x80000000;
    }
    else if ( v11 >= 2147483600.0 )
    {
      v21 = 0x7FFFFFFF;
    }
    else
    {
      v21 = (int)ceilf_0(v11);
    }
    v12 = *((_QWORD *)this + 25);
    v13 = *(_QWORD *)(v12 + 192);
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)v17 + 82) + 1064LL))(
        *((_QWORD *)v17 + 82),
        *(_QWORD *)(v12 + 192),
        &v18,
        1LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xqdddd(v15, v14, v13, v16, v18, v19, v20, v21);
    }
  }
}
