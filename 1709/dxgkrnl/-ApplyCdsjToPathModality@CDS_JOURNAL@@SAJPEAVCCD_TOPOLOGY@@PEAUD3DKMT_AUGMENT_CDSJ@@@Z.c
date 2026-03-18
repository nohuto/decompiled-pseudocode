/*
 * XREFs of ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01009D8
 * Callers:
 *     DxgkApplyCdsjToPathsModality @ 0x1C0100940 (DxgkApplyCdsjToPathsModality.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DD4EC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00E1628 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00E5004 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 */

__int64 __fastcall CDS_JOURNAL::ApplyCdsjToPathModality(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  struct DXGADAPTER *v6; // r8
  __int64 v7; // rdi
  int v8; // eax
  _QWORD *v10; // rax
  _QWORD v11[12]; // [rsp+20h] [rbp-78h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  *(_QWORD *)((char *)&v11[2] + 4) = 0LL;
  *(_QWORD *)((char *)&v11[3] + 4) = 0LL;
  *(_QWORD *)((char *)&v11[4] + 4) = 0LL;
  memset((char *)&v11[5] + 4, 0, 0x28uLL);
  v4 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 0);
  v7 = v4;
  if ( v4 < 0
    || (CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v11, a2, v6),
        v8 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v11, this),
        v7 = v8,
        v8 < 0) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v10[3] = v7;
    v10[4] = this;
    v10[5] = *((_QWORD *)this + 8);
    v10[6] = a2;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    CCD_TOPOLOGY::FillScalingIntent(this);
  }
  return (unsigned int)v7;
}
