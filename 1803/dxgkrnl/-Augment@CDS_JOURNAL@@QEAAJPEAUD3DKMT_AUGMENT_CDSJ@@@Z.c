/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00D8140
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C00D8110 (DxgkAugmentCdsj.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B334C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C00B3C84 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B5274 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00D78B0 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D79BC (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00D8004 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00D8374 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00D83D4 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x1C022A190 (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v5; // rbx
  struct DXGADAPTER *v6; // r8
  _QWORD *v7; // rsi
  _OWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct DXGADAPTER *v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rax
  _BYTE v24[64]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  _BYTE v26[64]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v27; // [rsp+C0h] [rbp-40h]
  _QWORD v28[12]; // [rsp+E0h] [rbp-20h] BYREF

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v26, 8u, 0);
  LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v26, a2, 64);
  if ( (int)v5 >= 0 )
  {
    if ( *((_DWORD *)a2 + 4) == -1 )
    {
      LODWORD(v5) = -1071774974;
    }
    else
    {
      v7 = (_QWORD *)((char *)this + 24);
      if ( (_QWORD *)*v7 != v7 && *(_DWORD *)this == 1 )
      {
        LODWORD(v5) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v26, this, (__int64)v6);
        if ( (_DWORD)v5 == -1073741266 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v6);
          v15[4] = v26;
          v15[3] = this;
          v15[5] = v27;
          WdLogEvent5_WdWarning(v15);
          LODWORD(v5) = CDS_JOURNAL::Purge(this);
        }
      }
      v8 = v27;
      *(_OWORD *)this = *v27;
      *((_DWORD *)this + 4) = *((_DWORD *)v8 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v28[0] = 0LL;
        v28[1] = 0LL;
        *(_QWORD *)((char *)&v28[2] + 4) = 0LL;
        *(_QWORD *)((char *)&v28[3] + 4) = 0LL;
        *(_QWORD *)((char *)&v28[4] + 4) = 0LL;
        memset((char *)&v28[5] + 4, 0, 0x28uLL);
        CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v28, a2, v16);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v24, 8u, 0);
        LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v24, a2, 15);
        if ( (int)v5 >= 0 )
        {
          v17 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v28, (struct CCD_TOPOLOGY *)v24);
          v5 = v17;
          if ( v17 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v24),
                v21 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v24, 1LL, v19, v20),
                v5 = v21,
                v21 < 0) )
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdError(v18);
            v22[3] = v5;
            v22[4] = v24;
            v22[5] = v25;
            WdLogEvent5_WdError(v22);
          }
          else
          {
            LODWORD(v5) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v28);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v24);
        goto LABEL_14;
      }
      v9 = (_DWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        goto LABEL_8;
      do
      {
        v11 = v9;
        if ( v9[8] == *((_DWORD *)a2 + 4) && v9[5] == *((_DWORD *)a2 + 1) && v9[6] == *((_DWORD *)a2 + 2) )
          break;
        v9 = *(_DWORD **)v9;
      }
      while ( v9 != (_DWORD *)v7 );
      if ( v9 == (_DWORD *)v7 )
      {
LABEL_8:
        v11 = operator new[](0x58uLL, 0x63644356u, PagedPool);
        if ( v11 )
        {
          *v11 = 0LL;
          v11[1] = 0LL;
          *(_QWORD *)((char *)v11 + 20) = 0LL;
          *(_QWORD *)((char *)v11 + 28) = 0LL;
          *(_QWORD *)((char *)v11 + 36) = 0LL;
          memset((char *)v11 + 44, 0, 0x28uLL);
        }
        else
        {
          v11 = 0LL;
        }
        if ( !v11 )
        {
          v23 = WdLogNewEntry5_WdLowResource(v10);
          *(_QWORD *)(v23 + 24) = 88LL;
          WdLogEvent5_WdLowResource(v23);
          LODWORD(v5) = -1073741801;
          goto LABEL_14;
        }
        v12 = (_QWORD *)v7[1];
        if ( (_QWORD *)*v12 != v7 )
          __fastfail(3u);
        *v11 = v7;
        v11[1] = v12;
        *v12 = v11;
        v7[1] = v11;
      }
      CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v11, a2, v6);
    }
  }
LABEL_14:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v26);
  return (unsigned int)v5;
}
