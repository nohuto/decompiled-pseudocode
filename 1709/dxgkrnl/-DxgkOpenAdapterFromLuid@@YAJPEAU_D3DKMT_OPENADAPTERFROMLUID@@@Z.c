/*
 * XREFs of ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00F3580
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C0082600 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0084CB0 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuid(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_OPENADAPTERFROMLUID *v4; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rbx
  VIDSCH_EXPORT **v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  _DWORD *p_hAdapter; // r8
  ULONG64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  bool v25; // zf
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _LUID AdapterLuid; // [rsp+20h] [rbp-38h]
  unsigned int v31; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v32[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v33; // [rsp+38h] [rbp-20h]
  char v34; // [rsp+40h] [rbp-18h]
  unsigned __int64 v35; // [rsp+68h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2082);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
  AdapterLuid = v4->AdapterLuid;
  v31 = 0;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, a2);
  if ( Current )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v35);
    v12 = v8;
    if ( v8 )
    {
      v33 = v8;
      v34 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
      if ( *((_DWORD *)v12 + 44) == 1
        && !*((_BYTE *)v12 + 2229)
        && (v13 = (VIDSCH_EXPORT **)*((_QWORD *)v12 + 289)) != 0LL
        && ADAPTER_RENDER::IsProcessGpuAccessBlocked(v13, Current) )
      {
        v27 = WdLogNewEntry5_WdEvent(v15, v14, v16, v17);
        *(_QWORD *)(v27 + 24) = v12;
        *(_QWORD *)(v27 + 32) = Current;
        WdLogEvent5_WdEvent(v27);
        DXGADAPTER::ReleaseReferenceNoTracking(v12);
        if ( v34 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v28, &EventProfilerExit, v29, 2082);
        return 3221225506LL;
      }
      else
      {
        v18 = DXGADAPTER::CreateHandle(v12, Current, &v31);
        DXGADAPTER::ReleaseReferenceNoTracking(v12);
        p_hAdapter = &a1->hAdapter;
        v20 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = v31;
        if ( v34 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v20, &EventProfilerExit, (__int64)p_hAdapter, 2082);
        return v18;
      }
    }
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v26[3] = AdapterLuid.LowPart;
    v26[4] = AdapterLuid.HighPart;
    v26[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    v25 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    v24 = qword_1C005F010;
    v25 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v23, 2082);
  return 3221225485LL;
}
