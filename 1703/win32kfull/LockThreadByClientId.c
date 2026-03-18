/*
 * XREFs of LockThreadByClientId @ 0x1C001AB48
 * Callers:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C001AA68 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1C01C3380 (-GetConsoleHostProcess@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockThreadByClientId(void *a1, PETHREAD *a2)
{
  NTSTATUS v3; // edi

  v3 = PsLookupThreadByThreadId(a1, a2);
  if ( v3 < 0 || (unsigned int)PsGetThreadSessionId(*a2) == gSessionId )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  return 3221225473LL;
}
