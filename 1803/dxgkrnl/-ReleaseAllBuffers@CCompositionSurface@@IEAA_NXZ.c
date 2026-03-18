/*
 * XREFs of ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0011D0C
 * Callers:
 *     ?UnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x1C0011E80 (-UnBind@CCompositionSurface@@UEAAJ_N@Z.c)
 *     ?Delete@CCompositionSurface@@MEAAJPEAX@Z @ 0x1C0011ED0 (-Delete@CCompositionSurface@@MEAAJPEAX@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012064 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::ReleaseAllBuffers(CCompositionSurface *this)
{
  char v1; // si
  CCompositionSurface **v3; // rbx
  CCompositionSurface **v4; // rax
  CCompositionSurface *v5; // rcx
  CCompositionSurface *v6; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 22) )
  {
    v3 = (CCompositionSurface **)((char *)this + 72);
    v4 = (CCompositionSurface **)*((_QWORD *)this + 9);
    if ( v4[1] != (CCompositionSurface *)((char *)this + 72) || (v5 = *v4, *((CCompositionSurface ***)*v4 + 1) != v4) )
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
    *((_DWORD *)this + 22) = 0;
  }
  return v1;
}
