/*
 * XREFs of ?GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z @ 0x14003A2B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Ds @ 0x140038E54 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::GetLatency(CSystemAudioDeviceExclusive *this, __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v6; // edi
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v8 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v8);
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 29) + 40LL))(*((_QWORD *)this + 29), a3);
  LeaveCriticalSection(v5);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        (__int64)&WPP_9e48b31587bc35583f1427a0ce942582_Traceguids,
        v6,
        (__int64)"CSystemAudioDeviceExclusive::GetLatency");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::GetLatency", 0xB5u, v6);
  }
  EtwEventActivityIdControl(4LL, &v8);
  return (unsigned int)v6;
}
