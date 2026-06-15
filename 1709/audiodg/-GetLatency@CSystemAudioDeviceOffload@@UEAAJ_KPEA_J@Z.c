/*
 * XREFs of ?GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z @ 0x14003D1A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Ds @ 0x140038734 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetLatency(CSystemAudioDeviceOffload *this, __int64 a2, __int64 *a3)
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
        (__int64)&WPP_280372cfd5753b11ae35f7647d6422a5_Traceguids,
        v6,
        (__int64)"CSystemAudioDeviceOffload::GetLatency");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::GetLatency", 0xC8u, v6);
  }
  EtwEventActivityIdControl(4LL, &v8);
  return (unsigned int)v6;
}
