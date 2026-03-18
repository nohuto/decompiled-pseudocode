/*
 * XREFs of ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2E@Z @ 0x1C01B723C
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0179140 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C01B5E78 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z @ 0x1C01B71A0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGPROCESSVMWP::InitializeVmwpProcess(
        DXGPROCESSVMWP *this,
        void *a2,
        struct DXGPROCESS *a3,
        struct _EPROCESS *a4,
        struct _EPROCESS *Object,
        unsigned __int8 a6)
{
  DXGVIRTUALMACHINE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rax

  v10 = (DXGVIRTUALMACHINE *)operator new(0xF8uLL, 0x4B677844u, 1, PagedPool);
  if ( v10 )
    v10 = DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(v10, this);
  *((_QWORD *)this + 57) = v10;
  if ( v10 )
  {
    v14 = DXGVIRTUALMACHINE::InitializeVirtualMachine((struct DXGPROCESSVMWP **)v10, a2);
    if ( v14 >= 0 )
    {
      v15 = *((_QWORD *)this + 57);
      *((_BYTE *)this + 472) = 1;
      *((_QWORD *)this + 58) = a3;
      *(_QWORD *)(v15 + 184) = a4;
      ObfReferenceObject(a4);
      if ( a6 )
        *(_BYTE *)(*((_QWORD *)this + 57) + 240LL) = 1;
      if ( Object )
      {
        v16 = *((_QWORD *)this + 57);
        *((_BYTE *)this + 323) |= 0x10u;
        *(_QWORD *)(v16 + 176) = Object;
        ObfReferenceObject(Object);
        PsSetProcessDxgProcess(a4, this);
        *((_QWORD *)this + 7) = Object;
      }
    }
    return (unsigned int)v14;
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v12 + 24) = 4795LL;
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
}
