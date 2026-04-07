/*
 * XREFs of ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180022050
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003C5B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180026750 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnGlobalTimeUpdated(CTopLevelWindow3D *this)
{
  int v1; // eax
  __int64 v2; // rbx
  void (__fastcall *v4)(CVisual *__hidden); // rax

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x1000) == 0 )
  {
    v2 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 20) = v1 | 0x1000;
    while ( v2 && (*(_BYTE *)(v2 + 80) & 1) == 0 )
    {
      v4 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v2 + 32LL);
      if ( v4 == CVisual::SetDirtyChildren )
        CVisual::SetDirtyChildren((CVisual *)v2);
      else
        v4((CVisual *)v2);
      v2 = *(_QWORD *)(v2 + 24);
    }
  }
  return 0LL;
}
