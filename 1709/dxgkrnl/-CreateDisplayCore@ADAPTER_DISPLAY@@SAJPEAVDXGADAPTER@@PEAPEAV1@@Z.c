/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116864
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C001E2EC (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844DC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0105F5C (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0106688 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0173D5C (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(struct DXGADAPTER *a1, struct ADAPTER_DISPLAY **a2)
{
  struct DXGADAPTER *v3; // rbx
  __int64 v4; // rdx
  ADAPTER_DISPLAY *v5; // rax
  __int64 v6; // rcx
  ADAPTER_DISPLAY *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  int DriverVersion; // eax
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx

  v3 = a1;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v18 + 24) = 3891LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v19 + 24) = 3892LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*((_QWORD *)v3 + 59)
    || !*((_QWORD *)v3 + 60)
    || !*((_QWORD *)v3 + 61)
    || !*((_QWORD *)v3 + 63)
    || !*((_QWORD *)v3 + 64) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v3)
    || !*((_QWORD *)v3 + 65) && (int)DXGADAPTER::GetDriverVersion(v3) < 2200
    || !*((_QWORD *)v3 + 52)
    || !*((_QWORD *)v3 + 53) )
  {
    if ( ((int)DXGADAPTER::GetDriverVersion(v3) >= 1200 || (*((_DWORD *)v3 + 75) & 0x10) != 0)
      && !v15
      && !*((_QWORD *)v3 + 60)
      && !*((_QWORD *)v3 + 61)
      && !*((_QWORD *)v3 + 62)
      && !*((_QWORD *)v3 + 63)
      && !*((_QWORD *)v3 + 64)
      && !*((_QWORD *)v3 + 65)
      && !*((_QWORD *)v3 + 51)
      && !*((_QWORD *)v3 + 52)
      && !*((_QWORD *)v3 + 53)
      && !*((_QWORD *)v3 + 68)
      && !*((_QWORD *)v3 + 66)
      && !*((_QWORD *)v3 + 67)
      && !*((_QWORD *)v3 + 82)
      && !*((_QWORD *)v3 + 130)
      && !*((_QWORD *)v3 + 131)
      && !*((_QWORD *)v3 + 132)
      && !*((_QWORD *)v3 + 133) )
    {
      if ( !*((_DWORD *)v3 + 296) && !*((_DWORD *)v3 + 297) )
        goto LABEL_64;
      v21 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v21[3] = *((unsigned int *)v3 + 296);
      v26 = *((unsigned int *)v3 + 297);
      v22 = -1073741735;
      v21[5] = -1073741735LL;
      v21[4] = v26;
LABEL_78:
      WdLogEvent5_WdError(v21);
      return v22;
    }
    goto LABEL_77;
  }
  if ( !*((_QWORD *)v3 + 289) )
  {
    if ( *((_QWORD *)v3 + 88) )
    {
      a1 = (struct DXGADAPTER *)(*((_QWORD *)v3 + 70) == 0LL);
      if ( (*((_QWORD *)v3 + 68) == 0LL) == (_DWORD)a1 )
        goto LABEL_16;
    }
    goto LABEL_77;
  }
  v17 = DXGADAPTER::DriverSupportSetTimingsFromVidPn(v3) == 0;
  v16 = 0;
  if ( v17 )
    v17 = *((_QWORD *)v3 + 62) == 0LL;
  else
    v17 = *((_QWORD *)v3 + 113) == 0LL;
  LOBYTE(v16) = v17;
  if ( v16
    || !*((_QWORD *)v3 + 68)
    || !*((_QWORD *)v3 + 51) && (DriverVersion = DXGADAPTER::GetDriverVersion(a1), DriverVersion < 1200) )
  {
LABEL_77:
    v21 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v21[3] = v3;
    v22 = -1073741735;
    v21[4] = -1073741735LL;
    goto LABEL_78;
  }
LABEL_16:
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = v3;
  if ( (int)DXGADAPTER::GetDriverVersion(v3) >= 1200 && !*((_DWORD *)v3 + 296) && !*((_DWORD *)v3 + 297) )
  {
LABEL_64:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v4) + 24) = v3;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v3 + 296) - 1) > 0xF )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = v3;
    v24 = *((unsigned int *)v3 + 296);
    goto LABEL_91;
  }
  if ( !*((_DWORD *)v3 + 297) )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = v3;
    v24 = *((unsigned int *)v3 + 297);
LABEL_91:
    *(_QWORD *)(v23 + 32) = v24;
    goto LABEL_92;
  }
  if ( *((_BYTE *)v3 + 2228) && *((int *)v3 + 492) >= 4608 && (!*((_BYTE *)v3 + 2168) || !*((_BYTE *)v3 + 2169)) )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = 4066LL;
LABEL_92:
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v3 + 66) )
    *((_QWORD *)v3 + 66) = SwapChainObOpenProcedure;
  if ( !*((_QWORD *)v3 + 67) )
    *((_QWORD *)v3 + 67) = ADAPTER_DISPLAY::DefaultDdiRecommendVidPnTopology;
  if ( !*((_QWORD *)v3 + 82) )
    *((_QWORD *)v3 + 82) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)v3 + 119) )
    *((_QWORD *)v3 + 119) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v3 + 131) )
    *((_QWORD *)v3 + 131) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v3 + 132) )
    *((_QWORD *)v3 + 132) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v3 + 133) )
    *((_QWORD *)v3 + 133) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v3 + 84) )
    *((_QWORD *)v3 + 84) = DxgkQueryFSEBlock;
  v5 = (ADAPTER_DISPLAY *)operator new(0x1F0uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v5 )
    v7 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v5, v3);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v25 = WdLogNewEntry5_WdLowResource(v6);
    v22 = -1073741801;
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v25);
    return v22;
  }
  v10 = ADAPTER_DISPLAY::Initialize(v7);
  if ( v10 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v7);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v7);
  }
  else
  {
    v13 = WdLogNewEntry5_WdEvent(v9, v8, v11, v12);
    *(_QWORD *)(v13 + 24) = v7;
    *(_QWORD *)(v13 + 32) = v3;
    WdLogEvent5_WdEvent(v13);
    *a2 = v7;
  }
  return (unsigned int)v10;
}
