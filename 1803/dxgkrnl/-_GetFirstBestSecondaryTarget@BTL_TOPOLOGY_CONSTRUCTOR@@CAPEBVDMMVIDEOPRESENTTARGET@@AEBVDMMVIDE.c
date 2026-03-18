/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C022939C
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0227C18 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C0229630 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  const struct DXGADAPTER *v5; // rbp
  const struct DMMVIDEOPRESENTTARGETSET *v6; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  const struct DMMVIDEOPRESENTTARGET *v8; // rdi

  v1 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v1 + 8);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
    v3 = *(_QWORD *)(v1 + 8);
  }
  v5 = *(const struct DXGADAPTER **)(v3 + 16);
  v6 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  NextTarget = 0LL;
  v8 = 0LL;
  if ( v6 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
    NextTarget = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v6 - 8);
  for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, NextTarget) )
  {
    if ( !*((_DWORD *)NextTarget + 22) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v5, NextTarget, v8) )
      v8 = NextTarget;
  }
  return v8;
}
