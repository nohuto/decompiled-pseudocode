/*
 * XREFs of ?DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z @ 0x1C00F6C00
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C00F6C34 (-DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z.c)
 */

__int64 __fastcall DxgkHmdDisplayEnum(const struct _LUID *a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // rax

  a1[1].LowPart = 16;
  v1 = DxgkHMDDisplayEnumInternal(a1, (unsigned int *)&a1[1], (unsigned int *)&a1[1].HighPart);
  v4 = v1;
  if ( v1 < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = v4;
    WdLogEvent5_WdError(v6);
  }
  return (unsigned int)v4;
}
