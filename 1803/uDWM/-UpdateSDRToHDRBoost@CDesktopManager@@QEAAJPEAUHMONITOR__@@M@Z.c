/*
 * XREFs of ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800757A0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180033ECC (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x18003518C (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18003930C (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDCompositionRenderTargetPartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800748E8 (--4-$ComPtr@UIDCompositionRenderTargetPartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionRend.c)
 */

__int64 __fastcall CDesktopManager::UpdateSDRToHDRBoost(CDesktopManager *this, HMONITOR a2, float a3)
{
  __int64 v3; // rcx
  __int64 v5; // rbx
  int AllDisplaysNoRef; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r14
  int v11; // eax
  struct IDCompositionRenderTargetPartner *DcompTarget; // rax
  int v14; // eax
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+44h] [rbp-1Ch]
  unsigned int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+80h] [rbp+20h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 19);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v5 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v3, (__int64)&v16);
  v7 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x3ACu);
    goto LABEL_11;
  }
  v8 = 0LL;
  if ( !v19 )
    goto LABEL_7;
  v9 = v16;
  while ( 1 )
  {
    v10 = (unsigned int)v8;
    if ( *(HMONITOR *)(*(_QWORD *)(v16 + 8 * v8) + 16LL) == a2 )
      break;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v19 )
      goto LABEL_7;
  }
  if ( !(unsigned int)IsHDRDisplay(a2) )
    goto LABEL_7;
  DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v9 + 8 * v10));
  Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner>::operator=((__int64 *)&v21, (__int64)DcompTarget);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
  v5 = (__int64)v21;
  v14 = (**v21)(v21, &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e, &v20);
  v7 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3B5u);
    goto LABEL_9;
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
  v7 = v15;
  if ( v15 >= 0 )
  {
LABEL_7:
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3BBu);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x3B6u);
LABEL_9:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_11:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v16);
  return v7;
}
