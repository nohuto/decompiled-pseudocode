/*
 * XREFs of ?Release@GazeProcessor@@UEAAKXZ @ 0x180003410
 * Callers:
 *     ?Release@GazeProcessor@@W7EAAKXZ @ 0x1800056F0 (-Release@GazeProcessor@@W7EAAKXZ.c)
 *     ?Release@GestureTargetingComponent@@WBA@EAAKXZ @ 0x180005700 (-Release@GestureTargetingComponent@@WBA@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WMA@EAAKXZ @ 0x18006F510 (-Release@PTPProcessor@@WMA@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WMI@EAAKXZ @ 0x18006F550 (-Release@PTPProcessor@@WMI@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WLA@EAAKXZ @ 0x18006F590 (-Release@PTPProcessor@@WLA@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WNA@EAAKXZ @ 0x18006F5B0 (-Release@PTPProcessor@@WNA@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WLI@EAAKXZ @ 0x18006F600 (-Release@PTPProcessor@@WLI@EAAKXZ.c)
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18009D530 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ??1?$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E828 (--1-$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__WGIRawInputProvider::s_spInstance__ @ 0x1800D2920 (_dynamic_atexit_destructor_for__WGIRawInputProvider--s_spInstance__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::Release(GazeProcessor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 16);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 6) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 16);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
