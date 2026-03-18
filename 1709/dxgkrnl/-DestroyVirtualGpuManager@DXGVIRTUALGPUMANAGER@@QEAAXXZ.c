/*
 * XREFs of ?DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C0188E5C
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0176CB4 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(DXGVIRTUALGPUMANAGER *this, __int64 a2)
{
  char *v2; // rdi
  char *v4; // r14
  char *v5; // rbx
  __int64 v6; // rax
  char *v7; // rcx
  void *v8; // rcx

  v2 = (char *)this + 40;
  v4 = (char *)*((_QWORD *)this + 5);
  while ( v4 != v2 )
  {
    v5 = v4 - 88;
    LOBYTE(a2) = 1;
    v6 = *((_QWORD *)v4 - 11);
    v7 = v4 - 88;
    v4 = *(char **)v4;
    (*(void (__fastcall **)(char *, __int64))(v6 + 8))(v7, a2);
    (**(void (__fastcall ***)(char *, __int64))v5)(v5, 1LL);
  }
  v8 = (void *)*((_QWORD *)this + 3);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
