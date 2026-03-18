/*
 * XREFs of ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01FA5E0
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01FA744 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00DBE70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01F9980 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(
        CCD_TOPOLOGY **this,
        struct DXGADAPTER *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DMMVIDPN *v9; // rbx
  __int64 v10; // rax
  int v11; // ebx
  CCD_BTL *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  CCD_TOPOLOGY *v15; // rcx
  int v16; // eax
  PVOID v17; // rcx
  __int64 v18; // rax
  struct D3DKMT_GETPATHSMODALITY *v20[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  PVOID v25; // [rsp+60h] [rbp-20h]
  bool v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  int v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+74h] [rbp-Ch]
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF
  struct DMMVIDPN *v31; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+48h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 288) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v32, v4);
  v5 = *(_QWORD *)(v4 + 280);
  v31 = 0LL;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
  auto_rc<DMMVIDPN>::reset((__int64 *)&v31, *(_QWORD *)(v4 + 280));
  v9 = v31;
  if ( v31 )
  {
    P = 0LL;
    v12 = CCD_BTL::Global(v7);
    v11 = CCD_BTL::ConvertVidPnToPathsModality(v12, v9, (struct D3DKMT_GETPATHSMODALITY **)&P);
    if ( v11 >= 0 )
    {
      v15 = *this;
      LODWORD(v20[0]) = 0;
      memset(&v20[1], 0, 24);
      v22 = 0LL;
      v23 = 0LL;
      v21 = 0;
      v26 = P == 0LL;
      v24 = 0LL;
      v25 = P;
      v27 = 0;
      v28 = 1;
      v29 = 0LL;
      v16 = CCD_TOPOLOGY::CopyInheritScope(v15, (const struct CCD_TOPOLOGY *)v20);
      v17 = P;
      v11 = v16;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v11 >= 0 )
      {
        v11 = 0;
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v18 + 24) = a2;
        WdLogEvent5_WdError(v18);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v20);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = a2;
      WdLogEvent5_WdError(v14);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdWarning(v10);
    v11 = -1073741275;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v31, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
  return (unsigned int)v11;
}
