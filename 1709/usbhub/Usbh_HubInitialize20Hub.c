/*
 * XREFs of Usbh_HubInitialize20Hub @ 0x1C0026134
 * Callers:
 *     UsbhInitializeTtHub @ 0x1C002604C (UsbhInitializeTtHub.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubInitialize20Hub(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 (__fastcall *v9)(_QWORD, __int64, _QWORD); // rax
  void (__fastcall *v11)(_QWORD, __int64); // rax
  void (__fastcall *v12)(_QWORD, __int64); // rax

  v6 = FdoExt(a1);
  v7 = FdoExt(a1);
  v8 = v7 + 1056;
  if ( (v6[642] & 1) != 0 )
  {
    v11 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v7 + 565);
    if ( v11 )
      v11(v8[1], a2);
  }
  if ( (v6[642] & 2) != 0 )
  {
    v12 = (void (__fastcall *)(_QWORD, __int64))v8[37];
    if ( v12 )
      v12(v8[1], a2);
  }
  v9 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v8[16];
  if ( v9 )
    return v9(v8[1], a2, a3);
  else
    return 3221225474LL;
}
