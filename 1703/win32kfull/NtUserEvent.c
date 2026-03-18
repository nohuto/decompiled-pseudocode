/*
 * XREFs of NtUserEvent @ 0x1C01D7F40
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1C00076A8 (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(unsigned __int16 *Src)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  EnterCrit(0LL, 1LL);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v3, v2, v4, v5);
  if ( (((((unsigned __int128)-(__int128)(unsigned __int64)CurrentProcessWow64Process >> 64) & 0xFFFFFFFD) + 3) & (unsigned int)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = Src[3];
  v10 = PsGetCurrentProcessWow64Process(
          W32UserProbeAddress,
          (((unsigned __int128)-(__int128)(unsigned __int64)CurrentProcessWow64Process >> 64) & 0xFFFFFFFFFFFFFFFDuLL)
        + 4,
          v7,
          v8);
  ProbeForRead(Src + 4, v9, v10 != 0 ? 1 : 4);
  v11 = xxxCsEvent(Src, v9);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v11;
}
