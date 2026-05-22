/*
 * XREFs of ?OnInputReport@KeyboardDeviceCollection@@MEAAJKPEAXK@Z @ 0x180088C60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardDeviceCollection::OnInputReport(
        KeyboardDeviceCollection *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  DWORD TickCount; // r12d
  int DeviceInfo; // eax
  __int64 v11; // rcx
  __int64 v12; // xmm0_8
  __int64 v13; // rcx
  int v14; // r9d
  struct DeviceInfo *v16; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[356]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0;
  v5 = a4;
  if ( a4 >= 0xC )
  {
    while ( 1 )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      v16 = 0LL;
      DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v16);
      v4 = DeviceInfo;
      if ( DeviceInfo < 0 )
        break;
      memset(v18, 0, sizeof(v18));
      v12 = *(_QWORD *)a3;
      HIDWORD(v18[0]) = *(_DWORD *)v16;
      v13 = *((_QWORD *)this + 2);
      LODWORD(v18[0]) = *((_DWORD *)v16 + 1);
      v18[2] = PerformanceCount.QuadPart;
      LODWORD(v18[88]) = a3[2];
      LODWORD(v18[1]) = TickCount;
      LODWORD(v18[5]) = 2848;
      v18[87] = v12;
      BYTE3(v18[86]) = 1;
      DeviceInfo = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 24LL))(v13, v18);
      v4 = DeviceInfo;
      if ( DeviceInfo < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v14 = 183;
        goto LABEL_10;
      }
      v5 -= 12;
      a3 += 3;
      if ( v5 < 0xC )
        return v4;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v14 = 151;
LABEL_10:
    McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, v14, DeviceInfo);
  }
  return v4;
}
