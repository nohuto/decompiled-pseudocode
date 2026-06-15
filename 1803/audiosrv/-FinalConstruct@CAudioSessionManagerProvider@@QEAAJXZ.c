/*
 * XREFs of ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180059FF4
 * Callers:
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x180059B34 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     ?CreateInstance@DynamicAudioEndpointManager@@SAJPEAPEAV1@@Z @ 0x180059BFC (-CreateInstance@DynamicAudioEndpointManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x18005F664 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::FinalConstruct(CAudioSessionManagerProvider *this)
{
  struct ITelephonyControl *v1; // rdi
  __int64 v3; // r8
  int v4; // ebx
  int v5; // eax
  struct IAudioDuckingManager *v6; // rcx
  struct IAudioPolicyManager *v7; // rax
  struct ISessionInternalEvents *v8; // rax
  struct ITelephonyControl *v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h] BYREF
  struct IAudioDuckingManager *v12; // [rsp+50h] [rbp+20h] BYREF
  struct IAudioPolicyManager *v13; // [rsp+58h] [rbp+28h] BYREF
  struct ISessionInternalEvents *v14; // [rsp+60h] [rbp+30h] BYREF
  struct ISessionInternalEvents *v15; // [rsp+68h] [rbp+38h] BYREF

  v12 = 0LL;
  v1 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v10 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_aeba30c7500c361d0468064516c9e613_Traceguids);
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v3 = 0LL;
  v11 = 0LL;
  if ( g_AudioResourceManager )
  {
    (**(void (__fastcall ***)(CAudioResourceManager *, GUID *, __int64 *))g_AudioResourceManager)(
      g_AudioResourceManager,
      &GUID_00d73368_f0b0_4e37_ac78_4802c792d4cb,
      &v11);
    v3 = v11;
  }
  v4 = ActivatePolicyManager(g_pEndpointCharacteristicsCache, g_pVolumeProvider, v3, &v13);
  if ( v4 < 0
    || (v4 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, struct ISessionInternalEvents **))v13)(
               v13,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               &v14),
        v4 < 0)
    || (v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioDuckingManager **))(*(_QWORD *)v13 + 24LL))(
               v13,
               &v12),
        v4 < 0)
    || (v5 = PhoneCallAudio::CreateInstance(&v10), v1 = v10, v4 = v5, v5 < 0)
    || (v4 = (**(__int64 (__fastcall ***)(struct ITelephonyControl *, GUID *, struct ISessionInternalEvents **))v10)(
               v10,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               &v15),
        v4 < 0)
    || (v4 = DynamicAudioEndpointManager::CreateInstance(&v10), v4 < 0) )
  {
    v6 = v12;
  }
  else
  {
    v6 = 0LL;
    g_DuckingManager = v12;
    v7 = v13;
    v13 = 0LL;
    g_PolicyManager = v7;
    v8 = v14;
    v14 = 0LL;
    g_PolicyEventsHandler = v8;
    g_TelephonyControlEventsHandler = v15;
    g_TelephonyControl = (struct IUnknown *)v1;
    v1 = 0LL;
    v15 = 0LL;
    g_DynamicAudioEndpointManager = v10;
    v12 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)v6 + 16LL))(v6);
    v12 = 0LL;
  }
  if ( v13 )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v13 + 16LL))(v13);
    v13 = 0LL;
  }
  if ( v14 )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v14 + 16LL))(v14);
    v14 = 0LL;
  }
  if ( v1 )
    (*(void (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v15 )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v15 + 16LL))(v15);
    v15 = 0LL;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v4;
}
