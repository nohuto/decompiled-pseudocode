/*
 * XREFs of ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x1800378E0
 * Callers:
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800377A8 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::FinalConstruct(CAudioSessionManagerProvider *this)
{
  int v2; // ebx
  struct IAudioDuckingManager *v3; // r8
  struct IAudioPolicyManager *v4; // rdx
  struct ISessionInternalEvents *v5; // rcx
  struct IAudioPolicyManager *v7; // [rsp+30h] [rbp+10h] BYREF
  struct ISessionInternalEvents *v8; // [rsp+38h] [rbp+18h] BYREF
  struct IAudioDuckingManager *v9; // [rsp+40h] [rbp+20h] BYREF

  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_0f05c22c788936a81d29e29f46ea837d_Traceguids);
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v2 = ActivatePolicyManager(g_pEndpointCharacteristicsCache, g_pVolumeProvider, &v7);
  if ( v2 < 0
    || (v2 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, struct ISessionInternalEvents **))v7)(
               v7,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               &v8),
        v2 < 0)
    || (v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioDuckingManager **))(*(_QWORD *)v7 + 24LL))(
               v7,
               &v9),
        v2 < 0) )
  {
    v3 = v9;
    v4 = v7;
    v5 = v8;
  }
  else
  {
    v3 = 0LL;
    g_DuckingManager = v9;
    v4 = 0LL;
    v5 = 0LL;
    g_PolicyManager = v7;
    g_PolicyEventsHandler = v8;
    v9 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)v3 + 16LL))(v3);
    v9 = 0LL;
    v4 = v7;
    v5 = v8;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v4 + 16LL))(v4);
    v7 = 0LL;
    v5 = v8;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v2;
}
