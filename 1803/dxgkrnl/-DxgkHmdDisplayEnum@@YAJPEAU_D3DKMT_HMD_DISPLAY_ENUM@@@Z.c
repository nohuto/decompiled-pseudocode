/*
 * XREFs of ?DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z @ 0x1C0165AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C01C4E40 (-DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z.c)
 */

__int64 __fastcall DxgkHmdDisplayEnum(const struct _LUID *a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax

  a1[1].LowPart = 16;
  v1 = DxgkHMDDisplayEnumInternal(a1, (unsigned int *)&a1[1], (unsigned int *)&a1[1].HighPart);
  v3 = v1;
  if ( v1 < 0 )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
  }
  return (unsigned int)v3;
}
