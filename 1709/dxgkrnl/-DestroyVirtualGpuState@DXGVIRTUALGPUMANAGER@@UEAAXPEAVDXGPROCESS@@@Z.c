/*
 * XREFs of ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@UEAAXPEAVDXGPROCESS@@@Z @ 0x1C0188F30
 * Callers:
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER_PARAV@@UEAAXPEAVDXGPROCESS@@@Z @ 0x1C018E080 (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER_PARAV@@UEAAXPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(DXGVIRTUALGPUMANAGER *this, struct DXGPROCESS *a2)
{
  char *v2; // r14
  char *v4; // rdi
  char *v6; // rcx
  void *v7; // rcx

  v2 = (char *)this + 40;
  v4 = (char *)*((_QWORD *)this + 5);
  while ( v4 != v2 )
  {
    v6 = v4 - 88;
    v4 = *(char **)v4;
    if ( !a2 || *((struct DXGPROCESS **)v6 + 10) == a2 )
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER *, _QWORD))(*(_QWORD *)this + 24LL))(this, *((unsigned int *)v6 + 6));
  }
  if ( !a2 )
  {
    v7 = (void *)*((_QWORD *)this + 3);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 3) = 0;
  }
}
