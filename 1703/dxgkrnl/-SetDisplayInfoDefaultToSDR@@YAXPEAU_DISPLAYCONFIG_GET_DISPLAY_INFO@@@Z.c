/*
 * XREFs of ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7FA0
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDisplayInfoDefaultToSDR(struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a1)
{
  *((_QWORD *)a1 + 247) = 8LL;
  *((_DWORD *)a1 + 496) = 655;
  *((_DWORD *)a1 + 497) = 338;
  *((_DWORD *)a1 + 498) = 307;
  *((_DWORD *)a1 + 499) = 614;
  *((_DWORD *)a1 + 500) = 153;
  *((_DWORD *)a1 + 501) = 61;
  *((_DWORD *)a1 + 502) = 320;
  *(_QWORD *)((char *)a1 + 2012) = 337LL;
  *((_DWORD *)a1 + 507) &= ~0x400u;
  *(_QWORD *)((char *)a1 + 2020) = 0LL;
}
