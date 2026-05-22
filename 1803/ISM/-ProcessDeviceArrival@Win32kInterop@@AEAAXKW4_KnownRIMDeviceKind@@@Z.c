/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z @ 0x180013CB8
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x180013FBC (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 * Callees:
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x180013380 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180013BD8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessDeviceArrival(__int64 a1, unsigned int a2, int a3)
{
  int v5; // esi
  int v6; // r8d
  int v7; // r8d
  unsigned int *v8; // rdi
  unsigned int v9; // r14d
  char v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // r10
  int v14; // eax
  void *v15; // rbp
  unsigned int v16; // esi
  void *v17; // rax
  int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx

  v5 = 2;
  v6 = a3 - 1;
  if ( !v6 )
  {
LABEL_4:
    *(_BYTE *)(a1 + 1968) = 1;
    goto LABEL_5;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 2 )
      return;
    goto LABEL_4;
  }
  v5 = 4;
LABEL_5:
  if ( Win32kInterop::IsDeviceAttached((Win32kInterop *)a1, a2, 0) )
    return;
  InputETW::Win32kInterop::ProcessDeviceArrival(a2);
  v8 = (unsigned int *)operator new(0x3D8uLL);
  memset_0(v8, 0, 0x3D8uLL);
  v8[2] = 984;
  *v8 = a2;
  v8[1] = v5;
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)(a1 + 56) + 40LL))(
         *(_QWORD *)(a1 + 56),
         v8,
         a1) < 0 )
    goto LABEL_32;
  v9 = 0;
  v10 = 0;
  if ( *v8 == *(_DWORD *)(a1 + 80) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
LABEL_32:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return;
  }
  v11 = *(_DWORD *)(a1 + 72);
  v12 = 0;
  if ( v11 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    do
    {
      v14 = *(_DWORD *)(v13 + 16LL * v12);
      if ( v14 == *v8 )
      {
        *(_QWORD *)(v13 + 16LL * v12 + 8) = v8;
        return;
      }
      if ( !v10 && v14 == *(_DWORD *)(a1 + 80) )
      {
        v9 = v12;
        v10 = 1;
      }
      ++v12;
    }
    while ( v12 < v11 );
    if ( v10 )
      goto LABEL_30;
  }
  if ( *(_DWORD *)(a1 + 76) != v11 )
    goto LABEL_32;
  v15 = *(void **)(a1 + 64);
  v16 = 2 * v11;
  v9 = *(_DWORD *)(a1 + 72);
  v17 = operator new[](saturated_mul(2 * v11, 0x10uLL));
  *(_QWORD *)(a1 + 64) = v17;
  if ( v17 )
  {
    memcpy_0(v17, v15, 16LL * *(unsigned int *)(a1 + 72));
    if ( *(_DWORD *)(a1 + 72) < v16 )
    {
      v19 = 16LL * *(unsigned int *)(a1 + 72);
      v20 = v16 - *(_DWORD *)(a1 + 72);
      do
      {
        *(_DWORD *)(v19 + *(_QWORD *)(a1 + 64)) = *(_DWORD *)(a1 + 80);
        v19 += 16LL;
        --v20;
      }
      while ( v20 );
    }
    *(_DWORD *)(a1 + 72) = v16;
    operator delete(v15);
LABEL_30:
    v21 = 2LL * v9;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8 * v21) = *v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v21 + 8) = v8;
    ++*(_DWORD *)(a1 + 76);
    v18 = 0;
  }
  else
  {
    v18 = -2147024882;
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  if ( v18 < 0 )
    goto LABEL_32;
}
