/*
 * XREFs of ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017A5F4
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01E3B54 (MonitorEnableDisableTargetAsHMD.c)
 */

__int64 __fastcall DxgkEnableDisableTargetAsHMD(
        struct _D3DKMT_SOFTGPU_LUID_TARGET *a1,
        __int64 a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v5; // r13
  struct _LUID *v6; // r14
  __int64 v7; // rdi
  int *v8; // rbx
  __int64 v9; // r15
  DXGGLOBAL *Global; // rax
  __int64 v11; // r9
  struct DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGADAPTER *v15; // rsi
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v28[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v29[40]; // [rsp+58h] [rbp-28h] BYREF

  v5 = a3;
  v6 = (struct _LUID *)a1;
  LODWORD(v7) = -1073741811;
  if ( (_DWORD)a2 )
  {
    v8 = (int *)((char *)a1 + 4);
    v9 = (unsigned int)a2;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, (__int64)a4);
      v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v26, v11);
      v15 = v12;
      if ( v12 )
        break;
      LODWORD(v7) = -1073741811;
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v16[3] = *v8;
      v16[4] = (unsigned int)*(v8 - 1);
      v16[5] = -1073741811LL;
      WdLogEvent5_WdError(v16);
LABEL_12:
      v6 = (struct _LUID *)((char *)v6 + 12);
      v8 += 3;
      if ( !--v9 )
        return (unsigned int)v7;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v27, v12, 0LL);
    DXGADAPTER::ReleaseReference(v15);
    v17 = COREADAPTERACCESS::AcquireExclusive(&v27, 1u);
    v7 = v17;
    if ( v17 >= 0 )
    {
      if ( !*((_QWORD *)v15 + 285) )
        goto LABEL_11;
      LOBYTE(v20) = v5;
      v22 = MonitorEnableDisableTargetAsHMD(v15, (unsigned int)v8[1], v20, a4);
      v7 = v22;
      if ( v22 >= 0 )
        goto LABEL_11;
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
      v21[3] = (unsigned int)v8[1];
      v21[4] = *v8;
      v21[5] = (unsigned int)*(v8 - 1);
      v21[6] = v7;
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
      v21[3] = *v8;
      v21[4] = (unsigned int)*(v8 - 1);
      v21[5] = v7;
    }
    WdLogEvent5_WdError(v21);
LABEL_11:
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    goto LABEL_12;
  }
  return (unsigned int)v7;
}
