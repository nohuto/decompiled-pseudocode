/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00F4230
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AFB00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetDeviceObject @ 0x1C00F4340 (MonitorGetDeviceObject.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v4; // r15
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGADAPTER *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned int DeviceObject; // ebx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct _LUID v29; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v31[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v32[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v33[40]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  if ( !a1 || !a3 || !a4 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
    DeviceObject = -1073741811;
    v26[3] = -1073741811LL;
    goto LABEL_16;
  }
  v29 = *a1;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v29, a2, &v29, &v34);
  v10 = v8;
  if ( v8 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v29, &v30);
    v16 = v12;
    if ( v12 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v12, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v16);
      if ( *((_QWORD *)v16 + 288) )
      {
        v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
        v22 = v18;
        if ( v18 < 0 )
        {
          v28 = WdLogNewEntry5_WdWarning(v20, v19, v21);
          *(_QWORD *)(v28 + 24) = v16;
          *(_QWORD *)(v28 + 32) = v22;
          WdLogEvent5_WdWarning(v28);
          DeviceObject = v22;
        }
        else
        {
          DeviceObject = MonitorGetDeviceObject(v16, v34, a3, a4);
        }
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v27 + 24) = v16;
        DeviceObject = -1073741811;
        *(_QWORD *)(v27 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v27);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      return DeviceObject;
    }
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    DeviceObject = -1073741811;
    v26[3] = v29.LowPart;
    v26[4] = v29.HighPart;
    v26[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdWarning(v26);
    return DeviceObject;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v25[3] = a1->LowPart;
  v25[4] = a1->HighPart;
  v25[5] = v4;
  v25[6] = v10;
  WdLogEvent5_WdError(v25);
  return (unsigned int)v10;
}
