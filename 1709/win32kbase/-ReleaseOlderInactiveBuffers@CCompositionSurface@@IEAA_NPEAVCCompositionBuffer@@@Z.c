/*
 * XREFs of ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1C0038A68
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0038DA4 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::ReleaseOlderInactiveBuffers(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2)
{
  CCompositionSurface *v2; // rbx
  CCompositionSurface *v3; // rbp
  char v4; // di
  char *v7; // rcx
  __int64 v8; // rdx
  char **v9; // r8

  v2 = (CCompositionSurface *)*((_QWORD *)a2 + 3);
  v3 = (CCompositionSurface *)((char *)this + 64);
  v4 = 0;
  if ( v2 != (CCompositionSurface *)((char *)this + 64) )
  {
    v4 = 1;
    do
    {
      v7 = (char *)v2 - 24;
      v2 = *(CCompositionSurface **)v2;
      v8 = *((_QWORD *)v7 + 3);
      if ( *(char **)(v8 + 8) != v7 + 24 || (v9 = (char **)*((_QWORD *)v7 + 4), *v9 != v7 + 24) )
        __fastfail(3u);
      *v9 = (char *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      --*((_DWORD *)this + 20);
      if ( v7 )
        (**(void (__fastcall ***)(char *, __int64))v7)(v7, 1LL);
    }
    while ( v2 != v3 );
  }
  return v4;
}
