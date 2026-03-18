/*
 * XREFs of ?FindSceneViewer@Dwm3DRECompositorThunk@@UEAAJPEAXPEAPEAUIDwm3DRESceneViewer@@@Z @ 0x18014A220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Dwm3DRECompositorThunk::FindSceneViewer(
        Dwm3DRECompositorThunk *this,
        void *a2,
        struct IDwm3DRESceneViewer **a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, void *, struct IDwm3DRESceneViewer **))(*(_QWORD *)v3 + 24LL))(
             v3,
             a2,
             a3);
  else
    return 2147549183LL;
}
