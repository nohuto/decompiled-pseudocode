/*
 * XREFs of WPP_SF_dSd @ 0x180020F74
 * Callers:
 *     ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x18002172C (-UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180028110 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028680 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dSd(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, ...)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  const wchar_t *v11; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, const wchar_t *);
  if ( v11 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v11[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = L"NULL";
  v7 = 2 * v5;
  if ( v11 )
    v6 = v11;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, va, 4LL, v6, v7, va1, 4LL, 0LL);
}
