/*
 * XREFs of ?OnInputReport@HeatDeviceCollection@@MEAAJKPEAXK@Z @ 0x180073C60
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatDeviceCollection::OnInputReport(HeatDeviceCollection *this, int a2, void *a3, int a4)
{
  DWORD TickCount; // ebx
  __int64 v9; // rcx
  int v10; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-718h] BYREF
  _DWORD v13[4]; // [rsp+30h] [rbp-708h] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-6F8h]
  int v15; // [rsp+48h] [rbp-6F0h]
  int v16; // [rsp+238h] [rbp-500h]
  void *v17; // [rsp+240h] [rbp-4F8h]

  memset_0(v13, 0, 0x6C8uLL);
  v15 = 1736;
  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v9 = *((_QWORD *)this + 2);
  v14 = PerformanceCount;
  v13[1] = a2;
  v13[0] = 2048;
  v13[2] = TickCount;
  v17 = a3;
  v16 = a4;
  v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 24LL))(v9, v13);
  if ( v10 < 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)v10;
}
