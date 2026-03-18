/*
 * XREFs of ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C009F590
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00CEE80 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00D3674 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuid(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_OPENADAPTERFROMLUID *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // rbx
  ADAPTER_RENDER *v15; // rcx
  unsigned int v16; // esi
  _DWORD *p_hAdapter; // r8
  ULONG64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _LUID AdapterLuid; // [rsp+20h] [rbp-38h]
  unsigned int v29; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v30[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v31; // [rsp+38h] [rbp-20h]
  char v32; // [rsp+40h] [rbp-18h]
  unsigned __int64 v33; // [rsp+68h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2082);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
  AdapterLuid = v4->AdapterLuid;
  v29 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    Global = DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v33);
    v14 = v9;
    if ( v9 )
    {
      v31 = v9;
      v32 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
      if ( *((_DWORD *)v14 + 44) == 1
        && !*((_BYTE *)v14 + 2205)
        && (v15 = (ADAPTER_RENDER *)*((_QWORD *)v14 + 286)) != 0LL
        && ADAPTER_RENDER::IsProcessGpuAccessBlocked(v15, Current) )
      {
        v25 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v25 + 24) = v14;
        *(_QWORD *)(v25 + 32) = Current;
        WdLogEvent5_WdEvent(v25);
        DXGADAPTER::ReleaseReference(v14);
        if ( v32 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v26, &EventProfilerExit, v27, 2082);
        return 3221225506LL;
      }
      else
      {
        v16 = DXGADAPTER::CreateHandle(v14, Current, &v29);
        DXGADAPTER::ReleaseReference(v14);
        p_hAdapter = &a1->hAdapter;
        v18 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = v29;
        if ( v32 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v18, &EventProfilerExit, (__int64)p_hAdapter, 2082);
        return v16;
      }
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v24[3] = AdapterLuid.LowPart;
    v24[4] = AdapterLuid.HighPart;
    v24[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
    v23 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    v22 = qword_1C006E790;
    v23 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v21, 2082);
  return 3221225485LL;
}
