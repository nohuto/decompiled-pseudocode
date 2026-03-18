/*
 * XREFs of ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0101B68
 * Callers:
 *     DxgkApplyCdsjToPathsModality @ 0x1C0101AD0 (DxgkApplyCdsjToPathsModality.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00A8B70 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00A8DC0 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C00ED224 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::ApplyCdsjToPathModality(struct CCD_TOPOLOGY *this, struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGADAPTER *v7; // r8
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v13; // rax
  _QWORD v14[12]; // [rsp+20h] [rbp-78h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  *(_QWORD *)((char *)&v14[2] + 4) = 0LL;
  *(_QWORD *)((char *)&v14[3] + 4) = 0LL;
  *(_QWORD *)((char *)&v14[4] + 4) = 0LL;
  memset((char *)&v14[5] + 4, 0, 0x28uLL);
  v4 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 0);
  v8 = v4;
  if ( v4 < 0
    || (CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v14, a2, v7),
        v9 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v14, this),
        v8 = v9,
        v9 < 0) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v13[3] = v8;
    v13[4] = this;
    v13[5] = *((_QWORD *)this + 8);
    v13[6] = a2;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    CCD_TOPOLOGY::FillScalingIntent(this, v5, v10, v11);
  }
  return (unsigned int)v8;
}
