/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D816C
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C01D9100 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkQueryDmmInterface @ 0x1C00E1BAC (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D877C (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct _DPI_INFORMATION *v22; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v24[40]; // [rsp+58h] [rbp-40h] BYREF
  Win81 *v25; // [rsp+A0h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  if ( !this )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v22, this, 0LL);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v22);
  v14 = v11;
  if ( v11 >= 0 )
  {
    v25 = 0LL;
    v20 = DxgkQueryDmmInterface(this, v12, &v25);
    v14 = v20;
    if ( v20 >= 0 )
    {
      LODWORD(v14) = Win81::UpdateGdiInfoForVidPnSource(v25, this, (void *const)(unsigned int)v5, a3, a4, a5, v22);
      goto LABEL_9;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v19[3] = v14;
    v19[4] = this;
    v19[5] = v5;
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = v14;
    CurrentProcess = PsGetCurrentProcess(v17, v16);
    v15[5] = this;
    v19 = v15;
    v15[4] = CurrentProcess;
  }
  WdLogEvent5_WdError(v19);
LABEL_9:
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  return (unsigned int)v14;
}
