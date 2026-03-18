/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x1C02268A8
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0226044 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00C3680 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00DA978 (_BmlLogDiagnosticsPacket.c)
 *     _BmlGetPathModeListForPath @ 0x1C0226A4C (_BmlGetPathModeListForPath.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        unsigned int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  bool v8; // cf
  struct BML_VIDPN_PATH_ORDER *v10; // r14
  __int16 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 *v16; // rbx
  struct VIDPN_MGR *v17; // rbp
  int ClientVidPn; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int PathModeListForPath; // esi
  const struct D3DKMT_GETPATHSMODALITY *v24; // r8
  struct DMMVIDPN *v25; // rdi
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  struct BML_VIDPN_PATH_ORDER *v29; // rcx
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbp
  _QWORD *v37; // rax
  struct DMMVIDPN *v39; // [rsp+70h] [rbp+18h] BYREF
  __int64 v40; // [rsp+78h] [rbp+20h] BYREF

  v8 = *(_WORD *)(a3 + 20) == 0;
  v10 = a8;
  v13 = a1;
  *(_BYTE *)a8 = 0;
  if ( v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(a4 + 2456);
  v16 = 0LL;
  a8 = 0LL;
  v17 = *(struct VIDPN_MGR **)(v15 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v40, (__int64)v17);
  v39 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v17, (__int64 *)&v39);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn >= 0 )
  {
    v24 = (const struct D3DKMT_GETPATHSMODALITY *)a3;
    v25 = v39;
    v26 = BmlPreparePathOrderAndVidPn(&a8, v39, v24, v13, a2, a7);
    v16 = (unsigned __int8 *)a8;
    PathModeListForPath = v26;
    if ( v26 >= 0 )
    {
      if ( *(_BYTE *)a8 <= 1u
        || (v29 = a8,
            --*(_BYTE *)a8,
            v30 = BmlFunctionalizeVidPn(v29, v25, v27, v28),
            ++*v16,
            PathModeListForPath = v30,
            v30 >= 0) )
      {
        PathModeListForPath = BmlGetPathModeListForPath((int)v16, (int)v25);
      }
      else
      {
        v31 = a5 == 0;
        *(_BYTE *)v10 = 1;
        if ( !v31 )
        {
          if ( v25 )
          {
            v32 = BmlLogDiagnosticsPacket((DXGDIAGNOSTICS **)v17, a6, (__int64)v25, v16);
            v36 = v32;
            if ( v32 < 0 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
              v37[3] = v25;
              v37[4] = v16;
              v37[5] = v36;
              WdLogEvent5_WdWarning(v37);
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = ClientVidPn;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v39, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v40 + 40));
  if ( v16 )
    operator delete[](v16);
  return PathModeListForPath;
}
