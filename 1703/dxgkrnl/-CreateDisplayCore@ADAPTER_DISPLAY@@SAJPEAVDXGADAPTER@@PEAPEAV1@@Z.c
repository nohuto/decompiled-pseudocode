/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01187B4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00214E8 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D31BC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01174A4 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117980 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0170654 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(
        unsigned __int64 a1,
        struct ADAPTER_DISPLAY **a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  ADAPTER_DISPLAY *v9; // rax
  __int64 v10; // rcx
  ADAPTER_DISPLAY *v11; // rdi
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx

  v5 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 3356LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 3357LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v6 = *((_QWORD *)v5 + 59);
  if ( !v6
    || !*((_QWORD *)v5 + 60)
    || !*((_QWORD *)v5 + 61)
    || !*((_QWORD *)v5 + 63)
    || !*((_QWORD *)v5 + 64) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v5)
    || !*((_QWORD *)v5 + 65) && (int)DXGADAPTER::GetDriverVersion(v5) < 2200
    || !*((_QWORD *)v5 + 52)
    || !*((_QWORD *)v5 + 53) )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v5) < 1200 && (*((_DWORD *)v5 + 75) & 0x10) == 0
      || v7
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
      || *((_QWORD *)v5 + 130)
      || *((_QWORD *)v5 + 131)
      || *((_QWORD *)v5 + 132)
      || *((_QWORD *)v5 + 133) )
    {
      goto LABEL_46;
    }
    if ( *((_DWORD *)v5 + 290) || *((_DWORD *)v5 + 291) )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v16[3] = *((unsigned int *)v5 + 290);
      v23 = *((unsigned int *)v5 + 291);
      v17 = -1073741735;
      v16[5] = -1073741735LL;
      v16[4] = v23;
      goto LABEL_91;
    }
    goto LABEL_68;
  }
  if ( *((_QWORD *)v5 + 286) )
  {
    if ( !*((_QWORD *)v5 + 62)
      || !*((_QWORD *)v5 + 68)
      || !*((_QWORD *)v5 + 51) && (int)DXGADAPTER::GetDriverVersion(v5) < 1200 )
    {
LABEL_46:
      v16 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v16[3] = v5;
      v17 = -1073741735;
      v16[4] = -1073741735LL;
LABEL_91:
      WdLogEvent5_WdError(v16);
      return v17;
    }
  }
  else
  {
    if ( !*((_QWORD *)v5 + 88) )
      goto LABEL_46;
    a1 = *((_QWORD *)v5 + 70) == 0LL;
    if ( (*((_QWORD *)v5 + 68) == 0LL) != (_DWORD)a1 )
      goto LABEL_46;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, v6, a4) + 24) = v5;
  if ( (int)DXGADAPTER::GetDriverVersion(v5) >= 1200 && !*((_DWORD *)v5 + 290) && !*((_DWORD *)v5 + 291) )
  {
LABEL_68:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, v7, v8) + 24) = v5;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 290) - 1) > 0xF )
  {
    v20 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v20 + 24) = v5;
    v21 = *((unsigned int *)v5 + 290);
    goto LABEL_86;
  }
  if ( !*((_DWORD *)v5 + 291) )
  {
    v20 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v20 + 24) = v5;
    v21 = *((unsigned int *)v5 + 291);
LABEL_86:
    *(_QWORD *)(v20 + 32) = v21;
    goto LABEL_87;
  }
  if ( *((_BYTE *)v5 + 2204) && *((int *)v5 + 486) >= 4608 && (!*((_BYTE *)v5 + 2144) || !*((_BYTE *)v5 + 2145)) )
  {
    v20 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v20 + 24) = 3529LL;
LABEL_87:
    WdLogEvent5_WdError(v20);
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
  if ( !*((_QWORD *)v5 + 131) )
    *((_QWORD *)v5 + 131) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 132) )
    *((_QWORD *)v5 + 132) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 133) )
    *((_QWORD *)v5 + 133) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 84) )
    *((_QWORD *)v5 + 84) = DxgkQueryFSEBlock;
  v9 = (ADAPTER_DISPLAY *)operator new(0x1B8uLL, (__int64)a2, 1, (POOL_TYPE)512);
  if ( v9 )
    v11 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v9, v5);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v22 = WdLogNewEntry5_WdLowResource(v10);
    v17 = -1073741801;
    *(_QWORD *)(v22 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v22);
    return v17;
  }
  v13 = ADAPTER_DISPLAY::Initialize(v11);
  if ( v13 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v11);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v11);
  }
  else
  {
    v14 = WdLogNewEntry5_WdEvent(v12);
    *(_QWORD *)(v14 + 24) = v11;
    *(_QWORD *)(v14 + 32) = v5;
    WdLogEvent5_WdEvent(v14);
    *a2 = v11;
  }
  return (unsigned int)v13;
}
