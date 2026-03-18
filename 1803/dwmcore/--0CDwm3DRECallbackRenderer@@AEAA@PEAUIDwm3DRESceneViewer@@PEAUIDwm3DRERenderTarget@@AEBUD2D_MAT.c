/*
 * XREFs of ??0CDwm3DRECallbackRenderer@@AEAA@PEAUIDwm3DRESceneViewer@@PEAUIDwm3DRERenderTarget@@AEBUD2D_MATRIX_4X4_F@@_N@Z @ 0x18017B87C
 * Callers:
 *     ?Create@CDwm3DRECallbackRenderer@@SAJPEAUIDwm3DRESceneViewer@@PEAUIDwm3DRERenderTarget@@AEBUD2D_MATRIX_4X4_F@@_NPEAPEAV1@@Z @ 0x18017B9AC (-Create@CDwm3DRECallbackRenderer@@SAJPEAUIDwm3DRESceneViewer@@PEAUIDwm3DRERenderTarget@@AEBUD2D_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CDwm3DRECallbackRenderer *__fastcall CDwm3DRECallbackRenderer::CDwm3DRECallbackRenderer(
        CDwm3DRECallbackRenderer *this,
        struct IDwm3DRESceneViewer *a2,
        struct IDwm3DRERenderTarget *a3,
        const struct D2D_MATRIX_4X4_F *a4)
{
  CDwm3DRECallbackRenderer *result; // rax
  __int128 v8; // xmm1

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CDwm3DRECallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CDwm3DRECallbackRenderer::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDwm3DRESceneViewer *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 4) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDwm3DRERenderTarget *))(*(_QWORD *)a3 + 8LL))(a3);
  result = this;
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)&a4->_11;
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)&a4->m[1][0];
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)&a4->m[2][0];
  v8 = *(_OWORD *)&a4->m[3][0];
  *((_BYTE *)this + 104) = 0;
  *(_OWORD *)((char *)this + 88) = v8;
  return result;
}
