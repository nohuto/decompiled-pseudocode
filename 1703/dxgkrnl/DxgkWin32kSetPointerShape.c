/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1C019DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00FA358 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4)
{
  int v4; // ebp
  DXGGLOBAL *Global; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = a4;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2129);
  if ( a3 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, (__int64)a3, a4);
    v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v16, v9);
    if ( v12 )
    {
      v14 = DxgkSetPointerShape(v12, a2, a3, a3->Width, a3->Height, v4);
      DXGADAPTER::ReleaseReference(v12);
      goto LABEL_8;
    }
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = a1->HighPart;
    *(_QWORD *)(v13 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v13);
  }
  v14 = -1073741811;
LABEL_8:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, (__int64)a3, 2129);
  return v14;
}
