/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C00DB490
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C0030624 (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00DB5D0 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkCaptureQueryInterface @ 0x1C016E750 (DxgkCaptureQueryInterface.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C0197568 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  struct DXGKW32KIMPORTS **Global; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 (__fastcall *v29)(); // rax
  struct DXGGLOBAL *v30; // rax
  int v31; // [rsp+20h] [rbp-10h] BYREF
  __int64 v32; // [rsp+28h] [rbp-8h]
  unsigned int v33; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  v31 = 2;
  v32 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2);
  v8 = *(unsigned int **)(a2 + 184);
  v33 = 0;
  v9 = v8[6];
  v10 = v8[2];
  v11 = v8[4];
  if ( *(_BYTE *)(a2 + 64) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v20 + 24) = 1139LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( (v9 & 3) != 3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v21 + 24) = 1145LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v12 = *(_QWORD *)(a2 + 112);
  if ( (_DWORD)v9 != 2293767 )
  {
    if ( (_DWORD)v9 == 2293823 )
    {
      if ( (unsigned int)v10 >= 8 && v12 )
      {
        v29 = (__int64 (__fastcall *)())DpiInitialize;
        goto LABEL_47;
      }
    }
    else if ( (_DWORD)v9 == 2293827 )
    {
      if ( (unsigned int)v10 >= 8 && v12 )
      {
        v29 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
        goto LABEL_47;
      }
    }
    else if ( (_DWORD)v9 == 2293831 )
    {
      if ( (unsigned int)v10 >= 8 && v12 )
      {
        v29 = (__int64 (__fastcall *)())DpiInitializeWin8;
        goto LABEL_47;
      }
    }
    else if ( (_DWORD)v9 == 2293835 )
    {
      if ( (unsigned int)v10 >= 8 && v12 )
      {
        v29 = DpiUnInitialize;
        goto LABEL_47;
      }
    }
    else
    {
      if ( (_DWORD)v9 != 2302051 )
      {
        if ( (_DWORD)v9 != 2351191 )
        {
          if ( (_DWORD)v9 == 2351195 )
          {
            if ( (unsigned int)v11 >= 0x210 && (unsigned int)v10 >= 0x210 )
            {
              v13 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v33);
              goto LABEL_17;
            }
          }
          else
          {
            if ( (_DWORD)v9 != 2351199 )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
              LODWORD(v10) = -1073741808;
              v22[3] = v9;
              v22[4] = -1073741808LL;
LABEL_57:
              WdLogEvent5_WdWarning(v22);
              goto LABEL_20;
            }
            if ( (unsigned int)v11 >= 0x30 && (unsigned int)v10 >= 0x30 )
            {
              v13 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v33);
LABEL_17:
              v10 = v13;
              if ( v13 < 0 )
              {
                v23 = WdLogNewEntry5_WdWarning(v15, v14, v16);
                *(_QWORD *)(v23 + 24) = v10;
                WdLogEvent5_WdWarning(v23);
              }
              goto LABEL_19;
            }
          }
          v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
          v22[3] = v11;
          v22[4] = v10;
          v10 = -1073741306LL;
LABEL_31:
          v22[5] = v10;
          goto LABEL_57;
        }
        if ( (unsigned int)v11 < 0x890 || (unsigned int)v10 < 0x890 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdAssertion(v6);
          v28[4] = v10;
          LODWORD(v10) = -1073741306;
          v28[6] = -1073741306LL;
          v28[3] = v11;
          v28[5] = 2192LL;
          WdLogEvent5_WdAssertion(v28);
          goto LABEL_20;
        }
        Global = (struct DXGKW32KIMPORTS **)DXGGLOBAL::GetGlobal(v6);
        LODWORD(v10) = DXGGLOBAL::DelayLoadWin32k(Global, *(void **)(v12 + 8));
        if ( (int)v10 >= 0 )
        {
          LODWORD(v10) = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v12, &v33);
          if ( (int)v10 >= 0 )
          {
LABEL_19:
            v3 = v33;
            goto LABEL_20;
          }
          v3 = v33;
        }
LABEL_56:
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
        v22[3] = (int)v10;
        goto LABEL_57;
      }
      if ( (unsigned int)v10 >= 8 && v12 )
      {
        v29 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
LABEL_47:
        LODWORD(v10) = 0;
        *(_QWORD *)v12 = v29;
        v3 = 8;
        goto LABEL_20;
      }
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
    v22[3] = v10;
    v10 = -1073741789LL;
    v22[4] = v12;
    goto LABEL_31;
  }
  v30 = DXGGLOBAL::GetGlobal(v6);
  v33 = -1073741275;
  LODWORD(v10) = DXGGLOBAL::IterateAdaptersWithCallback(v30, RfxVgpuResetCallback, &v33, 0LL);
  if ( (int)v10 < 0 )
    goto LABEL_56;
  LODWORD(v10) = v33;
  if ( (v33 & 0x80000000) != 0 )
    goto LABEL_56;
LABEL_20:
  *(_QWORD *)(a2 + 56) = v3;
  *(_DWORD *)(a2 + 48) = v10;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v31);
  return (unsigned int)v10;
}
