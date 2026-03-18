/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C00F4430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00F45D4 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C00F49E0 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     DxgkCaptureQueryInterface @ 0x1C0186880 (DxgkCaptureQueryInterface.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rax
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 (__fastcall *v17)(); // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2);
  v4 = *(unsigned int **)(a2 + 184);
  v5 = 0;
  v27 = 0;
  v6 = v4[6];
  v7 = v4[2];
  v8 = v4[4];
  if ( *(_BYTE *)(a2 + 64) )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 643LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( (v6 & 3) != 3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v19 + 24) = 649LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = *(_QWORD *)(a2 + 112);
  switch ( (_DWORD)v6 )
  {
    case 0x230007:
      Global = DXGGLOBAL::GetGlobal(a1);
      v27 = -1073741275;
      LODWORD(v9) = DXGGLOBAL::IterateAdaptersWithCallback(
                      (__int64)Global,
                      (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                      (__int64)&v27,
                      0);
      if ( (int)v9 >= 0 )
      {
        LODWORD(v9) = v27;
        if ( (v27 & 0x80000000) == 0 )
          goto LABEL_20;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
      v20[3] = (int)v9;
      goto LABEL_55;
    case 0x23003F:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v17 = (__int64 (__fastcall *)())DpiInitialize;
        goto LABEL_28;
      }
      goto LABEL_43;
    case 0x230043:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v17 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
        goto LABEL_28;
      }
      goto LABEL_43;
    case 0x230047:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v17 = (__int64 (__fastcall *)())DpiInitializeWin8;
        goto LABEL_28;
      }
LABEL_43:
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
      v20[3] = v7;
      v20[4] = v9;
      v9 = -1073741789LL;
      goto LABEL_44;
    case 0x23004B:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v17 = DpiUnInitialize;
        goto LABEL_28;
      }
      goto LABEL_43;
    case 0x232063:
      if ( (unsigned int)v7 >= 8 && v9 )
      {
        v17 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
LABEL_28:
        *(_QWORD *)v9 = v17;
        LODWORD(v9) = 0;
        v5 = 8;
        goto LABEL_20;
      }
      goto LABEL_43;
    case 0x23E057:
      if ( (unsigned int)v8 < 0x890 || (unsigned int)v7 < 0x890 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
        LODWORD(v9) = -1073741306;
        v22[3] = v8;
        v22[4] = v7;
        v22[5] = 2192LL;
        v22[6] = -1073741306LL;
        WdLogEvent5_WdAssertion(v22);
        goto LABEL_20;
      }
      v10 = DxgkWin32kQueryInterface(*(struct _DXGKWIN32K_INTERFACE **)(a2 + 112), &v27);
      goto LABEL_17;
  }
  if ( (_DWORD)v6 != 2351195 )
  {
    if ( (_DWORD)v6 == 2351199 )
    {
      if ( (unsigned int)v8 >= 0x30 && (unsigned int)v7 >= 0x30 )
      {
        v10 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v27);
        goto LABEL_17;
      }
      goto LABEL_42;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
    LODWORD(v9) = -1073741808;
    v20[3] = v6;
    v20[4] = -1073741808LL;
LABEL_55:
    WdLogEvent5_WdWarning(v20);
    goto LABEL_20;
  }
  if ( (unsigned int)v8 < 0x208 || (unsigned int)v7 < 0x208 )
  {
LABEL_42:
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
    v9 = -1073741306LL;
    v20[3] = v8;
    v20[4] = v7;
LABEL_44:
    v20[5] = v9;
    goto LABEL_55;
  }
  v10 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v27);
LABEL_17:
  v9 = v10;
  if ( v10 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v21 + 24) = v9;
    WdLogEvent5_WdWarning(v21);
  }
  v5 = v27;
LABEL_20:
  *(_QWORD *)(a2 + 56) = v5;
  *(_DWORD *)(a2 + 48) = v9;
  IofCompleteRequest((PIRP)a2, 0);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 2);
  return (unsigned int)v9;
}
