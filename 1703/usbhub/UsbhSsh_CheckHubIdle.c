/*
 * XREFs of UsbhSsh_CheckHubIdle @ 0x1C001A454
 * Callers:
 *     Usbh_SSH_HubActive @ 0x1C000B450 (Usbh_SSH_HubActive.c)
 *     UsbhBusPause_Action @ 0x1C000E8D0 (UsbhBusPause_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C0019CA0 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 */

__int64 __fastcall UsbhSsh_CheckHubIdle(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  __int64 result; // rax

  v2 = FdoExt(a1);
  v3 = v2;
  if ( *((_BYTE *)v2 + 3408)
    || *((_DWORD **)v2 + 388) != v2 + 776
    || v2[780]
    || *((_DWORD **)v2 + 603) != v2 + 1206
    || (v2[640] & 0x10) != 0
    || (int)v2[685] > 1
    || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
  {
    result = 3221225473LL;
  }
  else
  {
    result = 0LL;
  }
  *((_BYTE *)v3 + 3408) = 0;
  return result;
}
