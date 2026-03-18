/*
 * XREFs of UsbhPdoPnp_EnablePdo @ 0x1C0027CA0
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C0019240 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSshSetPortsBusyState @ 0x1C00179C0 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhSetPdo_AllowIo @ 0x1C00199D8 (UsbhSetPdo_AllowIo.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoPnp_EnablePdo(__int64 a1)
{
  _DWORD *v2; // rbx
  unsigned int v3; // edi
  struct _DEVICE_OBJECT *v4; // rbp
  int v5; // r8d
  _DWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // [rsp+48h] [rbp-10h]

  v2 = PdoExt(a1);
  v3 = 0;
  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)v2 + 147);
  v5 = PdoExt(a1)[280];
  if ( (v2[353] & 0x8000000) == 0 && v5 == 100 || (v2[283] & 4) != 0 )
    return 0LL;
  if ( ((v5 - 100) & 0xFFFFFFFC) == 0 && v5 != 101 )
  {
    UsbhSshSetPortsBusyState((__int64)v4, *((_WORD *)v2 + 710), 2, 0);
    v7 = PdoExt(a1);
    v3 = UsbhSyncResetDeviceInternal(v4, (__int64)(v7 + 236), a1);
    v8 = v3 & 0xC0000000;
    if ( (_DWORD)v8 != -1073741824 || Usb_Disconnected(v3) )
    {
      v2[353] &= ~0x8000000u;
      UsbhSetPdo_AllowIo(v8, a1);
    }
    else
    {
      LOBYTE(v9) = 0;
      UsbhException((int)v4, *((unsigned __int16 *)v2 + 710), 86, 0, 0, v3, -1, usbfile_pdo_c, 2072, v9);
    }
  }
  return v3;
}
