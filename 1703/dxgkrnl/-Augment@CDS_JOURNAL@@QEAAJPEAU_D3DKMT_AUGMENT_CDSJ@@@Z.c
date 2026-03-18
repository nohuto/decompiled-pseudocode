/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADC20
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C00ADBF0 (DxgkAugmentCdsj.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00A4E5C (-_PreVerify@CDS_JOURNAL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00A8930 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00A8B70 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00A8DC0 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00ADE50 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C00ED224 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z @ 0x1C00ED348 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x1C01E2080 (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct _D3DKMT_AUGMENT_CDSJ *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  struct DXGADAPTER *v8; // r8
  _QWORD *v9; // rsi
  _OWORD *v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  _QWORD *v18; // rax
  struct DXGADAPTER *v19; // r8
  int v20; // eax
  _BOOL8 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rax
  _BYTE v26[64]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  _BYTE v28[64]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v29; // [rsp+C0h] [rbp-40h]
  _QWORD v30[12]; // [rsp+E0h] [rbp-20h] BYREF

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2, (__int64)a2, a3, a4);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v28, 8u, 0);
  LODWORD(v7) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v28, a2, 64);
  if ( (int)v7 >= 0 )
  {
    if ( *((_DWORD *)a2 + 4) == -1 )
    {
      LODWORD(v7) = -1071774974;
    }
    else
    {
      v9 = (_QWORD *)((char *)this + 24);
      if ( (_QWORD *)*v9 != v9 && *(_DWORD *)this == 1 )
      {
        LODWORD(v7) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v28, this);
        if ( (_DWORD)v7 == -1073741266 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v8, v17);
          v18[4] = v28;
          v18[3] = this;
          v18[5] = v29;
          WdLogEvent5_WdWarning(v18);
          LODWORD(v7) = CDS_JOURNAL::Purge(this);
        }
      }
      v10 = v29;
      *(_OWORD *)this = *v29;
      *((_DWORD *)this + 4) = *((_DWORD *)v10 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v30[0] = 0LL;
        v30[1] = 0LL;
        *(_QWORD *)((char *)&v30[2] + 4) = 0LL;
        *(_QWORD *)((char *)&v30[3] + 4) = 0LL;
        *(_QWORD *)((char *)&v30[4] + 4) = 0LL;
        memset((char *)&v30[5] + 4, 0, 0x28uLL);
        CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v30, a2, v19);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v26, 8u, 0);
        LODWORD(v7) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v26, a2, 15);
        if ( (int)v7 >= 0 )
        {
          v20 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v30, (struct CCD_TOPOLOGY *)v26);
          v7 = v20;
          if ( v20 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v26, v21),
                v23 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v26, 1u),
                v7 = v23,
                v23 < 0) )
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
            v24[3] = v7;
            v24[4] = v26;
            v24[5] = v27;
            WdLogEvent5_WdError(v24);
          }
          else
          {
            LODWORD(v7) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v30);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v26);
        goto LABEL_14;
      }
      v11 = (_DWORD *)*v9;
      if ( (_QWORD *)*v9 == v9 )
        goto LABEL_8;
      do
      {
        v13 = v11;
        if ( v11[8] == *((_DWORD *)a2 + 4) && v11[5] == *((_DWORD *)a2 + 1) && v11[6] == *((_DWORD *)a2 + 2) )
          break;
        v11 = *(_DWORD **)v11;
      }
      while ( v11 != (_DWORD *)v9 );
      if ( v11 == (_DWORD *)v9 )
      {
LABEL_8:
        v13 = operator new(0x58uLL, 0x63644356u, PagedPool);
        if ( v13 )
        {
          *v13 = 0LL;
          v13[1] = 0LL;
          *(_QWORD *)((char *)v13 + 20) = 0LL;
          *(_QWORD *)((char *)v13 + 28) = 0LL;
          *(_QWORD *)((char *)v13 + 36) = 0LL;
          memset((char *)v13 + 44, 0, 0x28uLL);
        }
        else
        {
          v13 = 0LL;
        }
        if ( !v13 )
        {
          v25 = WdLogNewEntry5_WdLowResource(v12);
          *(_QWORD *)(v25 + 24) = 88LL;
          WdLogEvent5_WdLowResource(v25);
          LODWORD(v7) = -1073741801;
          goto LABEL_14;
        }
        v14 = (_QWORD *)v9[1];
        if ( (_QWORD *)*v14 != v9 )
          __fastfail(3u);
        *v13 = v9;
        v13[1] = v14;
        *v14 = v13;
        v9[1] = v13;
      }
      CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v13, a2, v8);
    }
  }
LABEL_14:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v28);
  return (unsigned int)v7;
}
