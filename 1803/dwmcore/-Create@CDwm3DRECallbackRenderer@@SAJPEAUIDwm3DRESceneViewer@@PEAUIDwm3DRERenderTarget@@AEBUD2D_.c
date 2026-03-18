/*
 * XREFs of ?Create@CDwm3DRECallbackRenderer@@SAJPEAUIDwm3DRESceneViewer@@PEAUIDwm3DRERenderTarget@@AEBUD2D_MATRIX_4X4_F@@_NPEAPEAV1@@Z @ 0x18017B9AC
 * Callers:
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CDwm3DRECallbackRenderer@@AEAA@PEAUIDwm3DRESceneViewer@@PEAUIDwm3DRERenderTarget@@AEBUD2D_MATRIX_4X4_F@@_N@Z @ 0x18017B87C (--0CDwm3DRECallbackRenderer@@AEAA@PEAUIDwm3DRESceneViewer@@PEAUIDwm3DRERenderTarget@@AEBUD2D_MAT.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDwm3DRECallbackRenderer@@@Z @ 0x1801C6B04 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDwm3DRECallbackRenderer@@@Z.c)
 */

__int64 __fastcall CDwm3DRECallbackRenderer::Create(
        struct IDwm3DRESceneViewer *a1,
        struct IDwm3DRERenderTarget *a2,
        const struct D2D_MATRIX_4X4_F *a3,
        __int64 a4,
        struct CDwm3DRECallbackRenderer **a5)
{
  struct CObjectCache *ObjectCache; // r9
  unsigned int v9; // ebx
  CDwm3DRECallbackRenderer *v10; // rax
  int v11; // ecx
  volatile signed __int32 *v12; // rax

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v9 = 0;
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (CDwm3DRECallbackRenderer *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = (CDwm3DRECallbackRenderer *)HeapAlloc(WPF::g_processHeap, 0, 0x70uLL)) != 0LL )
    v12 = (volatile signed __int32 *)CDwm3DRECallbackRenderer::CDwm3DRECallbackRenderer(v10, a1, a2, a3);
  else
    v12 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 4);
    *a5 = (struct CDwm3DRECallbackRenderer *)v12;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu);
  }
  return v9;
}
