/*
 * XREFs of ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0189A14
 * Callers:
 *     ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C0189144 (-GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONIN.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C018A6BC (DxgkDdiSetGpuPartitionCount.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetGpuPartitionCount(__int64 a1, int a2, __int64 a3)
{
  _BYTE *v5; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rax

  if ( a2 == 1 )
  {
    if ( !*(_QWORD *)(a1 + 1232) )
    {
      v5 = operator new(0x38uLL, 0x4B677844u, 1, PagedPool);
      if ( v5 )
      {
        v5[8] = 1;
        *((_QWORD *)v5 + 4) = a1;
        *((_QWORD *)v5 + 6) = v5 + 40;
        *((_QWORD *)v5 + 5) = v5 + 40;
        *(_QWORD *)v5 = &DXGVIRTUALGPUMANAGER_PARAV::`vftable';
      }
      *(_QWORD *)(a1 + 1232) = v5;
      if ( !v5 )
        return 3221225495LL;
    }
    v7 = *(_QWORD *)(a1 + 1232);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 1224) )
    {
      v8 = operator new(0x38uLL, 0x4B677844u, 1, PagedPool);
      if ( v8 )
      {
        v8[8] = 0;
        *((_QWORD *)v8 + 4) = a1;
        *((_QWORD *)v8 + 6) = v8 + 40;
        *((_QWORD *)v8 + 5) = v8 + 40;
        *(_QWORD *)v8 = &DXGVIRTUALGPUMANAGER_GPUP::`vftable';
      }
      *(_QWORD *)(a1 + 1224) = v8;
      if ( !v8 )
        return 3221225495LL;
    }
    v7 = *(_QWORD *)(a1 + 1224);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, a3);
}
