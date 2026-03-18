/*
 * XREFs of PspInitPhase3 @ 0x1408CA2EC
 * Callers:
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x1404E9248 (PspMapSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x1408E13F8 (PspGetSystemDllSecureHandle.c)
 */

bool PspInitPhase3()
{
  int SystemDllSecureHandle; // ebx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v6[48]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v7[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v8; // [rsp+68h] [rbp-80h]
  __int64 v9; // [rsp+70h] [rbp-78h]

  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v6);
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(PspSystemDlls, &v5);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls, 0, 0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v4 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(off_140861240, &v4) < 0 )
      {
        v3 = v4;
      }
      else
      {
        v2 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140861240, 0, 0);
        v3 = v4;
        if ( v2 < 0 )
          v3 = 0LL;
      }
      v9 = v3;
      v8 = v5;
      SystemDllSecureHandle = VslpEnterIumSecureMode(2u, 3LL, 0, (__int64)v7);
    }
  }
  KiUnstackDetachProcess((__int64)v6, 0LL);
  return SystemDllSecureHandle >= 0;
}
