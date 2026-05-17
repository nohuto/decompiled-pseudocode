/*
 * XREFs of RtlFlushHeaps @ 0x1800154B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlFlushHeaps()
{
  return RtlpEnumProcessHeaps((__int64 (__fastcall *)(_QWORD, _QWORD))RtlpFlushHeapsCallback, 0LL, 0);
}
