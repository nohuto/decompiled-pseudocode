/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AEB98
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00B64BC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00AE6F0 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, struct _LUID a2, char a3, unsigned int a4, unsigned int a5)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  DXGADAPTER *v11; // rdi
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  unsigned __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v17[40]; // [rsp+68h] [rbp-30h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2, &v14);
  v11 = v10;
  if ( v10 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, v10, 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   (__int64)v11,
                                                   a3,
                                                   a4,
                                                   a5,
                                                   0LL);
    COREACCESS::~COREACCESS((COREACCESS *)v17);
    COREACCESS::~COREACCESS((COREACCESS *)v16);
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
