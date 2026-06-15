/*
 * XREFs of PbmRegisterAppClosureNotification @ 0x1800221C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001AD08 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterAppClosureNotification(CApplicationManager *a1)
{
  int v1; // edi
  int Process; // eax
  CApplicationManager *v3; // rcx
  struct CProcess *v4; // rbx
  struct CProcess *v5; // rbx
  struct CProcess *v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v7 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v7);
    v4 = v7;
    v1 = Process;
    if ( Process >= 0 )
    {
      v1 = CApplicationManager::RegisterAppClosureNotificationClient(v3, v7);
      if ( v1 >= 0 )
        *((_DWORD *)v4 + 129) = 1;
    }
    if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v5 = v7;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v7 + 32LL))(v7);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  return (unsigned int)v1;
}
