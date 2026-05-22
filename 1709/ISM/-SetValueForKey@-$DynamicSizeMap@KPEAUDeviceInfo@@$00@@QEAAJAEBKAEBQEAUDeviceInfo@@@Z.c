/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x180011F94
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z @ 0x18000F46C (-ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18001A098 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ?RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z @ 0x18001C2E0 (-RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18006FC40 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008AA10 (-OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008B200 (-OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008B880 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  int v5; // r11d
  unsigned int v6; // r14d
  char v7; // r9
  __int64 v10; // rdi
  char v11; // bl
  int v12; // r9d
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // r10
  void *v16; // rsi
  unsigned int v17; // ebx
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx

  v3 = *a2;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  v7 = 0;
  v10 = a1;
  if ( *a2 == v5 )
  {
    v11 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v12 = 153;
LABEL_4:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v12, v11);
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v13 = *(_DWORD *)(a1 + 8);
  v14 = 0;
  if ( !v13 )
    goto LABEL_16;
  v15 = *(_QWORD *)a1;
  do
  {
    a1 = v14;
    if ( *(_DWORD *)(v15 + 16LL * v14) == v3 )
    {
      *(_QWORD *)(v15 + 16LL * v14 + 8) = *a3;
      return v4;
    }
    if ( !v7 && *(_DWORD *)(v15 + 16LL * v14) == v5 )
    {
      v6 = v14;
      v7 = 1;
    }
    ++v14;
  }
  while ( v14 < v13 );
  if ( v7 )
  {
LABEL_28:
    v22 = 2LL * v6;
    *(_DWORD *)(*(_QWORD *)v10 + 8 * v22) = *a2;
    *(_QWORD *)(*(_QWORD *)v10 + 8 * v22 + 8) = *a3;
    ++*(_DWORD *)(v10 + 12);
    return 0;
  }
LABEL_16:
  if ( *(_DWORD *)(v10 + 12) == v13 )
  {
    v16 = *(void **)v10;
    v17 = 2 * v13;
    v6 = v13;
    v18 = operator new[](saturated_mul(2 * v13, 0x10uLL));
    *(_QWORD *)v10 = v18;
    if ( !v18 )
    {
      v11 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 387, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v12 = 185;
      goto LABEL_4;
    }
    memcpy_0(v18, v16, 16LL * *(unsigned int *)(v10 + 8));
    if ( *(_DWORD *)(v10 + 8) < v17 )
    {
      v20 = 16LL * *(unsigned int *)(v10 + 8);
      v21 = v17 - *(_DWORD *)(v10 + 8);
      do
      {
        *(_DWORD *)(v20 + *(_QWORD *)v10) = *(_DWORD *)(v10 + 16);
        v20 += 16LL;
        --v21;
      }
      while ( v21 );
    }
    *(_DWORD *)(v10 + 8) = v17;
    operator delete(v16);
    goto LABEL_28;
  }
  v4 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v4;
}
