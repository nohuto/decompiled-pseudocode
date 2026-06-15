/*
 * XREFs of ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18007B884
 * Callers:
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18007B708 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x1800C7B7C (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::FinalConstruct(CAudioSessionManagerProvider *this)
{
  struct ITelephonyControl *v1; // rbx
  __int64 v3; // r8
  int v4; // edi
  int v5; // eax
  struct IAudioDuckingManager *v6; // rcx
  struct IAudioPolicyManager *v7; // rax
  struct ISessionInternalEvents *v8; // rax
  struct ISessionInternalEvents *v9; // rax
  struct ITelephonyControl *v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  struct IAudioDuckingManager *v13; // [rsp+50h] [rbp+20h] BYREF
  struct IAudioPolicyManager *v14; // [rsp+58h] [rbp+28h] BYREF
  struct ISessionInternalEvents *v15; // [rsp+60h] [rbp+30h] BYREF
  struct ISessionInternalEvents *v16; // [rsp+68h] [rbp+38h] BYREF

  v13 = 0LL;
  v1 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v11 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_d4407cbbbdf0327ea3ff22e6cef445ee_Traceguids);
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v3 = 0LL;
  v12 = 0LL;
  if ( g_AudioResourceManager )
  {
    (**(void (__fastcall ***)(CAudioResourceManager *, GUID *, __int64 *))g_AudioResourceManager)(
      g_AudioResourceManager,
      &GUID_00d73368_f0b0_4e37_ac78_4802c792d4cb,
      &v12);
    v3 = v12;
  }
  v4 = ActivatePolicyManager(g_pEndpointCharacteristicsCache, g_pVolumeProvider, v3, &v14);
  if ( v4 < 0
    || (v4 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, struct ISessionInternalEvents **))v14)(
               v14,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               &v15),
        v4 < 0)
    || (v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioDuckingManager **))(*(_QWORD *)v14 + 24LL))(
               v14,
               &v13),
        v4 < 0)
    || (v5 = PhoneCallAudio::CreateInstance(&v11), v1 = v11, v4 = v5, v5 < 0)
    || (v4 = (**(__int64 (__fastcall ***)(struct ITelephonyControl *, GUID *, struct ISessionInternalEvents **))v11)(
               v11,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               &v16),
        v4 < 0) )
  {
    v6 = v13;
  }
  else
  {
    v6 = 0LL;
    g_DuckingManager = v13;
    v7 = v14;
    v14 = 0LL;
    g_PolicyManager = v7;
    v8 = v15;
    v15 = 0LL;
    g_PolicyEventsHandler = v8;
    v9 = v16;
    g_TelephonyControl = v1;
    v1 = 0LL;
    v16 = 0LL;
    g_TelephonyControlEventsHandler = v9;
    v13 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)v6 + 16LL))(v6);
    v13 = 0LL;
  }
  if ( v14 )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v14 + 16LL))(v14);
    v14 = 0LL;
  }
  if ( v15 )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v15 + 16LL))(v15);
    v15 = 0LL;
  }
  if ( v1 )
    (*(void (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v16 )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v16 + 16LL))(v16);
    v16 = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v4;
}
