/*
 * XREFs of ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0021310
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0043EEC (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01D3F98 (-Reset@VIDPN_MGR@@QEAAXXZ.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01DA060 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGETSET::GetNextTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        const struct DMMVIDEOPRESENTTARGET *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  DMMVIDEOPRESENTTARGETSET *v7; // rdx
  struct DMMVIDEOPRESENTTARGET *result; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDEOPRESENTTARGETSET *)((char *)v7 - 8);
  if ( v7 == (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
    return 0LL;
  return result;
}
