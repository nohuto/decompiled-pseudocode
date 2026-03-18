/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0038DA4
 * Callers:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00386F8 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1C0038A68 (-ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0038C24 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::NotifyTokenInFrame(
        CCompositionSurface *this,
        const struct CToken *a2,
        bool *a3)
{
  int Buffer; // ebx
  __int64 v6; // r11
  struct CCompositionBuffer *v7; // rsi
  struct CCompositionBuffer *v9; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0;
  Buffer = CCompositionSurface::FindBuffer(this, *((_QWORD *)a2 + 5), &v9);
  if ( Buffer >= 0 )
  {
    v7 = v9;
    Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64, bool *))(*(_QWORD *)v9 + 112LL))(
               v9,
               v6,
               a3);
    if ( Buffer >= 0 && *a3 )
      CCompositionSurface::ReleaseOlderInactiveBuffers(this, v7);
  }
  return (unsigned int)Buffer;
}
