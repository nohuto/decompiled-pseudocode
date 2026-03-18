/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C00F7260
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00991B0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, int a3, __int64 a4)
{
  int AdapterDeviceDesc; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v18[23]; // [rsp+21h] [rbp-17h] BYREF

  AdapterDeviceDesc = DxgkpGetAdapterDeviceDesc(a1, a2, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
  if ( AdapterDeviceDesc >= 0 && a3 )
  {
    v18[0] = 0;
    v17 = 0;
    v10 = DxgkpAdapterCheckStereoMode(a1, a2, &v17, v18);
    v15 = v10;
    if ( v10 < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdWarning(v16);
    }
    else
    {
      *(_DWORD *)(a4 + 2028) = (v18[0] != 0 ? 0x10 : 0) | (v17 != 0 ? 0x20 : 0) | *(_DWORD *)(a4 + 2028) & 0xFFFFFFCF;
    }
  }
  return (unsigned int)AdapterDeviceDesc;
}
