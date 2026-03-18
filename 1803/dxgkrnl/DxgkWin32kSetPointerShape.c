/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1C01B01C0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ACBF8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        int a4)
{
  __int64 v8; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int Value; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]
  unsigned __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v21 = 0LL;
  v20 = 2129;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2129);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2129);
  if ( !a3 )
    goto LABEL_13;
  Global = DXGGLOBAL::GetGlobal(v8);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v22);
  v12 = v10;
  if ( !v10 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
LABEL_12:
    WdLogEvent5_WdError(v13);
LABEL_13:
    v16 = -1073741811;
    goto LABEL_14;
  }
  v14 = *(unsigned int *)(*((_QWORD *)v10 + 307) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v14 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
    v13[5] = a2->VidPnSourceId;
    goto LABEL_12;
  }
  v16 = DxgkSetPointerShape(v12, a2, a3, a3->Width, a3->Height, a4, 1);
  DXGADAPTER::ReleaseReferenceNoTracking(v12);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v20);
  return v16;
}
