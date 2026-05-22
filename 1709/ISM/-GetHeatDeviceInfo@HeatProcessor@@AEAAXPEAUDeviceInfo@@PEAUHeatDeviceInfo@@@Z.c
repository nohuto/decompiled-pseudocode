/*
 * XREFs of ?GetHeatDeviceInfo@HeatProcessor@@AEAAXPEAUDeviceInfo@@PEAUHeatDeviceInfo@@@Z @ 0x18004824C
 * Callers:
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x18004805C (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800480F0 (-OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HeatProcessor::GetHeatDeviceInfo(HeatProcessor *this, struct DeviceInfo *a2, struct HeatDeviceInfo *a3)
{
  _QWORD *v3; // rsi
  __int16 v6; // ax
  __int64 v7; // rax

  *((_DWORD *)a3 + 3) = 1;
  v3 = (_QWORD *)((char *)a3 + 16);
  *(_DWORD *)a3 = *(_DWORD *)a2;
  *((_WORD *)a3 + 2) = *((_WORD *)a2 + 14);
  *((_WORD *)a3 + 3) = *((_WORD *)a2 + 15);
  v6 = *((_WORD *)a2 + 16);
  *((_QWORD *)a3 + 2) = 0LL;
  *((_WORD *)a3 + 4) = v6;
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), (char *)a3 + 16);
  if ( !*v3 )
  {
    v7 = *((_QWORD *)a2 + 2);
    if ( v7 )
      *v3 = v7;
  }
  *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 6);
}
