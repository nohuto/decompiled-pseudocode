/*
 * XREFs of ?CreateRenderTarget@Dwm3DRECompositorThunk@@UEAAJPEAUID3D11Texture2D@@_NPEAPEAUIDwm3DRERenderTarget@@@Z @ 0x18014A140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Dwm3DRECompositorThunk::CreateRenderTarget(
        Dwm3DRECompositorThunk *this,
        struct ID3D11Texture2D *a2,
        __int64 a3,
        struct IDwm3DRERenderTarget **a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct ID3D11Texture2D *, __int64, struct IDwm3DRERenderTarget **))(*(_QWORD *)v4 + 32LL))(
             v4,
             a2,
             a3,
             a4);
  else
    return 2147549183LL;
}
