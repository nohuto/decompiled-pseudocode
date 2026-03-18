/*
 * XREFs of ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0041DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z @ 0x1C002A204 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiQueryVirtualFunctionIndexByLuid(_QWORD *a1, struct _LUID a2, unsigned __int16 *a3)
{
  unsigned int v4; // ebx
  unsigned int VirtualGpuByLuid; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  struct _LUID v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v12, a1, 0LL);
  v4 = v14;
  if ( v14 >= 0 )
  {
    VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(
                         *(ADAPTER_RENDER **)(*(_QWORD *)(v13 + 3704) + 2288LL),
                         &v15);
    if ( VirtualGpuByLuid <= 0xFFFF )
    {
      *a3 = VirtualGpuByLuid;
      v4 = 0;
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
      *(_QWORD *)(v10 + 24) = 1108LL;
      WdLogEvent5_WdWarning(v10);
      v4 = -1073741811;
    }
    v14 = v4;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v12);
  return v4;
}
