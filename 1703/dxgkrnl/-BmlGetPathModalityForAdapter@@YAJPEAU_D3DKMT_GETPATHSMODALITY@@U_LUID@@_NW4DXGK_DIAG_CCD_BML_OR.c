/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00F12A0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00F1AB4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // esi
  char v6; // bp
  DXGGLOBAL *Global; // rax
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rax
  DXGADAPTER *v12; // rdi
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 v14; // r8
  unsigned __int64 v16; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v18[32]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v19[40]; // [rsp+68h] [rbp-30h] BYREF

  v5 = a4;
  v6 = a3;
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a2, &v16, v10);
  v12 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v11, 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      LOBYTE(v14) = v6;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v12,
                                                   v14,
                                                   v5,
                                                   a5,
                                                   0LL);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    DXGADAPTER::ReleaseReference(v12);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
