/*
 * XREFs of UsbhBusIf_SetMsOs20Support @ 0x1C0050F74
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043E08 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UsbhBusIf_SetMsOs20Support(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4))(_QWORD, __int64, __int64, __int64)
{
  _DWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, __int64); // rax

  v8 = FdoExt(a1);
  Log(a1, 4, 1968391236, (__int64)(v8 + 1056), 0LL);
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v10 + 4536);
  if ( result )
  {
    LOBYTE(v9) = a4;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))result(*(_QWORD *)(v10 + 4232), a2, a3, v9);
  }
  return result;
}
