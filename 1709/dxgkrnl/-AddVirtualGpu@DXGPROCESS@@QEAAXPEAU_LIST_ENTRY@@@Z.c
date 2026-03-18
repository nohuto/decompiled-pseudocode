/*
 * XREFs of ?AddVirtualGpu@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0024AE8
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C018E510 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESS::AddVirtualGpu(DXGPROCESS *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rdi
  struct _LIST_ENTRY *v5; // rcx

  v3 = (char *)this + 512;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( !a2->Flink )
  {
    v5 = (struct _LIST_ENTRY *)*((_QWORD *)this + 48);
    if ( v5->Flink != (struct _LIST_ENTRY *)((char *)this + 376) )
      __fastfail(3u);
    a2->Flink = (struct _LIST_ENTRY *)((char *)this + 376);
    a2->Blink = v5;
    v5->Flink = a2;
    *((_QWORD *)this + 48) = a2;
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
