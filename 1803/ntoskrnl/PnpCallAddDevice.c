/*
 * XREFs of PnpCallAddDevice @ 0x140604510
 * Callers:
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x140006F84 (PnpSetDeviceAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x1401634E8 (PpvUtilCallAddDevice.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x14023D72C (McTemplateK0q.c)
 *     McTemplateK0qhzr1z @ 0x14023DAEC (McTemplateK0qhzr1z.c)
 */

__int64 __fastcall PnpCallAddDevice(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *),
        int a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r8
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    McTemplateK0qhzr1z(
      a1,
      a2,
      (__int64)a3,
      a4,
      *(_WORD *)(a2 + 56) >> 1,
      *(_QWORD *)(a2 + 64),
      *(const wchar_t **)(a1 + 48));
  v7 = PnpSetDeviceAffinityThread(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v9 = PpvUtilCallAddDevice(*(struct _DEVICE_OBJECT **)(a1 + 32), (struct _DRIVER_OBJECT *)a2, a3);
  if ( v7 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    McTemplateK0q(v8, &KMPnPEvt_DeviceAdd_Stop, v10, v9);
  return v9;
}
