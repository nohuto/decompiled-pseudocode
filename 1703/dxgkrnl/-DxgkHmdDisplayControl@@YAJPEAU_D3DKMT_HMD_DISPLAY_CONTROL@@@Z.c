/*
 * XREFs of ?DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z @ 0x1C017AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01A9158 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 */

__int64 __fastcall DxgkHmdDisplayControl(struct _D3DKMT_HMD_DISPLAY_CONTROL *a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax

  v1 = DxgkHMDDisplayControlInternal(a1, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), (char *)a1 + 16);
  v4 = v1;
  if ( v1 < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
  }
  return (unsigned int)v4;
}
