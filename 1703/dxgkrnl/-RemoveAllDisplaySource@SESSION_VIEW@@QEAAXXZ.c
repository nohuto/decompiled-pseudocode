/*
 * XREFs of ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C00F8D34
 * Callers:
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00FAAB0 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C00FAB1C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_VIEW::RemoveAllDisplaySource(SESSION_VIEW *this)
{
  SESSION_VIEW *v1; // rdx
  char *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // r10
  _QWORD *v5; // r9

  v1 = (SESSION_VIEW *)*((_QWORD *)this + 6);
  while ( v1 != (SESSION_VIEW *)((char *)this + 48) )
  {
    v2 = (char *)v1 - 56;
    v1 = *(SESSION_VIEW **)v1;
    *((_QWORD *)v2 + 6) = 0LL;
    v3 = v2 + 56;
    v4 = *v3;
    v5 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*((_DWORD *)this + 10);
  }
}
