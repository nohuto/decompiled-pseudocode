/*
 * XREFs of ?UseRenderTargetForCapture@CaptureBitsResponse@@IEBA_NXZ @ 0x18007FC54
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18007FA74 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CaptureBitsResponse::UseRenderTargetForCapture(CaptureBitsResponse *this)
{
  __int64 v1; // rdx
  char v2; // bl
  float v3; // xmm2_4

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    if ( *((_DWORD *)this + 27) )
      return 1;
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((*(float (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 144LL))(*((_QWORD *)this + 5))
                                                   - 1.0)) & _xmm);
    if ( v3 < 0.0000011920929 )
      return 1;
  }
  return v2;
}
