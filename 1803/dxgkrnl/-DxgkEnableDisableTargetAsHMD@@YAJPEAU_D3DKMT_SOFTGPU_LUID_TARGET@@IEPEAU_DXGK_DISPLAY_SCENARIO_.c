/*
 * XREFs of ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0164AAC
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorSetUsageClass @ 0x1C022F470 (MonitorSetUsageClass.c)
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
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v23[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v24[40]; // [rsp+58h] [rbp-28h] BYREF

  v6 = (struct _LUID *)a1;
  LODWORD(v7) = -1073741811;
  if ( a2 <= 0x10 && a2 )
  {
    v8 = (int *)((char *)a1 + 4);
    v9 = a2;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)a1);
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v21);
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
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v22, v11, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v13);
    v15 = COREADAPTERACCESS::AcquireExclusive(&v22);
    v7 = v15;
    if ( v15 >= 0 )
    {
      if ( !*((_QWORD *)v13 + 307) )
        goto LABEL_12;
      v18 = MonitorSetUsageClass(v13, (unsigned int)v8[1], a3 != 0, a4);
      v7 = v18;
      if ( v18 >= 0 )
        goto LABEL_12;
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v17[3] = (unsigned int)v8[1];
      v17[4] = *v8;
      v17[5] = (unsigned int)*(v8 - 1);
      v17[6] = v7;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v17[3] = *v8;
      v17[4] = (unsigned int)*(v8 - 1);
      v17[5] = v7;
    }
    WdLogEvent5_WdError(v17);
LABEL_12:
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    COREACCESS::~COREACCESS((COREACCESS *)v23);
    goto LABEL_13;
  }
  return (unsigned int)v7;
}
