/*
 * XREFs of ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0229440
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0227C18 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C0229630 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGET *a1,
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  const struct DXGADAPTER *v7; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  const struct DMMVIDEOPRESENTTARGET *v10; // rbx
  const struct DMMVIDEOPRESENTTARGET *v11; // rbx
  const struct DMMVIDEOPRESENTTARGETSET *v12; // rcx
  const struct DMMVIDEOPRESENTTARGET *v13; // rdi

  v2 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v2 + 8);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
    v5 = *(_QWORD *)(v2 + 8);
  }
  v7 = *(const struct DXGADAPTER **)(v5 + 16);
  for ( i = a1; ; i = v10 )
  {
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i);
    v10 = NextTarget;
    if ( !NextTarget )
      break;
    if ( !*((_DWORD *)NextTarget + 22)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, NextTarget, a1)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, a1, v10) )
    {
      return v10;
    }
  }
  v11 = 0LL;
  v12 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  v13 = 0LL;
  if ( v12 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
    v11 = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v12 - 8);
  for ( ; v11; v11 = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, v11) )
  {
    if ( !*((_DWORD *)v11 + 22)
      && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, v11, v13)
      && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, a1, v11) )
    {
      v13 = v11;
    }
  }
  return v13;
}
