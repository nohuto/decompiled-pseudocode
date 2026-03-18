/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01E164C
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E0148 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01E18D8 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  const struct DMMVIDEOPRESENTTARGET *v7; // rdi
  const struct DXGADAPTER *v8; // rbp
  const struct DMMVIDEOPRESENTTARGETSET *v9; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v4 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0LL;
  v8 = *(const struct DXGADAPTER **)(*(_QWORD *)(v4 + 8) + 16LL);
  v9 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  if ( v9 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v9 - 8);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i, a3, a4) )
    {
      if ( !*((_BYTE *)i + 404) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v8, i, v7) )
        v7 = i;
    }
  }
  return v7;
}
