/*
 * XREFs of DxgkWin32kSetPointerPosition @ 0x1C01B4390
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerPosition(
        struct _LUID *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int Value; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2128);
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v17);
  v9 = v7;
  if ( !v7 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v10[3] = a1->HighPart;
    v10[4] = a1->LowPart;
LABEL_11:
    WdLogEvent5_WdError(v10);
    v13 = -1073741811;
    goto LABEL_12;
  }
  v11 = *(unsigned int *)(*((_QWORD *)v7 + 288) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v11 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v10[3] = a1->HighPart;
    v10[4] = a1->LowPart;
    v10[5] = a2->VidPnSourceId;
    goto LABEL_11;
  }
  v13 = DxgkSetPointerPosition(v9, a2, v3, 1);
  DXGADAPTER::ReleaseReferenceNoTracking(v9);
LABEL_12:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 2128);
  return v13;
}
