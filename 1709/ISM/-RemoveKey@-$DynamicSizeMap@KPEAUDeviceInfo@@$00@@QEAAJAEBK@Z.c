/*
 * XREFs of ?RemoveKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z @ 0x180012180
 * Callers:
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x18000F578 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18001A098 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ?OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z @ 0x18008A940 (-OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@TouchDeviceCollection@@MEAAJK@Z @ 0x18008B130 (-OnDeviceRemoval@TouchDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x18008B7B0 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,DeviceInfo *,1>::RemoveKey(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 v6; // rdx

  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v4 = *(_QWORD *)a1;
    while ( *(_DWORD *)(v4 + 16LL * v3) != *a2 )
    {
      if ( ++v3 >= *(_DWORD *)(a1 + 8) )
        goto LABEL_5;
    }
    v6 = 2LL * v3;
    *(_DWORD *)(v4 + 8 * v6) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v6 + 8) = 0LL;
    --*(_DWORD *)(a1 + 12);
  }
  else
  {
LABEL_5:
    v2 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 221, 5);
  }
  return v2;
}
