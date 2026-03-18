/*
 * XREFs of ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0038AFC
 * Callers:
 *     NtBindCompositionSurface @ 0x1C0020870 (NtBindCompositionSurface.c)
 *     ?Delete@CCompositionSurface@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0038C90 (-Delete@CCompositionSurface@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C0038F70 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0038FEC (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::ReleaseAllBuffers(CCompositionSurface *this)
{
  char v1; // si
  CCompositionSurface **v3; // rbx
  CCompositionSurface **v4; // rax
  CCompositionSurface *v5; // rcx
  CCompositionSurface *v6; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v3 = (CCompositionSurface **)((char *)this + 64);
    v4 = (CCompositionSurface **)*((_QWORD *)this + 8);
    if ( v4[1] != (CCompositionSurface *)((char *)this + 64) || (v5 = *v4, *((CCompositionSurface ***)*v4 + 1) != v4) )
      __fastfail(3u);
    *v3 = v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 != v3 )
    {
      v1 = 1;
      do
      {
        if ( v4 != (CCompositionSurface **)24 )
          (*(void (__fastcall **)(CCompositionSurface **, __int64))*(v4 - 3))(v4 - 3, 1LL);
        v4 = (CCompositionSurface **)*v3;
        if ( *((CCompositionSurface ***)*v3 + 1) != v3 || (v6 = *v4, *((CCompositionSurface ***)*v4 + 1) != v4) )
          __fastfail(3u);
        *v3 = v6;
        *((_QWORD *)v6 + 1) = v3;
      }
      while ( v4 != v3 );
    }
    *((_DWORD *)this + 20) = 0;
  }
  return v1;
}
