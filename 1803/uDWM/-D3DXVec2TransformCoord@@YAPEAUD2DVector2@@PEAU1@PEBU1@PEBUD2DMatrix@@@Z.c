/*
 * XREFs of ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180004364
 * Callers:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180003F4C (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18001D5C0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x1800269A0 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     WithinEpsilon @ 0x1800043EC (WithinEpsilon.c)
 */

struct D2DVector2 *__fastcall D3DXVec2TransformCoord(
        struct D2DVector2 *a1,
        const struct D2DVector2 *a2,
        const struct D2DMatrix *a3)
{
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  float *v5; // rcx
  float v6; // xmm4_4
  float v8; // xmm0_4

  v3 = (__m128)*(unsigned int *)a2;
  v4 = (__m128)*((unsigned int *)a2 + 1);
  v4.m128_f32[0] = (float)((float)(v4.m128_f32[0] * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                 + *((float *)a3 + 12);
  v3.m128_f32[0] = (float)((float)(v3.m128_f32[0] * *((float *)a3 + 1))
                         + (float)(*((float *)a2 + 1) * *((float *)a3 + 5)))
                 + *((float *)a3 + 13);
  *(_QWORD *)a1 = _mm_unpacklo_ps(v4, v3).m128_u64[0];
  if ( !(unsigned int)WithinEpsilon() )
  {
    v8 = (float)(1.0 / v6) * *v5;
    v5[1] = (float)(1.0 / v6) * v5[1];
    *v5 = v8;
  }
  return (struct D2DVector2 *)v5;
}
