/*
 * XREFs of ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000E900
 * Callers:
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005080 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::Pause(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v3; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15));
  LeaveCriticalSection(v1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids);
  }
  return v3;
}
