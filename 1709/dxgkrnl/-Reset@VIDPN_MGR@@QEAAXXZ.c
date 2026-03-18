/*
 * XREFs of ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01EF670
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01764B0 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0006D08 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ @ 0x1C001D9F8 (-GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C001E0A0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C00B0810 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00B0874 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall VIDPN_MGR::Reset(VIDPN_MGR *this)
{
  _QWORD *v2; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  struct DMMVIDEOPRESENTTARGETSET *ContainingVideoPresentTargetSet; // rax
  struct DXGADAPTER *ContainingAdapter; // rax

  v2 = (_QWORD *)(*((_QWORD *)this + 10) + 24LL);
  if ( (_QWORD *)*v2 != v2 )
  {
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v2 - 8LL);
    if ( *v2 != 8LL )
    {
      do
      {
        DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(NextTarget);
        ContainingVideoPresentTargetSet = DMMVIDEOPRESENTTARGET::GetContainingVideoPresentTargetSet(NextTarget);
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*((VIDPN_MGR **)ContainingVideoPresentTargetSet + 11));
        if ( *((_DWORD *)ContainingAdapter + 69) != 4098 || (int)DXGADAPTER::GetDriverVersion(ContainingAdapter) >= 1300 )
          DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(NextTarget, 0);
        *(_DWORD *)(*((_QWORD *)NextTarget + 64) + 24LL) = 13;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*((DMMVIDEOPRESENTTARGETSET **)this + 10), NextTarget);
      }
      while ( NextTarget );
    }
  }
}
