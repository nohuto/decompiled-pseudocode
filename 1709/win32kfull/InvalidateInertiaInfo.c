/*
 * XREFs of InvalidateInertiaInfo @ 0x1C000CCD8
 * Callers:
 *     NtUserReportInertia @ 0x1C000CBF0 (NtUserReportInertia.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01AD8E0 (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@.c)
 *     CachePTPInertiaInfo @ 0x1C01B3E30 (CachePTPInertiaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvalidateInertiaInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (dword_1C032B588 & 1) != 0 && a2 == qword_1C032B508 && a1 == gInertiaInfo )
    dword_1C032B588 &= ~1u;
  return result;
}
