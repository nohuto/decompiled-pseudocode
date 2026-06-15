/*
 * XREFs of ?InitialRegisterForThread@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@@Z @ 0x1400042A0
 * Callers:
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x1400044B0 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GraphStreamingResourceManager::InitialRegisterForThread(
        GraphStreamingResourceManager *this,
        void *a2,
        struct GraphStreamingResourceManager::HandleRegistrations::_t *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  __int64 v8; // rcx
  HANDLE v9; // rax
  __int64 v10; // rax
  signed int v11; // ebx
  signed int LastError; // eax
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE TargetHandle; // [rsp+78h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  v14[0] = 0LL;
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0x400u, 0, 0) )
  {
    v8 = *((_QWORD *)this + 35);
    if ( !v8
      || (v11 = (*(__int64 (__fastcall **)(__int64, HANDLE, _QWORD *))(*(_QWORD *)v8 + 48LL))(v8, TargetHandle, v14),
          v11 >= 0) )
    {
      v9 = TargetHandle;
      TargetHandle = 0LL;
      *(_QWORD *)a3 = v9;
      v10 = v14[0];
      v14[0] = 0LL;
      v11 = 0;
      *((_QWORD *)a3 + 1) = v10;
    }
  }
  else
  {
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( TargetHandle )
    CloseHandle(TargetHandle);
  return (unsigned int)v11;
}
