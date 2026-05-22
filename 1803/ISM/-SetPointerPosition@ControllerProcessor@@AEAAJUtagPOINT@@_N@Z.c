/*
 * XREFs of ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180034D98
 * Callers:
 *     _lambda_c3ab10beb6b1aadf1357327b164eb3e9_::_lambda_invoker_cdecl_ @ 0x1800328F0 (_lambda_c3ab10beb6b1aadf1357327b164eb3e9_--_lambda_invoker_cdecl_.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180033498 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180033880 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1800347D0 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180033D60 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::SetPointerPosition(
        ControllerProcessor *this,
        struct tagPOINT a2,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r15
  LONG y; // r14d
  LONG v7; // esi
  DWORD TickCount; // eax
  int v10; // esi
  __int64 v11; // rcx
  ULONGLONG TickCount64; // rax
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  struct tagPOINT v14; // [rsp+24h] [rbp-DCh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+20Ch] [rbp+10Ch]
  int v20; // [rsp+210h] [rbp+110h]
  int v21; // [rsp+214h] [rbp+114h]
  __int64 v22; // [rsp+228h] [rbp+128h]
  __int16 v23; // [rsp+24Ah] [rbp+14Ah]
  int v24; // [rsp+254h] [rbp+154h]
  int v25; // [rsp+258h] [rbp+158h]
  unsigned __int8 v26; // [rsp+705h] [rbp+605h]

  v5 = 1;
  if ( ((1LL << gdwDeviceFamily) & 0xDDB5) == 0 )
    v5 = a3;
  y = a2.y;
  v7 = a2.y;
  if ( !v5 )
  {
    y = a2.y;
    v7 = a2.y;
    if ( *((_DWORD *)this + 489) == a2.x )
    {
      y = a2.y;
      v7 = a2.y;
      if ( *((_DWORD *)this + 490) == a2.y )
        return 0LL;
    }
  }
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v16, 0, 0x6C8uLL);
  v18 = 1736;
  v16[0] = 2;
  TickCount = GetTickCount();
  v26 = v5;
  v16[2] = TickCount;
  v17 = PerformanceCount;
  v22 = *((_QWORD *)this + 240);
  v23 = v5;
  if ( !v5 )
  {
    v11 = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this, &v14);
    *(_QWORD *)((char *)this + 1956) = v11;
    v24 = a2.x - v11;
    v25 = v7 - HIDWORD(v11);
    goto LABEL_11;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, int *, struct tagPOINT *))(**((_QWORD **)this + 241) + 32LL))(
          *((_QWORD *)this + 241),
          &v13,
          &v14);
  if ( v10 >= 0 )
  {
    v24 = 0xFFFF * a2.x / (v13 - 1);
    v25 = 0xFFFF * y / (v14.x - 1);
LABEL_11:
    TickCount64 = GetTickCount64();
    if ( *((_BYTE *)this + 7120)
      && TickCount64 - ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate > *((_QWORD *)this + 888) )
    {
      ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate = TickCount64;
      v20 = *((_DWORD *)this + 1778);
      v21 = *((_DWORD *)this + 1779);
      *((_BYTE *)this + 7120) = 0;
      v19 = 1;
    }
    *(struct tagPOINT *)((char *)this + 1956) = a2;
    v10 = ControllerProcessor::SendMouseInputInfo(this, (struct LegacyInputInfo *)v16);
    if ( v10 >= 0 )
      return (unsigned int)v10;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)v10;
}
