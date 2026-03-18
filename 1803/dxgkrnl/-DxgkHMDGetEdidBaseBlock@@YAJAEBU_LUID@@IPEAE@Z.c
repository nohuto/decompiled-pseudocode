/*
 * XREFs of ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01C4F6C
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z @ 0x1C00BA694 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00C752C (MonitorGetEdidBaseBlockPtr.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkHMDGetEdidBaseBlock(const struct _LUID *a1, unsigned int a2, unsigned __int8 *a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  DXGADAPTER *v10; // rbp
  _QWORD *v11; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _OWORD *EdidBaseBlockPtr; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v21[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v22[40]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v23);
  v9 = 0;
  v10 = v7;
  if ( !v7 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v11[3] = a1->HighPart;
    v11[4] = a1->LowPart;
    v11[5] = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v7, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v10);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
LABEL_7:
    v16[3] = a1->HighPart;
    v16[4] = a1->LowPart;
    v16[5] = v15;
    WdLogEvent5_WdError(v16);
LABEL_14:
    v9 = v15;
    goto LABEL_15;
  }
  if ( !*((_QWORD *)v10 + 307) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v15 = -1073741811LL;
    goto LABEL_7;
  }
  if ( !a3 || (unsigned int)DmmGetTargetUsage(v10, a2) != 1 )
  {
    LODWORD(v15) = -1073741811;
    goto LABEL_14;
  }
  EdidBaseBlockPtr = MonitorGetEdidBaseBlockPtr(v10, a2, v17, v18);
  if ( !EdidBaseBlockPtr )
  {
    LODWORD(v15) = -1073741823;
    goto LABEL_14;
  }
  *(_OWORD *)a3 = *EdidBaseBlockPtr;
  *((_OWORD *)a3 + 1) = EdidBaseBlockPtr[1];
  *((_OWORD *)a3 + 2) = EdidBaseBlockPtr[2];
  *((_OWORD *)a3 + 3) = EdidBaseBlockPtr[3];
  *((_OWORD *)a3 + 4) = EdidBaseBlockPtr[4];
  *((_OWORD *)a3 + 5) = EdidBaseBlockPtr[5];
  *((_OWORD *)a3 + 6) = EdidBaseBlockPtr[6];
  *((_OWORD *)a3 + 7) = EdidBaseBlockPtr[7];
LABEL_15:
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  return v9;
}
