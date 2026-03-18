/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C00A9020
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D9110 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  int AdapterDeviceDesc; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int8 v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v19[7]; // [rsp+21h] [rbp-27h] BYREF
  int v20; // [rsp+28h] [rbp-20h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h]

  v21 = 0LL;
  v5 = a3;
  v20 = 2185;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2185);
  AdapterDeviceDesc = DxgkpGetAdapterDeviceDesc(a1, a2, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
  if ( AdapterDeviceDesc >= 0 && v5 )
  {
    v19[0] = 0;
    v18 = 0;
    v12 = DxgkpAdapterCheckStereoMode(a1, a2, &v18, v19);
    v16 = v12;
    if ( v12 < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdWarning(v17);
    }
    else
    {
      *(_DWORD *)(a4 + 2040) = (v19[0] != 0 ? 8 : 0) | (v18 != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2040) & 0xFFFFFFE7;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v20);
  return (unsigned int)AdapterDeviceDesc;
}
