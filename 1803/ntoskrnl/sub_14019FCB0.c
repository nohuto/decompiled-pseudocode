/*
 * XREFs of sub_14019FCB0 @ 0x14019FCB0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x1402D2010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_14019FCB0(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 288))(a1);
}
