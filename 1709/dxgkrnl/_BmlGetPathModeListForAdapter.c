/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x1C01F8B44
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F8240 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D241C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00F3D24 (_BmlLogDiagnosticsPacket.c)
 *     _BmlGetPathModeListForPath @ 0x1C01F8CEC (_BmlGetPathModeListForPath.c)
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
  unsigned int PathModeListForPath; // esi
  const struct D3DKMT_GETPATHSMODALITY *v22; // r8
  struct DMMVIDPN *v23; // rdi
  int v24; // eax
  struct BML_VIDPN_PATH_ORDER *v25; // rcx
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbp
  _QWORD *v33; // rax
  struct DMMVIDPN *v35; // [rsp+70h] [rbp+18h] BYREF
  __int64 v36; // [rsp+78h] [rbp+20h] BYREF

  v8 = *(_WORD *)(a3 + 20) == 0;
  v10 = a8;
  v13 = a1;
  *(_BYTE *)a8 = 0;
  if ( v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(a4 + 2304);
  v16 = 0LL;
  a8 = 0LL;
  v17 = *(struct VIDPN_MGR **)(v15 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v36, (__int64)v17);
  v35 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v17, (__int64 *)&v35);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn >= 0 )
  {
    v22 = (const struct D3DKMT_GETPATHSMODALITY *)a3;
    v23 = v35;
    v24 = BmlPreparePathOrderAndVidPn(&a8, v35, v22, v13, a2, a7);
    v16 = (unsigned __int8 *)a8;
    PathModeListForPath = v24;
    if ( v24 >= 0 )
    {
      if ( *(_BYTE *)a8 <= 1u
        || (v25 = a8, --*(_BYTE *)a8, v26 = BmlFunctionalizeVidPn(v25, v23), ++*v16, PathModeListForPath = v26, v26 >= 0) )
      {
        PathModeListForPath = BmlGetPathModeListForPath((int)v16, (int)v23);
      }
      else
      {
        v27 = a5 == 0;
        *(_BYTE *)v10 = 1;
        if ( !v27 )
        {
          if ( v23 )
          {
            v28 = BmlLogDiagnosticsPacket((DXGDIAGNOSTICS **)v17, a6, (__int64)v23, v16);
            v32 = v28;
            if ( v28 < 0 )
            {
              v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
              v33[3] = v23;
              v33[4] = v16;
              v33[5] = v32;
              WdLogEvent5_WdWarning(v33);
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19) + 24) = ClientVidPn;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v35, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40));
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return PathModeListForPath;
}
