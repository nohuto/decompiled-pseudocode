/*
 * XREFs of PopFxProcessorIdleVeto @ 0x140275CE0
 * Callers:
 *     <none>
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxProcessorIdleVeto(__int64 a1, int a2, int a3, char a4)
{
  NTSTATUS v8; // ebx
  struct _IO_REMOVE_LOCK *v9; // rsi
  __int64 (__fastcall *v10)(__int64, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *); // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v14[2]; // [rsp+48h] [rbp-50h] BYREF
  char v15; // [rsp+50h] [rbp-48h]

  v8 = -1073741822;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v9 = (struct _IO_REMOVE_LOCK *)(a1 + 216);
    v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 216), 0LL, &File, 1u, 0x20u);
    if ( v8 >= 0 )
    {
      v10 = *(__int64 (__fastcall **)(__int64, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *))(a1 + 152);
      v13 = 0LL;
      v11 = *(_QWORD *)(a1 + 176);
      v14[0] = a2;
      v14[1] = a3;
      v15 = a4;
      v8 = v10(v11, &GUID_PROCESSOR_IDLE_VETO, v14, 12LL, 0LL, 0LL, &v13);
      IoReleaseRemoveLockEx(v9, 0LL, 0x20u);
    }
  }
  return (unsigned int)v8;
}
