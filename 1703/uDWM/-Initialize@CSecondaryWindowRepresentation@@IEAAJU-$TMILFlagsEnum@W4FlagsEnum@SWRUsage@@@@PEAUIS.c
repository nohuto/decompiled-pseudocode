/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18003AB08
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003B07C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180013248 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013270 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A354 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A9F8 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v27; // [rsp+50h] [rbp+8h] BYREF
  struct CTransitionWindowSnapshot *v28; // [rsp+60h] [rbp+18h] BYREF

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
      v26 = 146;
LABEL_18:
      v19 = v14;
LABEL_20:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v26);
      return (unsigned int)v13;
    }
  }
  v9 = *((_QWORD *)this + 4);
  v10 = a5;
  v27 = this;
  v11 = *(unsigned int *)(v9 + 464);
  v12 = v11 + 1;
  if ( (int)v11 + 1 >= (unsigned int)v11 )
    v10 = v11 + 1;
  v13 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
  if ( v12 < (unsigned int)v11 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB5u);
  }
  else if ( v10 > *(_DWORD *)(v9 + 460) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 440, 8u, 1, &v27);
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 440) + 8 * v11) = v27;
    *(_DWORD *)(v9 + 464) = v10;
  }
  if ( v13 < 0 )
  {
    v26 = 149;
    v19 = v13;
    goto LABEL_20;
  }
  v14 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v13 = v14;
  if ( v14 < 0 )
  {
    v26 = 156;
    goto LABEL_18;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0 )
  {
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
                      *(HWND *)(a4 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v18, SnapshotIndex, &v28) >= 0 )
    {
      v20 = v28;
      v21 = *(_QWORD *)(*((_QWORD *)v28 + 35) + 32LL);
      if ( *((_BYTE *)v28 + 356) )
      {
        v22 = *((_QWORD *)this + 4);
        v23 = 0;
        if ( *(_DWORD *)(v22 + 56) - *(_DWORD *)(v22 + 48) >= 0 )
          v23 = *(_DWORD *)(v22 + 56) - *(_DWORD *)(v22 + 48);
        v24 = 0;
        if ( *(_DWORD *)(v21 + 56) - *(_DWORD *)(v21 + 48) >= 0 )
          v24 = *(_DWORD *)(v21 + 56) - *(_DWORD *)(v21 + 48);
        if ( v24 == v23 )
        {
          v25 = 0;
          if ( *(_DWORD *)(v22 + 56) - *(_DWORD *)(v22 + 48) >= 0 )
            v25 = *(_DWORD *)(v22 + 56) - *(_DWORD *)(v22 + 48);
          if ( *(_DWORD *)(v21 + 56) - *(_DWORD *)(v21 + 48) >= 0 )
            v6 = *(_DWORD *)(v21 + 56) - *(_DWORD *)(v21 + 48);
          if ( v6 == v25 )
          {
            *((_QWORD *)this + 68) = v28;
            _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
            *((_BYTE *)this + 160) = 1;
          }
        }
      }
    }
  }
  return (unsigned int)v13;
}
