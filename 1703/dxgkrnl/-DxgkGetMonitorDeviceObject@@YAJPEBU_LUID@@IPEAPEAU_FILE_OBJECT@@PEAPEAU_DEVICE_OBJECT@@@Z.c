/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00AC1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorGetDeviceObject @ 0x1C00AC2E0 (MonitorGetDeviceObject.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AC7A0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v4; // r15
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGADAPTER *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  unsigned int DeviceObject; // ebx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _LUID v33; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v35[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v36[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v37[40]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v38; // [rsp+A0h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  if ( !a1 || !a3 || !a4 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    DeviceObject = -1073741811;
    v30[3] = -1073741811LL;
    goto LABEL_16;
  }
  v33 = *a1;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v33, (unsigned int)a2, &v33, &v38);
  v11 = v8;
  if ( v8 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v33, &v34);
    v18 = v13;
    if ( v13 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v13, 0LL);
      DXGADAPTER::ReleaseReference(v18);
      if ( *((_QWORD *)v18 + 285) )
      {
        v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
        v26 = v21;
        if ( v21 < 0 )
        {
          v32 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
          *(_QWORD *)(v32 + 24) = v18;
          *(_QWORD *)(v32 + 32) = v26;
          WdLogEvent5_WdWarning(v32);
          DeviceObject = v26;
        }
        else
        {
          DeviceObject = MonitorGetDeviceObject(v18, v38, a3, a4);
        }
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v31 + 24) = v18;
        DeviceObject = -1073741811;
        *(_QWORD *)(v31 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v31);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v37);
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      return DeviceObject;
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    DeviceObject = -1073741811;
    v30[3] = v33.LowPart;
    v30[4] = v33.HighPart;
    v30[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdWarning(v30);
    return DeviceObject;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
  v29[3] = a1->LowPart;
  v29[4] = a1->HighPart;
  v29[5] = v4;
  v29[6] = v11;
  WdLogEvent5_WdError(v29);
  return (unsigned int)v11;
}
