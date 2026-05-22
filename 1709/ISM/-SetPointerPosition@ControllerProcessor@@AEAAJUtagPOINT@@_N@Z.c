/*
 * XREFs of ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18004039C
 * Callers:
 *     _lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_::_lambda_invoker_cdecl_ @ 0x18003DB90 (_lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_--_lambda_invoker_cdecl_.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x18003EC80 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18003F0B8 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18003FF08 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::SetPointerPosition(
        ControllerProcessor *this,
        struct tagPOINT a2,
        unsigned __int8 a3)
{
  __int64 result; // rax
  DWORD TickCount; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  ULONGLONG TickCount64; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  LONG y; // [rsp+34h] [rbp-CCh]
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[356]; // [rsp+40h] [rbp-C0h] BYREF

  y = a2.y;
  if ( !a3 && *(_QWORD *)((char *)this + 324) == a2 )
    return 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[0]) = 2;
  TickCount = GetTickCount();
  LODWORD(v16[5]) = 2848;
  LODWORD(v16[1]) = TickCount;
  v16[2] = PerformanceCount.QuadPart;
  v8 = **((_DWORD **)this + 4);
  v16[83] = *((_QWORD *)this + 37);
  WORD1(v16[87]) = a3;
  HIDWORD(v16[0]) = v8;
  BYTE5(v16[346]) = a3;
  if ( a3 )
  {
    v9 = *((_DWORD *)this + 84);
    HIDWORD(v16[88]) = 0xFFFF * a2.x / (*((_DWORD *)this + 83) - 1);
    v10 = 0xFFFF * y / (v9 - 1);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 33) + 24LL))(
      *((_QWORD *)this + 33),
      (char *)this + 324,
      (char *)this + 328);
    HIDWORD(v16[88]) = a2.x - *((_DWORD *)this + 81);
    v10 = y - *((_DWORD *)this + 82);
  }
  LODWORD(v16[89]) = v10;
  TickCount64 = GetTickCount64();
  if ( *((_BYTE *)this + 4080)
    && TickCount64 - ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate > *((_QWORD *)this + 508) )
  {
    ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate = TickCount64;
    HIDWORD(v16[79]) = *((_DWORD *)this + 1018);
    LODWORD(v16[80]) = *((_DWORD *)this + 1019);
    *((_BYTE *)this + 4080) = 0;
    LODWORD(v16[79]) = 1;
  }
  v12 = *((_QWORD *)this + 32);
  *(struct tagPOINT *)((char *)this + 324) = a2;
  LODWORD(result) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 48LL))(v12, v16);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 12, 1842, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
