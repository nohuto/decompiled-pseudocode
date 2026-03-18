/*
 * XREFs of ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9E60
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDisplayInfoDefaultToSDR(struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a1)
{
  int v1; // eax

  *((_DWORD *)a1 + 495) = 0;
  *((_DWORD *)a1 + 494) = 8;
  *((_DWORD *)a1 + 496) = 655;
  *((_DWORD *)a1 + 497) = 338;
  *((_DWORD *)a1 + 498) = 307;
  *((_DWORD *)a1 + 499) = 614;
  *((_DWORD *)a1 + 500) = 153;
  *((_DWORD *)a1 + 501) = 61;
  *((_DWORD *)a1 + 502) = 320;
  *((_DWORD *)a1 + 503) = 337;
  *((_DWORD *)a1 + 505) = 2700000;
  *((_DWORD *)a1 + 506) = 2700000;
  v1 = *((_DWORD *)a1 + 510);
  *((_DWORD *)a1 + 504) = 5000;
  *((_DWORD *)a1 + 510) = v1 & 0xFFFFEDFF | 0x1000;
}
