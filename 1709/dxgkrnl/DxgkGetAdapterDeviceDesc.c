/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C00B1DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B8DA0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, int a3, __int64 a4)
{
  int AdapterDeviceDesc; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int8 v16; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v17[23]; // [rsp+21h] [rbp-17h] BYREF

  AdapterDeviceDesc = DxgkpGetAdapterDeviceDesc(a1, a2, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
  if ( AdapterDeviceDesc >= 0 && a3 )
  {
    v17[0] = 0;
    v16 = 0;
    v10 = DxgkpAdapterCheckStereoMode(a1, a2, &v16, v17);
    v14 = v10;
    if ( v10 < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdWarning(v15);
    }
    else
    {
      *(_DWORD *)(a4 + 2028) = (v17[0] != 0 ? 0x10 : 0) | (v16 != 0 ? 0x20 : 0) | *(_DWORD *)(a4 + 2028) & 0xFFFFFFCF;
    }
  }
  return (unsigned int)AdapterDeviceDesc;
}
