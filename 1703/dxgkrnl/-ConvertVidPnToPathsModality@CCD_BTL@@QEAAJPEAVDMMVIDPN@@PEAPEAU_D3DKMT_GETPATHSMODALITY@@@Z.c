/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01DFE40
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01A8D84 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC608 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C01DFD00 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct _D3DKMT_GETPATHSMODALITY **a3,
        __int64 a4)
{
  unsigned __int16 v4; // bx
  __int64 v8; // rax
  unsigned __int16 v9; // si
  int v10; // eax
  SIZE_T v11; // r15
  struct _D3DKMT_GETPATHSMODALITY *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  _QWORD *v27; // rax
  struct _D3DKMT_GETPATHSMODALITY **v28; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 v29; // [rsp+30h] [rbp-31h]
  struct _D3DKMT_GETPATHSMODALITY *v30[4]; // [rsp+38h] [rbp-29h] BYREF
  __int16 v31; // [rsp+58h] [rbp-9h]
  __int64 v32; // [rsp+60h] [rbp-1h]
  __int64 v33; // [rsp+68h] [rbp+7h]
  __int64 v34; // [rsp+70h] [rbp+Fh]
  struct _D3DKMT_GETPATHSMODALITY *v35; // [rsp+78h] [rbp+17h]
  bool v36; // [rsp+80h] [rbp+1Fh]
  int v37; // [rsp+84h] [rbp+23h]
  int v38; // [rsp+88h] [rbp+27h]
  __int64 v39; // [rsp+8Ch] [rbp+2Bh]

  v4 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_WORD *)a2 + 68);
  v10 = v9;
  if ( v9 <= 1u )
    v10 = 1;
  v11 = (unsigned int)(264 * v10 + 48);
  v12 = (struct _D3DKMT_GETPATHSMODALITY *)operator new(v11, 0x63644356u, PagedPool);
  *a3 = v12;
  if ( v12 )
  {
    memset(v12, 0, v11);
    *((_WORD *)*a3 + 11) = v9;
    if ( v9 )
    {
      v35 = *a3;
      memset(&v30[1], 0, 24);
      v36 = v35 == 0LL;
      v32 = 0LL;
      v33 = 0LL;
      LODWORD(v30[0]) = 0;
      v31 = 0;
      v34 = 0LL;
      v37 = 0;
      v38 = 1;
      v39 = 0LL;
      v28 = v30;
      v29 = 0;
      v21 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
              (CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v28,
              a2,
              v18,
              v19);
      v26 = v21;
      if ( v21 >= 0 )
      {
        if ( v35 )
          v4 = *((_WORD *)v35 + 10);
        if ( v4 < v29 )
          LODWORD(v26) = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)v30, v22, v24, v25);
      }
      else
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v27[5] = v9;
        v27[3] = v26;
        v27[4] = a2;
        WdLogEvent5_WdError(v27);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v30);
      return (unsigned int)v26;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v17, v16, v18, v19);
      v20[3] = this;
      v20[4] = a2;
      v20[5] = a3;
      WdLogEvent5_WdDmmEvent(v20);
      return 0LL;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13);
    v14[5] = v9;
    v14[3] = v11;
    v14[4] = a2;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
}
