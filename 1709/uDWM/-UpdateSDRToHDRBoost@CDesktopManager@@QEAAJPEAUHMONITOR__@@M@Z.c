/*
 * XREFs of ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x18006ED60
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180032A98 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x180033D78 (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSDRToHDRBoost(CDesktopManager *this, HMONITOR a2, float a3)
{
  __int64 v3; // rcx
  struct IDCompositionRenderTargetPartner *DcompTarget; // rdi
  int AllDisplaysNoRef; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+44h] [rbp-1Ch]
  unsigned int v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 19);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  DcompTarget = 0LL;
  v17 = 0LL;
  v13 = 0LL;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v3, (__int64)&v13);
  v7 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllDisplaysNoRef, 0x36Eu);
    goto LABEL_17;
  }
  v8 = 0LL;
  if ( v16 )
  {
    while ( *(HMONITOR *)(*(_QWORD *)(v13 + 8 * v8) + 16LL) != a2 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v16 )
        goto LABEL_14;
    }
    DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v13 + 8 * v8));
    v9 = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))DcompTarget)(
           DcompTarget,
           &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
           &v17);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x376u);
      goto LABEL_17;
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x378u);
      goto LABEL_17;
    }
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v17 = 0LL;
    }
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
  }
LABEL_14:
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
  v7 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x381u);
  DcompTarget = 0LL;
LABEL_17:
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v17 = 0LL;
  }
  if ( DcompTarget )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v13);
  return v7;
}
