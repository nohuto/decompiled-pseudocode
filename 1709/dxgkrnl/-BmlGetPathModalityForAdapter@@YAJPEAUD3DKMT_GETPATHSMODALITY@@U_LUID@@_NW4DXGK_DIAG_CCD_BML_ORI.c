/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00D1518
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00D1D18 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, struct _LUID a2, char a3, unsigned int a4, int a5)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  DXGADAPTER *v11; // rdi
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 v13; // r8
  unsigned __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v17[32]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v18[40]; // [rsp+68h] [rbp-30h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2, &v15);
  v11 = v10;
  if ( v10 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v10, 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      LOBYTE(v13) = a3;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v11,
                                                   v13,
                                                   a4,
                                                   a5,
                                                   0LL);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    COREACCESS::~COREACCESS((COREACCESS *)v17);
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
