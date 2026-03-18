/*
 * XREFs of ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0275B30
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0083290 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C027446C (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C02745A0 (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C02760AC (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0276B00 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall PanTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        struct _CLIPOBJ *a4,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        MIX mix)
{
  RECTL *v11; // rdi
  RECTL *p_rclBkGround; // rax
  struct _RECTL *v15; // rdx
  struct _PANDEV *dhpdev; // r15
  unsigned int v17; // ebx
  BOOL v18; // esi
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pco; // [rsp+58h] [rbp-A8h] BYREF
  SURFOBJ *pso; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlOrg; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *pboOpaque; // [rsp+70h] [rbp-90h]
  struct _RECTL v25; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[112]; // [rsp+90h] [rbp-70h] BYREF

  v11 = prclOpaque;
  pboOpaque = a8;
  pptlOrg = a9;
  p_rclBkGround = &pstro->rclBkGround;
  pco = a4;
  v15 = prclOpaque;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  if ( !prclOpaque )
    v15 = p_rclBkGround;
  pso = a1;
  v25 = *v15;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v26, dhpdev, &pso, &v25, &v20, a4);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v17 = 1;
  }
  else
  {
    v18 = EngTextOut(pso, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    if ( v20 == 1 )
    {
      if ( !prclOpaque )
        v11 = &pstro->rclBkGround;
      vPanningUpdate(dhpdev, v11, pco);
    }
    v17 = v18;
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v26);
  return v17;
}
