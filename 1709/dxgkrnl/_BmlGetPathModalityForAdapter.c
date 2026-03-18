/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C00D1DD8
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00D1D18 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00A5664 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D15E8 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00D1934 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C00D1990 (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00D1CA4 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D20AC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D241C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00F3D24 (_BmlLogDiagnosticsPacket.c)
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
  PVOID v9; // rbx
  unsigned __int16 v13; // r13
  __int64 v14; // rax
  struct VIDPN_MGR *v15; // r12
  int ClientVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // r14
  int v21; // eax
  unsigned int v22; // r13d
  unsigned int v23; // r13d
  __int64 v24; // rdi
  __int64 v25; // r12
  PVOID v26; // rax
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // r8
  _DWORD *v30; // rdx
  __int64 v31; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdi
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  unsigned __int16 v48; // [rsp+20h] [rbp-20h]
  __int64 v49; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+90h] [rbp+50h] BYREF
  __int64 i; // [rsp+98h] [rbp+58h]
  struct DMMVIDPN *v52; // [rsp+C0h] [rbp+80h] BYREF
  va_list va; // [rsp+C0h] [rbp+80h]
  va_list va1; // [rsp+C8h] [rbp+88h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v52 = va_arg(va1, struct DMMVIDPN *);
  i = a4;
  v8 = v52;
  v9 = 0LL;
  v13 = a1;
  *(_BYTE *)v52 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v38);
  }
  v14 = *(_QWORD *)(a4 + 2304);
  P = 0LL;
  v15 = *(struct VIDPN_MGR **)(v14 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v49, (__int64)v15);
  v52 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v15, (__int64 *)va);
  v19 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v48 = a2;
  v20 = (__int64)v52;
  v21 = BmlPreparePathOrderAndVidPn(
          (struct BML_VIDPN_PATH_ORDER **)&P,
          v52,
          (const struct D3DKMT_GETPATHSMODALITY *)a3,
          v13,
          v48,
          a7);
  v9 = P;
  v19 = v21;
  if ( v21 < 0 )
    goto LABEL_19;
  v19 = BmlFunctionalizeVidPn((const struct BML_VIDPN_PATH_ORDER *)P, (struct DMMVIDPN *)v20);
  if ( v19 < 0 )
  {
    *(_BYTE *)v8 = 1;
    if ( !a5 || !v20 )
      goto LABEL_19;
    v39 = a6;
    goto LABEL_34;
  }
  v22 = a6;
  v19 = BmlPickColorSpaceAndWireFormat(v9, a6, v20);
  if ( v19 < 0 )
  {
    *(_BYTE *)v8 = 1;
    if ( !a5 || !v20 )
      goto LABEL_19;
    v39 = v22;
LABEL_34:
    v40 = BmlLogDiagnosticsPacket(v15, v39, v20, v9);
    v44 = v40;
    if ( v40 < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
      v45[3] = v20;
      v45[4] = v9;
      v45[5] = v44;
      WdLogEvent5_WdWarning(v45);
    }
    goto LABEL_19;
  }
  if ( a5 )
  {
    if ( v20 )
    {
      if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v20) )
      {
        v33 = BmlLogDiagnosticsPacket(v15, v22, v20, v9);
        v37 = v33;
        if ( v33 < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
          v46[3] = v20;
          v46[4] = v9;
          v46[5] = v37;
          WdLogEvent5_WdWarning(v46);
        }
      }
    }
  }
  if ( a8 )
  {
    v52 = 0LL;
    *a8 = v20 & -(__int64)(v20 != -88);
    goto LABEL_19;
  }
  v19 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v20, (struct D3DKMT_GETPATHSMODALITY *)a3);
  if ( v19 >= 0 )
  {
    v23 = 0;
    v24 = *(_QWORD *)(i + 268);
    for ( i = v24; v23 < *(unsigned __int16 *)(a3 + 20); ++v23 )
    {
      v25 = 264LL * v23;
      if ( __PAIR64__(HIDWORD(i), v24) == *(_QWORD *)(v25 + a3 + 64)
        && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v23) )
      {
        if ( !*(_QWORD *)(v25 + a3 + 264) )
        {
          v26 = operator new(0xF4uLL, 0x63644356u, PagedPool);
          *(_QWORD *)(v25 + a3 + 264) = v26;
          if ( !v26 )
          {
            v47 = WdLogNewEntry5_WdLowResource(v27);
            WdLogEvent5_WdLowResource(v47);
            v19 = -1073741670;
            break;
          }
        }
        v28 = *(_DWORD *)(v25 + a3 + 72);
        P = *(PVOID *)(v25 + a3 + 264);
        v19 = FillDevmodeFromVidPn(v20, v28, P);
        if ( v19 < 0 )
          break;
        v30 = P;
        v31 = *(unsigned int *)(v25 + a3 + 188);
        *((_DWORD *)P + 58) = v31;
        ConvertDMMScalingToGdiScaling(v31, v30 + 59, v29);
        if ( (*(_DWORD *)(v25 + a3 + 48) & 0x20000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v25 + a3 + 264) + 172LL) = *(_DWORD *)(v25 + a3 + 200);
          *(_DWORD *)(*(_QWORD *)(v25 + a3 + 264) + 176LL) = *(_DWORD *)(v25 + a3 + 204);
        }
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)va, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v49 + 40));
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v19;
}
