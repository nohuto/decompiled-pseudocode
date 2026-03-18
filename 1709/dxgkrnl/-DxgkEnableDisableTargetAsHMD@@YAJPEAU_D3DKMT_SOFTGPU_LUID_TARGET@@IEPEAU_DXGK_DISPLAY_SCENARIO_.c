/*
 * XREFs of ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017DFCC
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01FE418 (MonitorEnableDisableTargetAsHMD.c)
 */

__int64 __fastcall DxgkEnableDisableTargetAsHMD(
        struct _D3DKMT_SOFTGPU_LUID_TARGET *a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _LUID *v6; // r14
  __int64 v7; // rdi
  int *v8; // rbx
  __int64 v9; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rcx
  DXGADAPTER *v13; // rsi
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v24[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v25[40]; // [rsp+58h] [rbp-28h] BYREF

  v6 = (struct _LUID *)a1;
  LODWORD(v7) = -1073741811;
  if ( a2 <= 0x10 && a2 )
  {
    v8 = (int *)((char *)a1 + 4);
    v9 = a2;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)a1);
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v22);
      v13 = v11;
      if ( v11 )
        break;
      LODWORD(v7) = -1073741811;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v14[3] = *v8;
      v14[4] = (unsigned int)*(v8 - 1);
      v14[5] = -1073741811LL;
      WdLogEvent5_WdError(v14);
LABEL_13:
      v6 = (struct _LUID *)((char *)v6 + 12);
      v8 += 3;
      if ( !--v9 )
        return (unsigned int)v7;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v23, v11, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v13);
    v15 = COREADAPTERACCESS::AcquireExclusive(&v23, 1u);
    v7 = v15;
    if ( v15 >= 0 )
    {
      if ( !*((_QWORD *)v13 + 288) )
        goto LABEL_12;
      LOBYTE(v17) = a3;
      v19 = MonitorEnableDisableTargetAsHMD(v13, (unsigned int)v8[1], v17, a4);
      v7 = v19;
      if ( v19 >= 0 )
        goto LABEL_12;
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v18[3] = (unsigned int)v8[1];
      v18[4] = *v8;
      v18[5] = (unsigned int)*(v8 - 1);
      v18[6] = v7;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v18[3] = *v8;
      v18[4] = (unsigned int)*(v8 - 1);
      v18[5] = v7;
    }
    WdLogEvent5_WdError(v18);
LABEL_12:
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    goto LABEL_13;
  }
  return (unsigned int)v7;
}
