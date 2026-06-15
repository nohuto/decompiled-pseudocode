/*
 * XREFs of ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x180005170
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetGroupingParam(CAudioSession *this, struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v4; // rsi
  _QWORD *i; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  *a2 = *(struct _GUID *)((char *)this + 284);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v4 = (_QWORD *)*((_QWORD *)this + 98);
  for ( i = (_QWORD *)*((_QWORD *)this + 97); i != v4; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 448LL))(*i);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
