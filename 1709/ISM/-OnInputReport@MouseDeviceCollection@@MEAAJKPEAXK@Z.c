/*
 * XREFs of ?OnInputReport@MouseDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008A610
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseDeviceCollection::OnInputReport(
        MouseDeviceCollection *this,
        int a2,
        _QWORD *a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  DWORD TickCount; // r12d
  unsigned int *v10; // r9
  int DeviceInfo; // eax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 v15; // rcx
  int v16; // r9d
  struct DeviceInfo *v18; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[356]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0;
  v5 = a4;
  if ( a4 >= 0x18 )
  {
    while ( 1 )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      v18 = 0LL;
      DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v18, v10);
      v4 = DeviceInfo;
      if ( DeviceInfo < 0 )
        break;
      memset(v20, 0, sizeof(v20));
      v13 = *(_OWORD *)a3;
      v14 = a3[2];
      HIDWORD(v20[0]) = *(_DWORD *)v18;
      v15 = *((_QWORD *)this + 2);
      v20[2] = PerformanceCount.QuadPart;
      LODWORD(v20[0]) = 2;
      LODWORD(v20[1]) = TickCount;
      LODWORD(v20[5]) = 2848;
      *(_OWORD *)&v20[87] = v13;
      BYTE3(v20[86]) = 1;
      v20[89] = v14;
      DeviceInfo = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 24LL))(v15, v20);
      v4 = DeviceInfo;
      if ( DeviceInfo < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v16 = 185;
        goto LABEL_10;
      }
      v5 -= 24;
      a3 += 3;
      if ( v5 < 0x18 )
        return v4;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v16 = 154;
LABEL_10:
    McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, v16, DeviceInfo);
  }
  return v4;
}
