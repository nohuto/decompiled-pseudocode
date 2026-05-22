/*
 * XREFs of ?OnInputReport@HeatDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009B290
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatDeviceCollection::OnInputReport(HeatDeviceCollection *this, int a2, void *a3, int a4)
{
  DWORD TickCount; // ebx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-B58h] BYREF
  _DWORD v13[4]; // [rsp+38h] [rbp-B50h] BYREF
  LARGE_INTEGER v14; // [rsp+48h] [rbp-B40h]
  int v15; // [rsp+60h] [rbp-B28h]
  int v16; // [rsp+2F0h] [rbp-898h]
  void *v17; // [rsp+2F8h] [rbp-890h]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v9 = *((_QWORD *)this + 2);
  v14 = PerformanceCount;
  v13[1] = a2;
  v13[0] = 2048;
  v13[2] = TickCount;
  v15 = 2848;
  v17 = a3;
  v16 = a4;
  LODWORD(result) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 24LL))(v9, v13);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 188, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
