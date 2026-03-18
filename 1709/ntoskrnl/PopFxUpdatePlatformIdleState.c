/*
 * XREFs of PopFxUpdatePlatformIdleState @ 0x14023F920
 * Callers:
 *     <none>
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400FD8A0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxUpdatePlatformIdleState(__int64 a1, int a2, _DWORD *a3)
{
  NTSTATUS v6; // ebx
  struct _IO_REMOVE_LOCK *v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *); // rax
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v13[4]; // [rsp+48h] [rbp-40h] BYREF

  if ( *a3 )
  {
    v6 = -1073741822;
    if ( *(_QWORD *)(a1 + 152) )
    {
      v7 = (struct _IO_REMOVE_LOCK *)(a1 + 216);
      v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 216), 0LL, &File, 1u, 0x20u);
      if ( v6 >= 0 )
      {
        v8 = a3[1];
        v12 = 0LL;
        v9 = *(_QWORD *)(a1 + 176);
        v13[1] = v8;
        v13[2] = a3[2];
        v10 = *(__int64 (__fastcall **)(__int64, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *))(a1 + 152);
        v13[0] = a2;
        v6 = v10(v9, &GUID_PLATFORM_IDLE_UPDATE, v13, 12LL, 0LL, 0LL, &v12);
        IoReleaseRemoveLockEx(v7, 0LL, 0x20u);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
