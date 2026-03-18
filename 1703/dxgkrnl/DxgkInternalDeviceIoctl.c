/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C00A12D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00A14C0 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C00A1894 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkCaptureQueryInterface @ 0x1C0182610 (DxgkCaptureQueryInterface.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rbx
  _DWORD *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 (__fastcall *v20)(); // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // [rsp+58h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  v31 = 0;
  v7 = *(unsigned int *)(v5 + 24);
  v8 = *(unsigned int *)(v5 + 8);
  v9 = *(unsigned int *)(v5 + 16);
  if ( *(_BYTE *)(a2 + 64) )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (v7 & 3) != 3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 650LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v10 = *(_QWORD *)(a2 + 112);
  v11 = *(_DWORD **)(v5 + 32);
  if ( (unsigned int)v7 <= 0x232063 )
  {
    switch ( (_DWORD)v7 )
    {
      case 0x232063:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
          goto LABEL_25;
        }
        break;
      case 0x230007:
        Global = DXGGLOBAL::GetGlobal();
        v31 = -1073741275;
        LODWORD(v10) = DXGGLOBAL::IterateAdaptersWithCallback(Global, RfxVgpuResetCallback, &v31, 0LL);
        if ( (int)v10 >= 0 )
        {
          LODWORD(v10) = v31;
          if ( (v31 & 0x80000000) == 0 )
            goto LABEL_15;
        }
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
        v21[3] = (int)v10;
LABEL_63:
        WdLogEvent5_WdWarning(v21);
        goto LABEL_15;
      case 0x23003F:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = (__int64 (__fastcall *)())DpiInitialize;
          goto LABEL_25;
        }
        break;
      case 0x230043:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
          goto LABEL_25;
        }
        break;
      case 0x230047:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = (__int64 (__fastcall *)())DpiInitializeWin8;
LABEL_25:
          *(_QWORD *)v10 = v20;
          LODWORD(v10) = 0;
          v6 = 8;
          goto LABEL_15;
        }
        break;
      case 0x23004B:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = DpiUnInitialize;
          goto LABEL_25;
        }
        break;
      default:
LABEL_57:
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
        LODWORD(v10) = -1073741808;
        v21[3] = v7;
        v21[4] = -1073741808LL;
        goto LABEL_63;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v21[3] = v8;
    v21[4] = v10;
LABEL_50:
    v10 = -1073741789LL;
LABEL_62:
    v21[5] = v10;
    goto LABEL_63;
  }
  switch ( (_DWORD)v7 )
  {
    case 0x23E057:
      if ( (unsigned int)v9 < 0x7F0 || (unsigned int)v8 < 0x7F0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        LODWORD(v10) = -1073741306;
        v30[3] = v9;
        v30[4] = v8;
        v30[5] = 2032LL;
        v30[6] = -1073741306LL;
        WdLogEvent5_WdAssertion(v30);
        goto LABEL_15;
      }
      v12 = DxgkWin32kQueryInterface(*(struct _DXGKWIN32K_INTERFACE **)(a2 + 112), &v31);
      goto LABEL_12;
    case 0x23E05B:
      if ( (unsigned int)v9 >= 0x1F8 && (unsigned int)v8 >= 0x1F8 )
      {
        v12 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v31);
LABEL_12:
        v10 = v12;
        if ( v12 < 0 )
        {
          v29 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          *(_QWORD *)(v29 + 24) = v10;
          WdLogEvent5_WdWarning(v29);
        }
        v6 = v31;
        goto LABEL_15;
      }
LABEL_61:
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
      v10 = -1073741306LL;
      v21[3] = v9;
      v21[4] = v8;
      goto LABEL_62;
    case 0x23E05F:
      if ( (unsigned int)v9 >= 0x30 && (unsigned int)v8 >= 0x30 )
      {
        v12 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v31);
        goto LABEL_12;
      }
      goto LABEL_61;
  }
  if ( (_DWORD)v7 != 2351207 )
    goto LABEL_57;
  if ( (unsigned int)v9 < 4 || !v11 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v21[3] = v9;
    v21[4] = v11;
    goto LABEL_50;
  }
  if ( (*v11 & 1) != 0 )
    g_Win32kSupportsPathIndependentRotation = 1;
  LODWORD(v10) = 0;
LABEL_15:
  *(_QWORD *)(a2 + 56) = v6;
  *(_DWORD *)(a2 + 48) = v10;
  IofCompleteRequest((PIRP)a2, 0);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 2);
  return (unsigned int)v10;
}
