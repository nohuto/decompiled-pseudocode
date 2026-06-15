/*
 * XREFs of WPP_SF_SSd @ 0x18000B8A0
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18000D0E0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180011370 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800127C4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_SSd(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  __int64 v5; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  const wchar_t *v12; // r8
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  __int64 v15; // rax
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = -1LL;
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a5[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5LL;
  }
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v11 = v5 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  v12 = L"NULL";
  v13 = 2 * v10;
  v14 = L"NULL";
  if ( a5 )
    v14 = a5;
  v15 = 2 * v11;
  if ( a4 )
    v12 = a4;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, v12, v15, v14, v13, va, 4LL, 0LL);
}
