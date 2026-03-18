/*
 * XREFs of InvalidateInertiaInfo @ 0x1C0008088
 * Callers:
 *     NtUserReportInertia @ 0x1C0007FA0 (NtUserReportInertia.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01AA5B4 (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@.c)
 *     CachePTPInertiaInfo @ 0x1C01B0A40 (CachePTPInertiaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvalidateInertiaInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (dword_1C03300C8 & 1) != 0 && a2 == qword_1C0330048 && a1 == gInertiaInfo )
    dword_1C03300C8 &= ~1u;
  return result;
}
