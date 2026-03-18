/*
 * XREFs of ?UnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x1C0011E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0011D0C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011E5C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::UnBind(CCompositionSurface *this, char a2)
{
  CCompositionSurface *v4; // rcx
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = (CCompositionSurface *)((char *)this - 8);
  if ( a2 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(v4);
    if ( ActiveBuffer )
      *((_BYTE *)ActiveBuffer + 40) = 0;
  }
  else
  {
    CCompositionSurface::ReleaseAllBuffers(v4);
  }
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    LOBYTE(v6) = a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v6);
  }
  return 0LL;
}
