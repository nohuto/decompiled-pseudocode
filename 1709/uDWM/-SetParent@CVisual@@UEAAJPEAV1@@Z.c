/*
 * XREFs of ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x180018DD0
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180020EF0 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180018C30 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetParent(CVisual *this, struct CVisual *a2)
{
  struct CVisual *v2; // rbx
  void (__fastcall *v4)(CVisual *); // rax

  *((_QWORD *)this + 3) = a2;
  v2 = a2;
  if ( !a2 )
    *((_BYTE *)this + 84) &= ~4u;
  if ( *((_DWORD *)this + 20) && a2 )
  {
    do
    {
      if ( (*((_BYTE *)v2 + 80) & 1) != 0 )
        break;
      v4 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v2 + 32LL);
      if ( v4 == CVisual::SetDirtyChildren )
        CVisual::SetDirtyChildren(v2);
      else
        v4(v2);
      v2 = (struct CVisual *)*((_QWORD *)v2 + 3);
    }
    while ( v2 );
  }
  return 0LL;
}
