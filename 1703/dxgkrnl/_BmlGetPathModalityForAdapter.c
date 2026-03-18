/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C00F1B74
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00F1AB4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00A0940 (_BmlLogDiagnosticsPacket.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00DF1F0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F1370 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00F16BC (-BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C00F1728 (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00F1A40 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F1E3C (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F210C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        unsigned int a7,
        unsigned __int64 *a8,
        struct DMMVIDPN *a9)
{
  struct DMMVIDPN *v9; // rdi
  unsigned __int8 *v10; // rbx
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // r13
  __int64 v15; // rax
  struct VIDPN_MGR *v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  int ClientVidPn; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // esi
  __int64 v25; // r14
  int v26; // eax
  unsigned int v27; // r13d
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // r12
  PVOID v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  unsigned __int16 v57; // [rsp+20h] [rbp-20h]
  __int64 v58; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+90h] [rbp+50h] BYREF
  __int64 v60; // [rsp+98h] [rbp+58h]

  v60 = a4;
  v9 = a9;
  v10 = 0LL;
  v13 = a2;
  v14 = a1;
  *(_BYTE *)a9 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v47);
  }
  v15 = *(_QWORD *)(a4 + 2280);
  P = 0LL;
  v16 = *(struct VIDPN_MGR **)(v15 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v58, (__int64)v16, a3, a4);
  a9 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v16, (__int64 *)&a9, v17, v18);
  v24 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v57 = v13;
  v25 = (__int64)a9;
  v26 = BmlPreparePathOrderAndVidPn(
          (struct BML_VIDPN_PATH_ORDER **)&P,
          a9,
          (const struct _D3DKMT_GETPATHSMODALITY *)a3,
          v14,
          v57,
          a7);
  v10 = (unsigned __int8 *)P;
  v27 = 0;
  v24 = v26;
  if ( v26 < 0 )
    goto LABEL_19;
  v24 = BmlFunctionalizeVidPn((const struct BML_VIDPN_PATH_ORDER *)P, (struct DMMVIDPN *)v25);
  if ( v24 < 0
    || (v24 = BmlPickColorSpaceAndWireFormat((const struct BML_VIDPN_PATH_ORDER *)v10, (struct DMMVIDPN *)v25), v24 < 0) )
  {
    *(_BYTE *)v9 = 1;
    if ( a5 )
    {
      if ( v25 )
      {
        v48 = BmlLogDiagnosticsPacket((DXGDIAGNOSTICS **)v16, a6, v25, v10);
        v53 = v48;
        if ( v48 < 0 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
          v54[3] = v25;
          v54[4] = v10;
          v54[5] = v53;
          WdLogEvent5_WdWarning(v54);
        }
      }
    }
  }
  else
  {
    if ( a5 )
    {
      if ( v25 )
      {
        if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v25) )
        {
          v43 = BmlLogDiagnosticsPacket((DXGDIAGNOSTICS **)v16, a6, v25, v10);
          v46 = v43;
          if ( v43 < 0 )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v28, v29);
            v55[3] = v25;
            v55[4] = v10;
            v55[5] = v46;
            WdLogEvent5_WdWarning(v55);
          }
        }
      }
    }
    if ( a8 )
    {
      a9 = 0LL;
      *a8 = v25 & -(__int64)(v25 != -88);
      goto LABEL_19;
    }
    v24 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v25, (struct _D3DKMT_GETPATHSMODALITY *)a3, v28, v29);
    if ( v24 >= 0 )
    {
      v30 = *(_QWORD *)(v60 + 268);
      v60 = v30;
      if ( *(_WORD *)(a3 + 20) )
      {
        do
        {
          v31 = 264LL * v27;
          if ( __PAIR64__(HIDWORD(v60), v30) == *(_QWORD *)(v31 + a3 + 64)
            && BmlIsPrimaryClonePath((const struct _D3DKMT_GETPATHSMODALITY *)a3, v27) )
          {
            if ( !*(_QWORD *)(v31 + a3 + 232) )
            {
              v32 = operator new(0xF4uLL, 0x63644356u, PagedPool);
              *(_QWORD *)(v31 + a3 + 232) = v32;
              if ( !v32 )
              {
                v56 = WdLogNewEntry5_WdLowResource(v33);
                WdLogEvent5_WdLowResource(v56);
                v24 = -1073741670;
                break;
              }
            }
            v34 = *(_DWORD *)(v31 + a3 + 72);
            P = *(PVOID *)(v31 + a3 + 232);
            v24 = FillDevmodeFromVidPn(v25, v34, P);
            if ( v24 < 0 )
              break;
            v37 = P;
            v38 = *(unsigned int *)(v31 + a3 + 188);
            *((_DWORD *)P + 58) = v38;
            ConvertDMMScalingToGdiScaling(v38, v37 + 59, v35, v36);
            if ( (*(_DWORD *)(v31 + a3 + 48) & 0x20000) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)(v31 + a3 + 232) + 172LL) = *(_DWORD *)(v31 + a3 + 200);
              *(_DWORD *)(*(_QWORD *)(v31 + a3 + 232) + 176LL) = *(_DWORD *)(v31 + a3 + 204);
            }
          }
          ++v27;
        }
        while ( v27 < *(unsigned __int16 *)(a3 + 20) );
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)&a9, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v58 + 40), v39, v40, v41);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v24;
}
