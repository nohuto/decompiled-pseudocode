/*
 * XREFs of ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800679B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMuteSoftware::SetMuteValue(CMuteSoftware *this, int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+74h] [rbp+Ch]
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, this, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)this + 6) = a2;
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
    goto LABEL_13;
  v13 = 50000LL;
  LOBYTE(v5) = a2 != 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(
         v6,
         v5,
         0LL,
         1LL,
         &v13);
  v4 = v7;
  if ( v7 == -2147417848 || v7 == -2147023174 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 5);
    v4 = 0;
  }
  if ( v4 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CMuteSoftware::SetMuteValue", 891, v4);
  }
  else
  {
LABEL_13:
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, this);
    }
    *((_BYTE *)this + 96) = 1;
    v11 = -10000000;
    v12 = -1;
    if ( ThreadPool )
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, int *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)this + 11),
        &v11,
        0LL,
        0);
  }
  if ( v10 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v10 = 0;
  }
  return (unsigned int)v4;
}
