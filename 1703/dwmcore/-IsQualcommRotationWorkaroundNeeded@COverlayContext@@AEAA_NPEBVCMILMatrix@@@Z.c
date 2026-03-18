/*
 * XREFs of ?IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z @ 0x1801518A8
 * Callers:
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180150820 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::IsQualcommRotationWorkaroundNeeded(COverlayContext *this, const struct CMILMatrix *a2)
{
  __int64 v2; // rax
  char v3; // r8
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4

  v2 = *((_QWORD *)this + 9);
  v3 = 0;
  if ( *(_DWORD *)(v2 + 248) == 1297040209
    && (*(_DWORD *)(v2 + 252) <= 0x46363432u || *(_QWORD *)(*(_QWORD *)(v2 + 24) + 352LL) <= 0xB001204360026uLL) )
  {
    v4 = *(float *)a2;
    v5 = *(float *)a2 <= 1.0 ? 1.0 - v4 : v4 - 1.0;
    if ( v5 > 0.0000011920929 )
    {
      v6 = v4 <= -1.0 ? -1.0 - v4 : v4 - -1.0;
      if ( v6 > 0.0000011920929 )
        return 1;
    }
    v7 = *((float *)a2 + 5);
    v8 = v7 <= 1.0 ? 1.0 - v7 : v7 - 1.0;
    if ( v8 > 0.0000011920929 )
    {
      v9 = v7 <= -1.0 ? -1.0 - v7 : v7 - -1.0;
      if ( v9 > 0.0000011920929 )
        return 1;
    }
  }
  return v3;
}
