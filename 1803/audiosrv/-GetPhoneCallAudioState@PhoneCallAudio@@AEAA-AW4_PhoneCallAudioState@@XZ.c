/*
 * XREFs of ?GetPhoneCallAudioState@PhoneCallAudio@@AEAA?AW4_PhoneCallAudioState@@XZ @ 0x18005595C
 * Callers:
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800559FC (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800FAA14 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 * Callees:
 *     ?IsTimerStarted@RoutingTimer@@UEAAHXZ @ 0x18005F9B0 (-IsTimerStarted@RoutingTimer@@UEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::GetPhoneCallAudioState(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // r8
  int v4; // esi
  unsigned int v5; // ebx
  RoutingTimer *v6; // rcx
  __int64 (__fastcall *v7)(RoutingTimer *__hidden); // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 208);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 208));
  v4 = 1;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 84) || *(_DWORD *)(a1 + 108) )
    goto LABEL_9;
  v6 = *(RoutingTimer **)(a1 + 72);
  v7 = *(__int64 (__fastcall **)(RoutingTimer *__hidden))(*(_QWORD *)v6 + 16LL);
  if ( v7 == RoutingTimer::IsTimerStarted
     ? RoutingTimer::IsTimerStarted(v6)
     : ((unsigned int (__fastcall *)(RoutingTimer *, __int64 (__fastcall *)(RoutingTimer *__hidden), __int64))v7)(
         v6,
         RoutingTimer::IsTimerStarted,
         v3) )
  {
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 92) )
  {
    v4 = 2;
LABEL_9:
    v5 = v4;
  }
  LeaveCriticalSection(v2);
  return v5;
}
