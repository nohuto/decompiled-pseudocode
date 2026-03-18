/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01F9980
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01C3780 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01FA5E0 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DC8A0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C01F9810 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rax
  unsigned __int16 v8; // si
  int v9; // eax
  SIZE_T v10; // r15
  struct D3DKMT_GETPATHSMODALITY *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  _QWORD *v21; // rax
  struct D3DKMT_GETPATHSMODALITY **v22; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 v23; // [rsp+30h] [rbp-31h]
  struct D3DKMT_GETPATHSMODALITY *v24[4]; // [rsp+38h] [rbp-29h] BYREF
  __int16 v25; // [rsp+58h] [rbp-9h]
  __int64 v26; // [rsp+60h] [rbp-1h]
  __int64 v27; // [rsp+68h] [rbp+7h]
  __int64 v28; // [rsp+70h] [rbp+Fh]
  _WORD *v29; // [rsp+78h] [rbp+17h]
  bool v30; // [rsp+80h] [rbp+1Fh]
  int v31; // [rsp+84h] [rbp+23h]
  int v32; // [rsp+88h] [rbp+27h]
  __int64 v33; // [rsp+8Ch] [rbp+2Bh]

  v3 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_WORD *)a2 + 68);
  v9 = v8;
  if ( v8 <= 1u )
    v9 = 1;
  v10 = (unsigned int)(264 * v9 + 48);
  v11 = (struct D3DKMT_GETPATHSMODALITY *)operator new(v10, 0x63644356u, PagedPool);
  *a3 = v11;
  if ( v11 )
  {
    memset(v11, 0, v10);
    *((_WORD *)*a3 + 11) = v8;
    if ( v8 )
    {
      v29 = *a3;
      memset(&v24[1], 0, 24);
      v30 = v29 == 0LL;
      v26 = 0LL;
      v27 = 0LL;
      LODWORD(v24[0]) = 0;
      v25 = 0;
      v28 = 0LL;
      v31 = 0;
      v32 = 1;
      v33 = 0LL;
      v22 = v24;
      v23 = 0;
      v17 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v22, a2);
      v20 = v17;
      if ( v17 >= 0 )
      {
        if ( v29 )
          v3 = v29[10];
        if ( v3 < v23 )
          LODWORD(v20) = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)v24, v18);
      }
      else
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v21[5] = v8;
        v21[3] = v20;
        v21[4] = a2;
        WdLogEvent5_WdError(v21);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v24);
      return (unsigned int)v20;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v15);
      v16[3] = this;
      v16[4] = a2;
      v16[5] = a3;
      WdLogEvent5_WdDmmEvent(v16);
      return 0LL;
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v13[5] = v8;
    v13[3] = v10;
    v13[4] = a2;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
}
