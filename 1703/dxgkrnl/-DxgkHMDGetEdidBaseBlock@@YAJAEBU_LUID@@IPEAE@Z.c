/*
 * XREFs of ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01A93E0
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AB5C0 (MonitorGetEdidBaseBlockPtr.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DmmIsTargetHMD @ 0x1C00F8170 (DmmIsTargetHMD.c)
 */

__int64 __fastcall DxgkHMDGetEdidBaseBlock(const struct _LUID *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned int v5; // r15d
  DXGGLOBAL *Global; // rax
  __int64 v8; // r9
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  DXGADAPTER *v13; // rbp
  _QWORD *v14; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  _OWORD *EdidBaseBlockPtr; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v25[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v26[40]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, (__int64)a3, a4);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v27, v8);
  v12 = 0;
  v13 = v9;
  if ( !v9 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v14[3] = a1->HighPart;
    v14[4] = a1->LowPart;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v9, 0LL);
  DXGADAPTER::ReleaseReference(v13);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
  v19 = v16;
  if ( v16 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
LABEL_7:
    v20[3] = a1->HighPart;
    v20[4] = a1->LowPart;
    v20[5] = v19;
    WdLogEvent5_WdError(v20);
LABEL_14:
    v12 = v19;
    goto LABEL_15;
  }
  if ( !*((_QWORD *)v13 + 285) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v19 = -1073741811LL;
    goto LABEL_7;
  }
  if ( !a3 || !DmmIsTargetHMD(v13, v5) )
  {
    LODWORD(v19) = -1073741811;
    goto LABEL_14;
  }
  EdidBaseBlockPtr = MonitorGetEdidBaseBlockPtr(v13, v5, v21, v22);
  if ( !EdidBaseBlockPtr )
  {
    LODWORD(v19) = -1073741823;
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
  COREACCESS::~COREACCESS((COREACCESS *)v26);
  COREACCESS::~COREACCESS((COREACCESS *)v25);
  return v12;
}
