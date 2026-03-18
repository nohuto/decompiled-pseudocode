/*
 * XREFs of ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01D3F98
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172B78 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C000A9A4 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ @ 0x1C0021068 (-GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0021310 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00A44B0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C00A4518 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

void __fastcall VIDPN_MGR::Reset(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DMMVIDEOPRESENTTARGETSET *ContainingVideoPresentTargetSet; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v15; // r8
  __int64 v16; // r9

  v5 = (_QWORD *)(*((_QWORD *)this + 10) + 24LL);
  if ( (_QWORD *)*v5 != v5 )
  {
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v5 - 8LL);
    if ( *v5 != 8LL )
    {
      do
      {
        DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(NextTarget, a2, a3, a4);
        ContainingVideoPresentTargetSet = DMMVIDEOPRESENTTARGET::GetContainingVideoPresentTargetSet(
                                            NextTarget,
                                            v7,
                                            v8,
                                            v9);
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(
                              *((VIDPN_MGR **)ContainingVideoPresentTargetSet + 11),
                              v11,
                              v12,
                              v13);
        if ( *((_DWORD *)ContainingAdapter + 69) != 4098 || (int)DXGADAPTER::GetDriverVersion(ContainingAdapter) >= 1300 )
          DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(NextTarget, 0LL, v15, v16);
        *(_DWORD *)(*((_QWORD *)NextTarget + 64) + 24LL) = 13;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                       *((DMMVIDEOPRESENTTARGETSET **)this + 10),
                       NextTarget,
                       v15,
                       v16);
      }
      while ( NextTarget );
    }
  }
}
