/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x1C00C3940
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C4BD8 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C00C3D68 (-GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z.c)
 *     DxgkGetPathsModality @ 0x1C00C4CF0 (DxgkGetPathsModality.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // edi
  int v15; // eax
  struct DXGGLOBAL *v16; // rax
  __int64 (__fastcall *v17)(struct DXGADAPTER *, void *); // rdx
  _QWORD *v18; // rax
  int PathsModality; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h]
  unsigned __int16 v24; // [rsp+50h] [rbp+20h] BYREF
  __int64 v25; // [rsp+60h] [rbp+30h] BYREF

  v23 = 0LL;
  v4 = (unsigned int)a1;
  v22 = 2174;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2174);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2174);
  v25 = (unsigned int)v4;
  Global = DXGGLOBAL::GetGlobal(v5);
  LODWORD(v9) = QDC_CACHE::GetCahcedBufferSizes(*((QDC_CACHE **)Global + 127), (unsigned int)v4 & 0xFFFFFFEF, a2);
  if ( (int)v9 < 0 )
  {
    v14 = 1;
    if ( (v4 & 0x40000000) == 0 )
    {
      v15 = v4 & 7;
      if ( v15 == 1 )
      {
        v16 = DXGGLOBAL::GetGlobal(v8);
        v17 = CalcAllPathDisplayConfigBufferSizeCallback;
        goto LABEL_9;
      }
      if ( v15 == 2 )
      {
        v16 = DXGGLOBAL::GetGlobal(v8);
        v17 = CalcActivePathDisplayConfigBufferSizeCallback;
LABEL_9:
        LODWORD(v9) = DXGGLOBAL::IterateAdaptersWithCallback(v16, v17, &v25, 1LL);
LABEL_10:
        if ( (int)v9 < 0 )
        {
LABEL_14:
          v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
          v18[4] = (int)v9;
          v18[3] = v4;
          v18[5] = *a2;
          WdLogEvent5_WdEvent(v18);
          goto LABEL_3;
        }
        v14 = HIDWORD(v25);
LABEL_12:
        *a2 = v14;
        if ( !v14 )
          LODWORD(v9) = -1073741637;
        goto LABEL_14;
      }
      if ( v15 != 4 )
      {
        LODWORD(v9) = -1073741811;
        v21 = WdLogNewEntry5_WdWarning(v8, v7, v10);
        *(_QWORD *)(v21 + 24) = v4;
        WdLogEvent5_WdWarning(v21);
        goto LABEL_10;
      }
      PathsModality = DxgkGetPathsModality(15LL, 0LL, &v24);
      v9 = PathsModality;
      if ( PathsModality != -1073741789 )
      {
        v20 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v20 + 24) = v9;
        WdLogEvent5_WdError(v20);
        if ( (int)v9 >= 0 )
          LODWORD(v9) = -1073741823;
        goto LABEL_3;
      }
      v14 = v24;
    }
    LODWORD(v9) = 0;
    HIDWORD(v25) = v14;
    goto LABEL_12;
  }
LABEL_3:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v22);
  return (unsigned int)v9;
}
