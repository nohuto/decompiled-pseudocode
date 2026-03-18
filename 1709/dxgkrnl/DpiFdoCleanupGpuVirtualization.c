/*
 * XREFs of DpiFdoCleanupGpuVirtualization @ 0x1C01DC4D8
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0114654 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C01DEDB0 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
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
  v9 = *(void (__fastcall **)(_QWORD))(a1 + 4824);
  if ( v9 )
  {
    v9(*(_QWORD *)(a1 + 4808));
    *(_BYTE *)(a1 + 4792) = 0;
    *(_QWORD *)(a1 + 4824) = 0LL;
  }
  v10 = *(void (__fastcall **)(_QWORD))(a1 + 4696);
  if ( v10 )
  {
    v10(*(_QWORD *)(a1 + 4680));
    *(_BYTE *)(a1 + 4664) = 0;
    *(_QWORD *)(a1 + 4696) = 0LL;
  }
  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 4960);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 4944));
    *(_BYTE *)(a1 + 4928) = 0;
    *(_QWORD *)(a1 + 4960) = 0LL;
  }
  return result;
}
