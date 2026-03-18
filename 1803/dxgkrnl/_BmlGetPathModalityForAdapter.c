/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C00AE424
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00AE6F0 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00AE0C8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00AE7B0 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE80C (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00BC414 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00C3680 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00C4198 (ConvertDMMScalingToGdiScaling.c)
 *     FillDevmodeFromVidPn @ 0x1C00C420C (FillDevmodeFromVidPn.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00DA978 (_BmlLogDiagnosticsPacket.c)
 */

__int64 BmlGetPathModalityForAdapter(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 *a8,
        ...)
{
  struct DMMVIDPN *v8; // rdi
  unsigned __int16 v12; // r13
  __int64 v13; // rax
  unsigned __int8 *v14; // rbx
  struct VIDPN_MGR *v15; // r12
  int ClientVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  __int64 v22; // r14
  int v23; // eax
  unsigned int v24; // r13d
  unsigned int v25; // r12d
  __int64 v26; // rdi
  struct BML_VIDPN_PATH_ORDER *v27; // rdi
  __int64 v28; // r12
  _DWORD *v29; // r13
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdi
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  unsigned __int16 v50; // [rsp+20h] [rbp-20h]
  __int64 v51; // [rsp+30h] [rbp-10h] BYREF
  struct BML_VIDPN_PATH_ORDER *v52; // [rsp+90h] [rbp+50h] BYREF
  __int64 v53; // [rsp+98h] [rbp+58h]
  struct DMMVIDPN *v54; // [rsp+C0h] [rbp+80h] BYREF
  va_list va; // [rsp+C0h] [rbp+80h]
  va_list va1; // [rsp+C8h] [rbp+88h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v54 = va_arg(va1, struct DMMVIDPN *);
  v53 = a4;
  v8 = v54;
  v12 = a1;
  *(_BYTE *)v54 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v40);
  }
  v13 = *(_QWORD *)(a4 + 2456);
  v14 = 0LL;
  v52 = 0LL;
  v15 = *(struct VIDPN_MGR **)(v13 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v51, (__int64)v15);
  v54 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v15);
  v21 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v50 = a2;
  v22 = (__int64)v54;
  v23 = BmlPreparePathOrderAndVidPn(&v52, v54, (const struct D3DKMT_GETPATHSMODALITY *)a3, v12, v50, a7);
  v14 = (unsigned __int8 *)v52;
  v21 = v23;
  if ( v23 < 0 )
    goto LABEL_19;
  v21 = BmlFunctionalizeVidPn(v52, (struct DMMVIDPN *)v22);
  if ( v21 < 0 )
  {
    *(_BYTE *)v8 = 1;
    if ( !a5 || !v22 )
      goto LABEL_19;
    v41 = a6;
    goto LABEL_31;
  }
  v24 = a6;
  v21 = BmlPickColorSpaceAndWireFormat(v14, a6, v22);
  if ( v21 < 0 )
  {
    *(_BYTE *)v8 = 1;
    if ( !a5 || !v22 )
      goto LABEL_19;
    v41 = v24;
LABEL_31:
    v42 = BmlLogDiagnosticsPacket(v15, v41, v22, v14);
    v46 = v42;
    if ( v42 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
      v47[3] = v22;
      v47[4] = v14;
      v47[5] = v46;
      WdLogEvent5_WdWarning(v47);
    }
    goto LABEL_19;
  }
  if ( a5 )
  {
    if ( v22 )
    {
      if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v22, 0) )
      {
        v35 = BmlLogDiagnosticsPacket(v15, v24, v22, v14);
        v39 = v35;
        if ( v35 < 0 )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
          v48[3] = v22;
          v48[4] = v14;
          v48[5] = v39;
          WdLogEvent5_WdWarning(v48);
        }
      }
    }
  }
  if ( a8 )
  {
    v54 = 0LL;
    *a8 = v22 & -(__int64)(v22 != -88);
    goto LABEL_19;
  }
  v21 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v22, (struct D3DKMT_GETPATHSMODALITY *)a3);
  if ( v21 >= 0 )
  {
    v25 = 0;
    v26 = v53;
    LODWORD(v53) = 0;
    v27 = *(struct BML_VIDPN_PATH_ORDER **)(v26 + 268);
    v52 = v27;
    if ( *(_WORD *)(a3 + 20) )
    {
      do
      {
        v28 = 272LL * v25;
        if ( __PAIR64__(HIDWORD(v52), (unsigned int)v27) == *(_QWORD *)(v28 + a3 + 64)
          && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v53) )
        {
          v29 = *(_DWORD **)(v28 + a3 + 272);
          if ( !v29 )
          {
            v30 = operator new[](0xF4uLL, 0x63644356u, PagedPool);
            *(_QWORD *)(v28 + a3 + 272) = v30;
            v29 = v30;
            if ( !v30 )
            {
              v49 = WdLogNewEntry5_WdLowResource(v31);
              WdLogEvent5_WdLowResource(v49);
              v21 = -1073741670;
              break;
            }
          }
          v21 = FillDevmodeFromVidPn(v22, *(unsigned int *)(v28 + a3 + 72), v29);
          if ( v21 < 0 )
            break;
          v32 = *(unsigned int *)(v28 + a3 + 188);
          v29[58] = v32;
          ConvertDMMScalingToGdiScaling(v32, v29 + 59);
          if ( (*(_DWORD *)(v28 + a3 + 48) & 0x20000) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v28 + a3 + 272) + 172LL) = *(_DWORD *)(v28 + a3 + 200);
            *(_DWORD *)(*(_QWORD *)(v28 + a3 + 272) + 176LL) = *(_DWORD *)(v28 + a3 + 204);
          }
        }
        v33 = *(unsigned __int16 *)(a3 + 20);
        v25 = v53 + 1;
        LODWORD(v53) = v25;
      }
      while ( v25 < v33 );
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)va, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40));
  if ( v14 )
    operator delete[](v14);
  return (unsigned int)v21;
}
