/*
 * XREFs of DpiFdoCleanupGpuVirtualization @ 0x1C01F1F0C
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7750 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoResetFdo @ 0x1C01F8990 (DpiFdoResetFdo.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DpiFdoCleanupGpuVirtualization(__int64 a1))(_QWORD)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void (__fastcall *v9)(_QWORD); // rax
  void (__fastcall *v10)(_QWORD); // rax
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( *(_QWORD *)(a1 + 2632) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2624), 0);
    v2 = *(void **)(a1 + 2632);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(a1 + 2632) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2648) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2640), 0);
    v3 = *(void **)(a1 + 2648);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 2648) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2664) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2656), 0);
    v4 = *(void **)(a1 + 2664);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(a1 + 2664) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2680) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2672), 0);
    v5 = *(void **)(a1 + 2680);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 2680) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2696) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2688), 0);
    v6 = *(void **)(a1 + 2696);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(a1 + 2696) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2712) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2704), 0);
    v7 = *(void **)(a1 + 2712);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(a1 + 2712) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2728) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2720), 0);
    v8 = *(void **)(a1 + 2728);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(a1 + 2728) = 0LL;
    }
  }
  v9 = *(void (__fastcall **)(_QWORD))(a1 + 4896);
  if ( v9 )
  {
    v9(*(_QWORD *)(a1 + 4880));
    *(_BYTE *)(a1 + 4864) = 0;
    *(_QWORD *)(a1 + 4896) = 0LL;
  }
  v10 = *(void (__fastcall **)(_QWORD))(a1 + 4768);
  if ( v10 )
  {
    v10(*(_QWORD *)(a1 + 4752));
    *(_BYTE *)(a1 + 4736) = 0;
    *(_QWORD *)(a1 + 4768) = 0LL;
  }
  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 5032);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 5016));
    *(_BYTE *)(a1 + 5000) = 0;
    *(_QWORD *)(a1 + 5032) = 0LL;
  }
  return result;
}
