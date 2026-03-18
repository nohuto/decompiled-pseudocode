/*
 * XREFs of ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00A2614
 * Callers:
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00DE82C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01D0F50 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C00029F0 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C00AA42C (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::RemoveAllSourceViewFromSession(DXGSESSIONDATA *this)
{
  char *v1; // rdi
  char *v2; // rbx
  SESSION_VIEW *v3; // rsi
  _QWORD *v4; // r11
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v1 = (char *)this + 18560;
  v2 = (char *)*((_QWORD *)this + 2320);
  while ( v2 != v1 )
  {
    v3 = (SESSION_VIEW *)(v2 - 8);
    v2 = *(char **)v2;
    SESSION_VIEW::RemoveAllDisplaySource(v3);
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( v3 )
      SESSION_VIEW::`scalar deleting destructor'(v3);
  }
}
