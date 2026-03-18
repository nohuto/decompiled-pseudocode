/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00E12AC
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C00E1920 (DxgkAugmentCdsj.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C00DC11C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DD4EC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DF48C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00E1244 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00E1628 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00E5004 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00E5360 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00F7E88 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x1C01FC914 (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
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
  bool v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  struct D3DKMT_GETPATHSMODALITY *v23[12]; // [rsp+20h] [rbp-E0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v24[8]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v25; // [rsp+C0h] [rbp-40h]
  _QWORD v26[12]; // [rsp+E0h] [rbp-20h] BYREF

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v24, 8u, 0);
  LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v24, a2, 0x40u);
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
        LODWORD(v5) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v24, this, (__int64)v6);
        if ( (_DWORD)v5 == -1073741266 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v6);
          v15[4] = v24;
          v15[3] = this;
          v15[5] = v25;
          WdLogEvent5_WdWarning(v15);
          LODWORD(v5) = CDS_JOURNAL::Purge(this);
        }
      }
      v8 = v25;
      *(_OWORD *)this = *v25;
      *((_DWORD *)this + 4) = *((_DWORD *)v8 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v26[0] = 0LL;
        v26[1] = 0LL;
        *(_QWORD *)((char *)&v26[2] + 4) = 0LL;
        *(_QWORD *)((char *)&v26[3] + 4) = 0LL;
        *(_QWORD *)((char *)&v26[4] + 4) = 0LL;
        memset((char *)&v26[5] + 4, 0, 0x28uLL);
        CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v26, a2, v16);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v23, 8u, 0);
        LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v23, a2, 0xFu);
        if ( (int)v5 >= 0 )
        {
          v18 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v26, (struct CCD_TOPOLOGY *)v23, v17);
          v5 = v18;
          if ( v18 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v23),
                v20 = CCD_TOPOLOGY::Persist(v23, 1LL),
                v5 = v20,
                v20 < 0) )
          {
            v21 = WdLogNewEntry5_WdError(v19);
            *(_QWORD *)(v21 + 24) = v5;
            *(_QWORD *)(v21 + 32) = v23;
            *(struct D3DKMT_GETPATHSMODALITY **)(v21 + 40) = v23[8];
            WdLogEvent5_WdError(v21);
          }
          else
          {
            LODWORD(v5) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v26);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v23);
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
        v11 = operator new(0x58uLL, 0x63644356u, PagedPool);
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
          v22 = WdLogNewEntry5_WdLowResource(v10);
          *(_QWORD *)(v22 + 24) = 88LL;
          WdLogEvent5_WdLowResource(v22);
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
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v24);
  return (unsigned int)v5;
}
