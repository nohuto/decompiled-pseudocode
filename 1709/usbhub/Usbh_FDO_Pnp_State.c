/*
 * XREFs of Usbh_FDO_Pnp_State @ 0x1C00085E0
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     UsbhInitCallbackWorker @ 0x1C0008010 (UsbhInitCallbackWorker.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0008390 (UsbhFdoPnp_StartDevice.c)
 *     UsbhAddDevice @ 0x1C0017EF0 (UsbhAddDevice.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C004C260 (UsbhFdoPnp_RemoveDevice.c)
 *     UsbhFdoPnp_StopDevice @ 0x1C004C430 (UsbhFdoPnp_StopDevice.c)
 *     UsbhFdoPnp_SurpriseRemove @ 0x1C004C4C0 (UsbhFdoPnp_SurpriseRemove.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_FDO_Pnp_State(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 result; // rax

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(v4 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(v4, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(v4, *(_QWORD *)(v4 + 64));
  v6 = *(_QWORD *)(v5 + 1368);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v7 = 1044730963;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = v6;
    *(_QWORD *)(v7 + 24) = v3;
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(_QWORD *)(v8 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(v8, 0LL);
  if ( *(_DWORD *)v9 != 541218120 )
    UsbhTrapFatal_Dbg(v8, *(_QWORD *)(v8 + 64));
  KeWaitForSingleObject((PVOID)(v9 + 4960), Executive, 0, 0, 0LL);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(v9 + 1360);
  *(_DWORD *)(a1 + 60) = v3;
  *(_DWORD *)(a1 + 48) = 827278406;
  *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v9 + 1328) = a1;
  *(_QWORD *)(v5 + 1352) = *(_QWORD *)(a1 + 24);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(v5 + 1368))(a1, (unsigned int)v3);
  *(_QWORD *)(v5 + 1352) = 0LL;
  return result;
}
