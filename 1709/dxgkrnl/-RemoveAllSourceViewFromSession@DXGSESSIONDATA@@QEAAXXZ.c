/*
 * XREFs of ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00B275C
 * Callers:
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00F8ABC (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00FAB8C (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C000833C (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C00B50F4 (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::RemoveAllSourceViewFromSession(DXGSESSIONDATA *this)
{
  char *v1; // rdi
  char *v2; // rbx
  SESSION_VIEW *v3; // r11
  SESSION_VIEW *v4; // r11
  SESSION_VIEW **v5; // rdx
  SESSION_VIEW **v6; // rcx

  v1 = (char *)this + 18560;
  v2 = (char *)*((_QWORD *)this + 2320);
  while ( v2 != v1 )
  {
    v3 = (SESSION_VIEW *)(v2 - 8);
    v2 = *(char **)v2;
    SESSION_VIEW::RemoveAllDisplaySource(v3);
    v5 = (SESSION_VIEW **)*((_QWORD *)v4 + 1);
    if ( v5[1] != (SESSION_VIEW *)((char *)v4 + 8)
      || (v6 = (SESSION_VIEW **)*((_QWORD *)v4 + 2), *v6 != (SESSION_VIEW *)((char *)v4 + 8)) )
    {
      __fastfail(3u);
    }
    *v6 = (SESSION_VIEW *)v5;
    v5[1] = (SESSION_VIEW *)v6;
    if ( v4 )
      SESSION_VIEW::`scalar deleting destructor'(v4);
  }
}
