/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1C01B44B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00B46B8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int Value; // eax
  unsigned int v15; // ebx
  unsigned __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2129);
  if ( !a3 )
    goto LABEL_13;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v17);
  v11 = v9;
  if ( !v9 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12[3] = a1->HighPart;
    v12[4] = a1->LowPart;
LABEL_12:
    WdLogEvent5_WdError(v12);
LABEL_13:
    v15 = -1073741811;
    goto LABEL_14;
  }
  v13 = *(unsigned int *)(*((_QWORD *)v9 + 288) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v13 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v12[3] = a1->HighPart;
    v12[4] = a1->LowPart;
    v12[5] = a2->VidPnSourceId;
    goto LABEL_12;
  }
  v15 = DxgkSetPointerShape(v11, a2, a3, a3->Width, a3->Height, a4, 1);
  DXGADAPTER::ReleaseReferenceNoTracking(v11);
LABEL_14:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerExit, (__int64)a3, 2129);
  return v15;
}
