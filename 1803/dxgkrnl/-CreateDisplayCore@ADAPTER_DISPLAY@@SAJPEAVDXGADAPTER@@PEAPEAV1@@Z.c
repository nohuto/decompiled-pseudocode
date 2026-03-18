/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0151F14
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00251A0 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48FC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0150488 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01528D0 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(
        struct DXGADAPTER *a1,
        struct ADAPTER_DISPLAY **a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  _QWORD *v11; // rax
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  ADAPTER_DISPLAY *v19; // rax
  __int64 v20; // rcx
  ADAPTER_DISPLAY *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rax
  __int64 v27; // rcx

  v5 = a1;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v6 + 24) = 3904LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 3905LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)v5 + 59);
  if ( !v8
    || !*((_QWORD *)v5 + 60)
    || !*((_QWORD *)v5 + 61)
    || !*((_QWORD *)v5 + 63)
    || !*((_QWORD *)v5 + 64) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v5)
    || !*((_QWORD *)v5 + 65) && (int)DXGADAPTER::GetDriverVersion(v5) < 2200
    || !*((_QWORD *)v5 + 52)
    || !*((_QWORD *)v5 + 53) )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v5) < 1200 && (*((_DWORD *)v5 + 75) & 0x10) == 0
      || v15
      || *((_QWORD *)v5 + 60)
      || *((_QWORD *)v5 + 61)
      || *((_QWORD *)v5 + 62)
      || *((_QWORD *)v5 + 63)
      || *((_QWORD *)v5 + 64)
      || *((_QWORD *)v5 + 65)
      || *((_QWORD *)v5 + 51)
      || *((_QWORD *)v5 + 52)
      || *((_QWORD *)v5 + 53)
      || *((_QWORD *)v5 + 68)
      || *((_QWORD *)v5 + 66)
      || *((_QWORD *)v5 + 67)
      || *((_QWORD *)v5 + 82)
      || *((_QWORD *)v5 + 131)
      || *((_QWORD *)v5 + 132)
      || *((_QWORD *)v5 + 133)
      || *((_QWORD *)v5 + 134) )
    {
      goto LABEL_23;
    }
    if ( *((_DWORD *)v5 + 320) || *((_DWORD *)v5 + 321) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v11[3] = *((unsigned int *)v5 + 320);
      v27 = *((unsigned int *)v5 + 321);
      v12 = -1073741735;
      v11[5] = -1073741735LL;
      v11[4] = v27;
      goto LABEL_24;
    }
LABEL_89:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v14, v15, v16) + 24) = v5;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( *((_QWORD *)v5 + 308) )
  {
    v10 = DXGADAPTER::DriverSupportSetTimingsFromVidPn(v5) == 0;
    v9 = 0;
    if ( v10 )
      v10 = *((_QWORD *)v5 + 62) == 0LL;
    else
      v10 = *((_QWORD *)v5 + 113) == 0LL;
    LOBYTE(v9) = v10;
    if ( v9 || !*((_QWORD *)v5 + 68) || !*((_QWORD *)v5 + 51) && (int)DXGADAPTER::GetDriverVersion(a1) < 1200 )
      goto LABEL_23;
  }
  else if ( !*((_QWORD *)v5 + 88)
         || (a1 = (struct DXGADAPTER *)(*((_QWORD *)v5 + 70) == 0LL), (*((_QWORD *)v5 + 68) == 0LL) != (_DWORD)a1) )
  {
LABEL_23:
    v11 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v11[3] = v5;
    v12 = -1073741735;
    v11[4] = -1073741735LL;
LABEL_24:
    WdLogEvent5_WdError(v11);
    return v12;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, v8, a4) + 24) = v5;
  if ( (int)DXGADAPTER::GetDriverVersion(v5) >= 1200 && !*((_DWORD *)v5 + 320) && !*((_DWORD *)v5 + 321) )
    goto LABEL_89;
  if ( (unsigned int)(*((_DWORD *)v5 + 320) - 1) > 0xF )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = v5;
    v18 = *((unsigned int *)v5 + 320);
    goto LABEL_65;
  }
  if ( !*((_DWORD *)v5 + 321) )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = v5;
    v18 = *((unsigned int *)v5 + 321);
LABEL_65:
    *(_QWORD *)(v17 + 32) = v18;
    goto LABEL_66;
  }
  if ( *((_BYTE *)v5 + 2372) && *((int *)v5 + 526) >= 4608 && (!*((_BYTE *)v5 + 2304) || !*((_BYTE *)v5 + 2305)) )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = 4079LL;
LABEL_66:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v5 + 66) )
    *((_QWORD *)v5 + 66) = SwapChainObOpenProcedure;
  if ( !*((_QWORD *)v5 + 67) )
    *((_QWORD *)v5 + 67) = ADAPTER_DISPLAY::DefaultDdiRecommendVidPnTopology;
  if ( !*((_QWORD *)v5 + 82) )
    *((_QWORD *)v5 + 82) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)v5 + 119) )
    *((_QWORD *)v5 + 119) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 132) )
    *((_QWORD *)v5 + 132) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 133) )
    *((_QWORD *)v5 + 133) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 134) )
    *((_QWORD *)v5 + 134) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 84) )
    *((_QWORD *)v5 + 84) = DxgkQueryFSEBlock;
  v19 = (ADAPTER_DISPLAY *)operator new(0x208uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v19 )
    v21 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v19, v5);
  else
    v21 = 0LL;
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdLowResource(v20);
    v12 = -1073741801;
    *(_QWORD *)(v22 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v22);
    return v12;
  }
  v25 = ADAPTER_DISPLAY::Initialize(v21);
  if ( v25 >= 0 )
  {
    v26 = WdLogNewEntry5_WdEvent(v24, v23);
    *(_QWORD *)(v26 + 24) = v21;
    *(_QWORD *)(v26 + 32) = v5;
    WdLogEvent5_WdEvent(v26);
    *a2 = v21;
  }
  else
  {
    ADAPTER_DISPLAY::Destroy(v21);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v21);
  }
  return (unsigned int)v25;
}
