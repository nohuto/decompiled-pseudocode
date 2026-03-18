/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C00117A4
 * Callers:
 *     NtBindCompositionSurface @ 0x1C000E450 (NtBindCompositionSurface.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C001158C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011670 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 */

__int64 __fastcall CCompositionSurface::Bind(CCompositionSurface *this, struct CCompositionBuffer *a2)
{
  unsigned int v4; // edx
  char v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx

  if ( !CCompositionSurface::GetActiveBuffer(this) )
  {
    if ( !v5 )
      CCompositionSurface::ReleaseAllBuffers(this);
    v6 = (_QWORD *)((char *)this + 64);
    v7 = *((_QWORD *)this + 8);
    v8 = (_QWORD *)((char *)a2 + 24);
    if ( *(CCompositionSurface **)(v7 + 8) != (CCompositionSurface *)((char *)this + 64) )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)a2 + 4) = v6;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = v8;
    ++*((_QWORD *)this + 6);
    ++*((_DWORD *)this + 20);
    v9 = *((_QWORD *)this + 6);
    v4 = 0;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this - 1);
    *((_QWORD *)a2 + 2) = v9;
    *((_BYTE *)a2 + 40) = 1;
  }
  return v4;
}
