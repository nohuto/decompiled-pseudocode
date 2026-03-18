/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C00D7F18
 * Callers:
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B5274 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D7CD4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00D7FCC (_EnforceDriverModelScalingPolicy.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  DXGADAPTER *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v21[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v22[40]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+90h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v23);
  v9 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v16 + 24) = 7370LL;
      WdLogEvent5_WdAssertion(v16);
      EnforceDriverModelScalingPolicy(v9, a2);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v9, 0LL);
      v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
      if ( v11 < 0 )
      {
        v17 = v11;
        if ( v11 == -1073741130 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v18[3] = v17;
          v18[4] = v9;
          v18[5] = *((int *)v9 + 68);
          v18[6] = *((unsigned int *)v9 + 67);
          WdLogEvent5_WdWarning(v18);
        }
        else
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v19[3] = v17;
          v19[4] = v9;
          v19[5] = *((int *)v9 + 68);
          v19[6] = *((unsigned int *)v9 + 67);
          WdLogEvent5_WdError(v19);
        }
      }
      else
      {
        EnforceDriverModelScalingPolicy(v9, a2);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v20);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v22);
      COREACCESS::~COREACCESS((COREACCESS *)v21);
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v15 + 24) = a1->HighPart;
    *(_QWORD *)(v15 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v15);
  }
}
