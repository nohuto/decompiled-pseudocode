/*
 * XREFs of ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00A426C
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00EC3E0 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DmmIsTargetHMD @ 0x1C00F8170 (DmmIsTargetHMD.c)
 */

char __fastcall DxgkIsTargetHMD(const struct _LUID *a1, unsigned int a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char IsTargetHMD; // di
  DXGADAPTER *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 LowPart; // rcx
  _BYTE v18[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v19[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v20[40]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v21);
  IsTargetHMD = 0;
  v9 = v5;
  if ( v5 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v5, 0LL);
    DXGADAPTER::ReleaseReference(v9);
    v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
    v13 = v10;
    if ( v10 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v16[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v16[5] = v13;
    }
    else
    {
      if ( *((_QWORD *)v9 + 285) )
      {
        IsTargetHMD = DmmIsTargetHMD(v9, a2);
LABEL_5:
        COREACCESS::~COREACCESS((COREACCESS *)v20);
        COREACCESS::~COREACCESS((COREACCESS *)v19);
        return IsTargetHMD;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v16[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v16[5] = -1073741811LL;
    }
    v16[4] = LowPart;
    WdLogEvent5_WdError(v16);
    goto LABEL_5;
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
  v15[3] = a1->HighPart;
  v15[4] = a1->LowPart;
  v15[5] = -1073741811LL;
  WdLogEvent5_WdError(v15);
  return 0;
}
