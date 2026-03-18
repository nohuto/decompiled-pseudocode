/*
 * XREFs of ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C4C24
 * Callers:
 *     ?DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z @ 0x1C0165A70 (-DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z @ 0x1C00BA694 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C01C5780 (-HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C0213FCC (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall DxgkHMDDisplayControlInternal(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  DXGADAPTER *v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rbx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int IsTargetInClientVidPnTopology; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v26[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v27[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v28[40]; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int8 v29; // [rsp+B0h] [rbp+18h] BYREF

  v4 = a2;
  if ( a3 <= 2 && a4 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v25);
    v11 = v9;
    if ( !v9 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      LODWORD(v13) = -1073741811;
      v12[3] = a1->HighPart;
      v12[4] = a1->LowPart;
      v12[5] = -1073741811LL;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v13;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v9, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26);
    v13 = v15;
    if ( v15 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
LABEL_10:
      v17[3] = a1->HighPart;
      v17[4] = a1->LowPart;
      v17[5] = v13;
LABEL_25:
      WdLogEvent5_WdError(v17);
      goto LABEL_27;
    }
    if ( !*((_QWORD *)v11 + 307) )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v13 = -1073741811LL;
      goto LABEL_10;
    }
    if ( (unsigned int)DmmGetTargetUsage(v11, v4) != 1 )
    {
      LODWORD(v13) = -1073741811;
LABEL_27:
      COREACCESS::~COREACCESS((COREACCESS *)v28);
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      return (unsigned int)v13;
    }
    v29 = 0;
    IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v11, v4, &v29);
    v13 = IsTargetInClientVidPnTopology;
    if ( IsTargetInClientVidPnTopology >= 0 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v26);
      if ( a3 )
      {
        v21 = a3 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            *a4 = v29;
          }
          else
          {
            v22 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v22 + 24) = 8369LL;
            WdLogEvent5_WdAssertion(v22);
          }
          goto LABEL_27;
        }
        if ( !v29 || (v23 = HMDDisplayOnOff(v11, (unsigned int)v4, 0LL), v13 = v23, v23 >= 0) )
        {
          *a4 = 0;
          goto LABEL_27;
        }
      }
      else if ( v29 || (v24 = HMDDisplayOnOff(v11, (unsigned int)v4, 1LL), v13 = v24, v24 >= 0) )
      {
        *a4 = 1;
        goto LABEL_27;
      }
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v17[3] = a1->HighPart;
    v17[4] = a1->LowPart;
    v17[5] = v4;
    v17[6] = v13;
    goto LABEL_25;
  }
  return -1073741811LL;
}
