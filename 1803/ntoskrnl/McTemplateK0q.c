/*
 * XREFs of McTemplateK0q @ 0x14023D72C
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x14048FFD8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x140575248 (PiCMGetDeviceIdList.c)
 *     PnpCallAddDevice @ 0x140604510 (PnpCallAddDevice.c)
 * Callees:
 *     McGenEventWriteKM @ 0x14014761C (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0q(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWriteKM(MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &v5);
}
