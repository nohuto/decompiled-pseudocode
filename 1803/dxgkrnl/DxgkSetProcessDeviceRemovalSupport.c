/*
 * XREFs of DxgkSetProcessDeviceRemovalSupport @ 0x1C01B9620
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v3 = (_BYTE *)a1;
  LODWORD(v4) = 0;
  v15 = 0LL;
  v14 = 2155;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2155);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2155);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    v4 = -1073741811LL;
LABEL_6:
    *(_QWORD *)(v9 + 24) = v4;
    WdLogEvent5_WdError(v9);
    goto LABEL_7;
  }
  if ( *((_BYTE *)Current + 288) )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    v4 = -1073741823LL;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_BYTE *)MmUserProbeAddress;
  v13 = 1LL;
  if ( !*v3 )
    v13 = 2LL;
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)Current + 210, v13, 0) )
  {
    v9 = WdLogNewEntry5_WdError(v13);
    v4 = -1073740528LL;
    goto LABEL_6;
  }
LABEL_7:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v14);
  return (unsigned int)v4;
}
