/*
 * XREFs of ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z @ 0x1C002A204
 * Callers:
 *     ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002AD2C (-SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C002B184 (-VirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0041DD0 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::FindVirtualGpuByLuid(ADAPTER_RENDER *this, struct _LUID *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  __int64 v7; // r8
  __int64 v8; // rax

  v2 = *((_QWORD *)this + 142);
  v4 = *((unsigned int *)this + 283);
  v5 = -1;
  if ( v2 )
  {
    v6 = *((_DWORD *)this + 282);
    v7 = 0LL;
    if ( v6 )
    {
      while ( (_DWORD)v4 )
      {
        this = *(ADAPTER_RENDER **)(v2 + 8 * v7);
        if ( this )
        {
          if ( a2->LowPart == *((_DWORD *)this + 5) && a2->HighPart == *((_DWORD *)this + 6) )
          {
            v5 = *((_DWORD *)this + 4);
            if ( v5 != -1 )
              return v5;
            break;
          }
          v4 = (unsigned int)(v4 - 1);
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          break;
      }
    }
  }
  v8 = WdLogNewEntry5_WdError(this, v4);
  *(_QWORD *)(v8 + 24) = a2->HighPart;
  *(_QWORD *)(v8 + 32) = a2->LowPart;
  WdLogEvent5_WdError(v8);
  return v5;
}
