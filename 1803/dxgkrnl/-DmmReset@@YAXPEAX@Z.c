/*
 * XREFs of ?DmmReset@@YAXPEAX@Z @ 0x1C0214F2C
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0157194 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0024E70 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0221F80 (-Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DmmReset(DXGADAPTER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  _QWORD *v6; // r8
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 307) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v7, v4);
  NextTarget = 0LL;
  v6 = (_QWORD *)(*(_QWORD *)(v4 + 80) + 24LL);
  if ( (_QWORD *)*v6 != v6 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v6 - 8LL);
  for ( ;
        NextTarget;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*(DMMVIDEOPRESENTTARGETSET **)(v4 + 80), NextTarget) )
  {
    DMMVIDEOPRESENTTARGET::Reset(NextTarget);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 40));
}
