/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BF9FC
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C01C0970 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkQueryDmmInterface @ 0x1C00A7230 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFFE0 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _DPI_INFORMATION *v22; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v24[40]; // [rsp+58h] [rbp-40h] BYREF
  Win81 *v25; // [rsp+A0h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v22, this, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v22);
  v13 = v9;
  if ( v9 >= 0 )
  {
    v25 = 0LL;
    v18 = DxgkQueryDmmInterface(this, v10, &v25, v12);
    v13 = v18;
    if ( v18 >= 0 )
    {
      LODWORD(v13) = Win81::UpdateGdiInfoForVidPnSource(v25, this, (void *const)(unsigned int)v5, a3, a4, a5, v22);
      goto LABEL_7;
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v17[3] = v13;
    v17[4] = this;
    v17[5] = v5;
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v14[3] = v13;
    CurrentProcess = PsGetCurrentProcess(v15);
    v14[5] = this;
    v17 = v14;
    v14[4] = CurrentProcess;
  }
  WdLogEvent5_WdError(v17);
LABEL_7:
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  return (unsigned int)v13;
}
