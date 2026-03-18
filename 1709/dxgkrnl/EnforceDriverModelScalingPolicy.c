/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C00E4898
 * Callers:
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DD4EC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00E4674 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00E4950 (_EnforceDriverModelScalingPolicy.c)
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
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
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
      v17 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v17 + 24) = 7158LL;
      WdLogEvent5_WdAssertion(v17);
      EnforceDriverModelScalingPolicy(v9, a2);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v9, 0LL);
      v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
      v15 = v11;
      if ( v11 < 0 )
      {
        if ( v11 == -1073741130 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v18[3] = -1073741130LL;
          v18[4] = v9;
          v18[5] = *((int *)v9 + 68);
          v18[6] = *((unsigned int *)v9 + 67);
          WdLogEvent5_WdWarning(v18);
        }
        else
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v19[3] = v15;
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
    v16 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v16 + 24) = a1->HighPart;
    *(_QWORD *)(v16 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v16);
  }
}
