/*
 * XREFs of ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180017690
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180017F28 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003B784 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x180017828 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x180018044 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180033A34 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180036A68 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006EC5C (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAXHH@Z @ 0x18007BCC0 (-HandleScreenRotation@CWindowList@@QEAAXHH@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateRenderTargets(CDesktopManager *this)
{
  int v2; // ebx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  int DcompTargetsForNewGroup; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int128 v12; // [rsp+38h] [rbp-21h] BYREF
  __int64 v13; // [rsp+48h] [rbp-11h]
  unsigned int v14; // [rsp+50h] [rbp-9h]
  __int128 v15; // [rsp+58h] [rbp-1h] BYREF
  __int64 v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+C8h] [rbp+6Fh] BYREF
  int v19; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  v20 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v16 = 0LL;
    v3 = (_QWORD *)((char *)this + 80);
    v17 = 0;
    v4 = *((_QWORD *)this + 10);
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v12 = 0LL;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *v3 = 0LL;
    }
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 25))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
           &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4,
           &v20);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x45Eu);
    }
    else
    {
      DcompTargetsForNewGroup = CDesktopManager::GetDcompTargetsForNewGroup(this, (__int64)&v19, (__int64)&v18);
      v2 = DcompTargetsForNewGroup;
      if ( DcompTargetsForNewGroup < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DcompTargetsForNewGroup, 0x462u);
      }
      else if ( v14 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v20 + 424LL))(v20, v12, v14, v3);
        v8 = FailFastIfAccessDenied(v7);
        v2 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x479u);
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9), *v3);
          v2 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x47Bu);
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25)
                                                    + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
            v2 = v10;
            if ( v10 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x47Du);
            else
              CDesktopManager::UpdateMaxTextureSize(this);
          }
        }
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v12);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v15);
    if ( v2 < 0 )
      CDesktopManager::ReleaseRenderTarget(this);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v2;
}
