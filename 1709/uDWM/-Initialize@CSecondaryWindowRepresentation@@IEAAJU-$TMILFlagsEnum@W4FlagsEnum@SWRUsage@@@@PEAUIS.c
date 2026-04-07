/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000EFF4
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18000DBE8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C938 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18000C960 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000EEE4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Initialize(
        CSecondaryWindowRepresentation *this,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  int v6; // esi
  __int64 v9; // r10
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v16; // eax
  int SnapshotIndex; // eax
  CTransitionVisualController *v18; // rcx
  int v19; // r9d
  struct CTransitionWindowSnapshot *v20; // r8
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v23; // [rsp+50h] [rbp+8h] BYREF
  struct CTransitionWindowSnapshot *v24; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  *((_DWORD *)this + 41) = a5;
  *((_DWORD *)this + 30) = a6;
  *((_DWORD *)this + 10) = a2;
  *((_QWORD *)this + 4) = a4;
  *((_QWORD *)this + 21) = a3;
  if ( (a2 & 1) != 0 )
  {
    v14 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    v13 = v14;
    if ( v14 < 0 )
    {
      v22 = 146;
LABEL_18:
      v19 = v14;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v22);
      return (unsigned int)v13;
    }
  }
  v9 = *((_QWORD *)this + 4);
  v10 = a5;
  v23 = this;
  v11 = *(unsigned int *)(v9 + 464);
  v12 = v11 + 1;
  if ( (int)v11 + 1 >= (unsigned int)v11 )
    v10 = v11 + 1;
  v13 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
  if ( v12 < (unsigned int)v11 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB5u);
  }
  else if ( v10 > *(_DWORD *)(v9 + 460) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 440, 8LL, 1LL, &v23);
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 440) + 8 * v11) = v23;
    *(_DWORD *)(v9 + 464) = v10;
  }
  if ( v13 < 0 )
  {
    v22 = 149;
    v19 = v13;
    goto LABEL_20;
  }
  v14 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v13 = v14;
  if ( v14 < 0 )
  {
    v22 = 156;
    goto LABEL_18;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0 )
  {
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
                      *(HWND *)(a4 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v18, SnapshotIndex, &v24) >= 0 )
    {
      v20 = v24;
      if ( *((_BYTE *)v24 + 356) )
      {
        v21 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 35) + 32LL) + 56LL)
           - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 35) + 32LL) + 48LL) >= 0 )
          v21 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 35) + 32LL) + 56LL)
              - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 35) + 32LL) + 48LL);
        if ( *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL) >= 0 )
          v6 = *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL);
        if ( v21 == v6 )
        {
          *((_QWORD *)this + 68) = v24;
          _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
          *((_BYTE *)this + 160) = 1;
        }
      }
    }
  }
  return (unsigned int)v13;
}
