/*
 * XREFs of PspInitPhase3 @ 0x14085818C
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x14045FDEC (PspMapSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x14086C6B0 (PspGetSystemDllSecureHandle.c)
 */

bool PspInitPhase3()
{
  int SystemDllSecureHandle; // ebx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-C0h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v6; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v7[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v8; // [rsp+68h] [rbp-80h]
  __int64 v9; // [rsp+70h] [rbp-78h]

  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)&v6);
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(PspSystemDlls, &v5);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll(
                              (struct _KPROCESS *)PsSecureSystemProcess,
                              (signed __int64 *)PspSystemDlls,
                              0,
                              0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v4 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(off_1407F3240, &v4) < 0 )
      {
        v3 = v4;
      }
      else
      {
        v2 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (signed __int64 *)off_1407F3240, 0, 0);
        v3 = v4;
        if ( v2 < 0 )
          v3 = 0LL;
      }
      v9 = v3;
      v8 = v5;
      SystemDllSecureHandle = VslpEnterIumSecureMode(2u, 3LL, 0, (__int64)v7);
    }
  }
  KiUnstackDetachProcess(&v6, 0LL);
  return SystemDllSecureHandle >= 0;
}
