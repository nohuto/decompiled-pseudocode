/*
 * XREFs of ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18002B990
 * Callers:
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 * Callees:
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180009520 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009600 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x180009730 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180009D70 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18000A980 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::ConnectToSaDevice(__int64 a1, CSaDeviceProxy *a2, unsigned int a3)
{
  CSaDeviceProxy *v6; // rax
  int v7; // edi
  struct IAudioDeviceGraph *v8; // rcx
  __int64 (__fastcall *v9)(CSaDeviceProxy *, struct IAudioDeviceGraph **); // rax
  int DeviceGraph; // eax
  __int64 v11; // rcx
  CSaDeviceProxy *v12; // rcx
  void (__fastcall *v13)(CSaDeviceProxy *, struct IStreamGroupProxy *); // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(CBaseStreamGroupProxy *); // rax
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 (__fastcall *v18)(__int64, int, unsigned int, unsigned int); // rax
  int v19; // eax
  struct IAudioDeviceGraph *v20; // rcx
  LPCRITICAL_SECTION lpCriticalSection[5]; // [rsp+30h] [rbp-28h] BYREF
  struct IAudioDeviceGraph *v23; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids, a1 - 8, a2);
  }
  v23 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 88, (__int64)lpCriticalSection);
  v6 = *(CSaDeviceProxy **)(a1 + 80);
  if ( v6 && v6 != a2 )
  {
    v7 = -2005139410;
LABEL_39:
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14LL,
        &WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids,
        (unsigned int)v7);
    }
    goto LABEL_27;
  }
  v7 = 0;
  if ( !v6 )
  {
    v8 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *(__int64 (__fastcall **)(CSaDeviceProxy *, struct IAudioDeviceGraph **))(*(_QWORD *)a2 + 56LL);
    if ( v9 == CSaDeviceProxy::GetDeviceGraph )
      DeviceGraph = CSaDeviceProxy::GetDeviceGraph(a2, &v23);
    else
      DeviceGraph = v9(a2, &v23);
    v7 = DeviceGraph;
    if ( DeviceGraph < 0 )
      goto LABEL_39;
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioDeviceGraph *, _QWORD))(**(_QWORD **)(a1 + 72) + 72LL))(
           *(_QWORD *)(a1 + 72),
           v23,
           a3);
    if ( v7 < 0 )
      goto LABEL_39;
    if ( *(CSaDeviceProxy **)(a1 + 80) != a2 )
    {
      (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = a2;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = *(CSaDeviceProxy **)(a1 + 80);
    v13 = *(void (__fastcall **)(CSaDeviceProxy *, struct IStreamGroupProxy *))(*(_QWORD *)v12 + 160LL);
    if ( v13 == CSaDeviceProxy::OnStreamGroupConnected )
      CSaDeviceProxy::OnStreamGroupConnected(v12, (struct IStreamGroupProxy *)a1);
    else
      v13(v12, (struct IStreamGroupProxy *)a1);
    v14 = *(_QWORD *)(a1 + 80);
    v15 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a1 + 136LL);
    v16 = v15 == CBaseStreamGroupProxy::GetResourcePriority
        ? CBaseStreamGroupProxy::GetResourcePriority((CBaseStreamGroupProxy *)a1)
        : v15((CBaseStreamGroupProxy *)a1);
    v17 = v16;
    v18 = *(__int64 (__fastcall **)(__int64, int, unsigned int, unsigned int))(*(_QWORD *)v14 + 72LL);
    v19 = v18 == CSaDeviceProxy::UpdateStreamGroupResourcePriority
        ? CSaDeviceProxy::UpdateStreamGroupResourcePriority(v14, 0, v17, 0xFFFFFFFF)
        : v18(v14, 0, v17, 0xFFFFFFFF);
    v7 = v19;
    if ( v19 < 0 )
    {
      CBaseStreamGroupProxy::DisconnectFromSaDevice((CBaseStreamGroupProxy *)a1);
      goto LABEL_39;
    }
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids, a1 - 8, a2);
  }
LABEL_27:
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  v20 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v7;
}
