/*
 * XREFs of ?RemoveVirtualGpu@DXGPROCESS@@QEAAEPEAU_LIST_ENTRY@@@Z @ 0x1C0024BC0
 * Callers:
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXE@Z @ 0x1C018DF20 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXE@Z.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C018E4B0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGPROCESS::RemoveVirtualGpu(DXGPROCESS *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rdi
  bool v4; // si
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = (char *)this + 512;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v4 = 0;
  Flink = a2->Flink;
  if ( a2->Flink )
  {
    Blink = a2->Blink;
    if ( Flink->Blink != a2 || Blink->Flink != a2 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v4 = Blink == Flink;
    a2->Blink = 0LL;
    a2->Flink = 0LL;
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
