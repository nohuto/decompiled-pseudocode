/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180049FF4
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180025418 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004A270 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x180025568 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800342A0 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180034E28 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800396C4 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18004A868 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18004B0D8 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAXHH@Z @ 0x18008527C (-HandleScreenRotation@CWindowList@@QEAAXHH@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CDesktopManager *this)
{
  _QWORD *v1; // rsi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ebx
  int DcompTargetsForNewGroup; // eax
  CDWMDisplay *v7; // r14
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  CDWMDisplaySet *v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  CDWMDisplay *v17; // [rsp+48h] [rbp-21h]
  __int128 v18; // [rsp+50h] [rbp-19h] BYREF
  __int64 v19; // [rsp+60h] [rbp-9h]
  unsigned int v20; // [rsp+68h] [rbp-1h]
  __int128 v21; // [rsp+70h] [rbp+7h] BYREF
  __int64 v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  __int64 v24; // [rsp+D0h] [rbp+67h] BYREF
  char v25; // [rsp+D8h] [rbp+6Fh]
  __int64 v26; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = (_QWORD *)((char *)this + 80);
  v16 = 0LL;
  v22 = 0LL;
  v3 = *((_QWORD *)this + 10);
  v23 = 0;
  v19 = 0LL;
  v20 = 0;
  v25 = 0;
  LOBYTE(v24) = 0;
  v17 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *v1 = 0LL;
  }
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 25))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
         &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4,
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DcompTargetsForNewGroup = CDesktopManager::GetDcompTargetsForNewGroup(
                                this,
                                (__int64)&v24,
                                (__int64)&v27,
                                (__int64)&v26);
    v5 = DcompTargetsForNewGroup;
    if ( DcompTargetsForNewGroup < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DcompTargetsForNewGroup, 0x4A5u);
      goto LABEL_21;
    }
    if ( (_BYTE)v24 )
    {
      CWindowList::HandleScreenRotation(*((CWindowList **)this + 56), v27, v26);
      v7 = v17;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 8) + 16LL)
                                                                             + 720LL))(
             *(_QWORD *)(*((_QWORD *)this + 8) + 16LL),
             *(unsigned int *)(*((_QWORD *)this + 8) + 24LL),
             (char *)v17 + 56,
             (char *)v17 + 40,
             *((_DWORD *)v17 + 52));
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4B3u);
        goto LABEL_21;
      }
      CDWMDisplay::Release(v7);
    }
    if ( v25 )
    {
      if ( v20
        && (v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v16 + 424LL))(
                   v16,
                   v18,
                   v20,
                   v1),
            v10 = FailFastIfAccessDenied(v9),
            v5 = v10,
            v10 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4BEu);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9), *v1);
        v5 = v11;
        if ( v11 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
          v5 = v12;
          if ( v12 >= 0 )
            CDesktopManager::UpdateMaxTextureSize(this);
          else
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x4C3u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x4C1u);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x49Cu);
  }
LABEL_21:
  if ( v5 < 0 )
  {
    CDesktopManager::ReleaseMonitorRenderTargets(this);
    v13 = *((_QWORD *)this + 18);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *((_QWORD *)this + 18) = 0LL;
    }
    v14 = (CDWMDisplaySet *)*((_QWORD *)this + 19);
    if ( v14 )
    {
      CDWMDisplaySet::Release(v14);
      *((_QWORD *)this + 19) = 0LL;
    }
  }
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v16 = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v18);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v21);
  return (unsigned int)v5;
}
