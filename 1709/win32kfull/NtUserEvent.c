/*
 * XREFs of NtUserEvent @ 0x1C01E46B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1C000C874 (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(unsigned __int16 *Src)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  if ( (((((unsigned __int128)-(__int128)(unsigned __int64)PsGetCurrentProcessWow64Process(v2) >> 64) & 0xFFFFFFFD) + 3) & (unsigned int)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = Src[3];
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
  ProbeForRead(Src + 4, v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  v5 = xxxCsEvent(Src, v3);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v5;
}
