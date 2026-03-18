/*
 * XREFs of Template_pz @ 0x1C00FD1E8
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038070 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     EngFreeMem @ 0x1C0058530 (EngFreeMem.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAllocMem @ 0x1C0076E30 (EngAllocMem.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngReleaseSemaphore @ 0x1C007B6E0 (EngReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00FCD50 (EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS Template_pz(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v5; // rax
  int v6; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  const wchar_t *v14; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, const wchar_t *);
  v3 = v14;
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  if ( v14 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v14[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !v14 )
    v3 = L"NULL";
  v9 = v3;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 2u, &UserData);
}
