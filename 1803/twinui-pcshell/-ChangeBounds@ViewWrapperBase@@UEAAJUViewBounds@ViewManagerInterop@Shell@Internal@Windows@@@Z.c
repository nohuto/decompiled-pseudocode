/*
 * XREFs of ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004FF50
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA?AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewStateOverrides@@@Z @ 0x18004EC34 (-s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA-AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewSt.c)
 *     ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004EF0C (-PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18004EF60 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18004F348 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 *     ?v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18005AF80 (-v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::ChangeBounds(__int64 a1, int *a2)
{
  int v2; // esi
  int v3; // r14d
  int v4; // r13d
  unsigned int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // r15
  int v9; // edx
  char v10; // r12
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // r9
  bool (__fastcall *v15)(UAPViewWrapper *__hidden, const struct APPLICATION_VIEW_DATA *, const struct APPLICATION_VIEW_DATA *); // rax
  bool HasViewDataChanged; // al
  bool v17; // di
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v21; // ecx
  int v22; // [rsp+28h] [rbp-69h]
  __int128 v23; // [rsp+30h] [rbp-61h] BYREF
  __int128 v24; // [rsp+40h] [rbp-51h]
  int v25; // [rsp+50h] [rbp-41h]
  __int64 v26; // [rsp+58h] [rbp-39h]
  RTL_SRWLOCK *v27; // [rsp+60h] [rbp-31h]
  _OWORD v28[2]; // [rsp+68h] [rbp-29h] BYREF
  int v29; // [rsp+88h] [rbp-9h]
  _OWORD v30[2]; // [rsp+90h] [rbp-1h] BYREF
  int v31; // [rsp+B0h] [rbp+1Fh]

  v26 = -2LL;
  v23 = *(_OWORD *)(a1 + 212);
  v24 = *(_OWORD *)(a1 + 228);
  v22 = *(_DWORD *)(a1 + 244);
  v25 = v22;
  DWORD2(v24) = a2[8];
  v2 = 3;
  v3 = a2[1];
  v4 = *a2;
  v5 = a2[5];
  v6 = a2[4];
  v7 = a1 - 8;
  v8 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 - 8 + 168) + 296LL);
  AcquireSRWLockExclusive(v8);
  v27 = v8;
  *(_BYTE *)(v7 + 508) = 1;
  v9 = *(_DWORD *)(v7 + 200);
  if ( *(_QWORD *)(v7 + 200) == __PAIR64__(v5, v6) )
  {
    v2 = 2;
  }
  else
  {
    v21 = v5 - *(_DWORD *)(v7 + 204);
    *(_DWORD *)(v7 + 200) = v6;
    *(_DWORD *)(v7 + 208) += v6 - v9;
    *(_DWORD *)(v7 + 212) += v21;
    *(_DWORD *)(v7 + 204) = v5;
  }
  v10 = 0;
  v11 = *(_DWORD *)(v7 + 200);
  if ( *(_DWORD *)(v7 + 208) - v11 == v4 && *(_DWORD *)(v7 + 212) - *(_DWORD *)(v7 + 204) == v3 )
  {
    if ( !IsPPIEdition() )
      v2 &= ~2u;
  }
  else
  {
    *(_DWORD *)(v7 + 208) = v11 + v4;
    v12 = (unsigned int)(v3 + *(_DWORD *)(v7 + 204));
    *(_DWORD *)(v7 + 212) = v12;
    v10 = 1;
  }
  ViewWrapperBase::s_ComputeAggregatedViewData(v12, (__int64)v28, v7 + 220, (_DWORD *)(v7 + 256));
  ViewWrapperBase::s_ComputeAggregatedViewData(v13, (__int64)v30, (__int64)&v23, v14);
  v15 = *(bool (__fastcall **)(UAPViewWrapper *__hidden, const struct APPLICATION_VIEW_DATA *, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)v7 + 128LL);
  if ( v15 == UAPViewWrapper::v_SetDesiredPosition_HasViewDataChanged )
    HasViewDataChanged = UAPViewWrapper::v_SetDesiredPosition_HasViewDataChanged(
                           (UAPViewWrapper *)v7,
                           (const struct APPLICATION_VIEW_DATA *)v28,
                           (const struct APPLICATION_VIEW_DATA *)v30);
  else
    HasViewDataChanged = v15(
                           (UAPViewWrapper *)v7,
                           (const struct APPLICATION_VIEW_DATA *)v28,
                           (const struct APPLICATION_VIEW_DATA *)v30);
  v17 = HasViewDataChanged;
  *(_OWORD *)(v7 + 220) = v23;
  *(_OWORD *)(v7 + 236) = v24;
  *(_DWORD *)(v7 + 252) = v22;
  ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
    (ViewWrapperBase *)v7,
    (const struct APPLICATION_VIEW_DATA *)v28,
    (const struct APPLICATION_VIEW_DATA *)v30);
  v28[0] = v30[0];
  v28[1] = v30[1];
  v29 = v31;
  if ( v2 || v17 )
  {
    LOBYTE(v19) = v17;
    LOBYTE(v18) = v10;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 136LL))(v7, v18, v19);
    ViewWrapperBase::PushDesiredPositionToWindow(v7, v2);
    if ( (v2 & 2) != 0 || v17 )
    {
      if ( *(_QWORD *)(v7 + 192) )
        ViewWrapperBase::PushDesiredBoundsToView((ViewWrapperBase *)v7, (const struct APPLICATION_VIEW_DATA *)v28);
    }
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return 0LL;
}
