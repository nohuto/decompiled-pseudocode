/*
 * XREFs of ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180141AB0
 * Callers:
 *     ?SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x18013F2B0 (-SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18013F4C0 (-SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z @ 0x18013F6C0 (-SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z.c)
 *     ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013FC50 (-ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180141D50 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180141DE8 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::SetDesiredPosition(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int128 *a7)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // edi
  int v14; // ecx
  int v15; // eax
  char v16; // r12
  DWORD v17; // eax
  char v18; // r14
  int v19; // ecx
  __int64 v20; // rdx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-51h] BYREF
  __int128 v22; // [rsp+48h] [rbp-41h] BYREF
  __int128 v23; // [rsp+58h] [rbp-31h]
  int v24; // [rsp+68h] [rbp-21h]
  __int128 v25; // [rsp+70h] [rbp-19h] BYREF
  __int128 v26; // [rsp+80h] [rbp-9h]
  int v27; // [rsp+90h] [rbp+7h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  ViewEventDispatcher::AcquireLockExclusive((RTL_SRWLOCK *)a1[22], SRWLock);
  *((_BYTE *)a1 + 508) = 1;
  v13 = a6;
  if ( (a6 & 1) != 0 )
  {
    if ( *((_DWORD *)a1 + 50) == a2 && *((_DWORD *)a1 + 51) == a3 )
    {
      v13 = a6 & 0xFFFFFFFE;
    }
    else
    {
      v14 = a3 - *((_DWORD *)a1 + 51);
      v15 = a2 - *((_DWORD *)a1 + 50);
      *((_DWORD *)a1 + 50) = a2;
      *((_DWORD *)a1 + 52) += v15;
      *((_DWORD *)a1 + 53) += v14;
      *((_DWORD *)a1 + 51) = a3;
    }
  }
  v16 = 0;
  if ( (v13 & 2) != 0 )
  {
    v11 = a5;
    if ( *((_DWORD *)a1 + 52) - *((_DWORD *)a1 + 50) == a4 && *((_DWORD *)a1 + 53) - *((_DWORD *)a1 + 51) == a5 )
    {
      v17 = `IsPPIEdition'::`2'::s_dwProductType;
      if ( !`IsPPIEdition'::`2'::s_dwProductType )
      {
        GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
        v17 = 0;
        `IsPPIEdition'::`2'::s_dwProductType = 0;
      }
      if ( v17 != 119 )
        v13 &= ~2u;
    }
    else
    {
      *((_DWORD *)a1 + 52) = a4 + *((_DWORD *)a1 + 50);
      *((_DWORD *)a1 + 53) = a5 + *((_DWORD *)a1 + 51);
      v16 = 1;
    }
  }
  v18 = 0;
  v22 = *(_OWORD *)((char *)a1 + 220);
  v23 = *(_OWORD *)((char *)a1 + 236);
  v24 = *((_DWORD *)a1 + 63);
  v19 = *((_DWORD *)a1 + 64);
  if ( v19 == 1 )
    DWORD2(v23) = *((_DWORD *)a1 + 65);
  if ( a7 )
  {
    v25 = *a7;
    v26 = a7[1];
    v27 = *((_DWORD *)a7 + 8);
    if ( v19 == 1 )
      DWORD2(v26) = *((_DWORD *)a1 + 65);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *, __int128 *))(*a1 + 128LL))(a1, &v22, &v25);
    *(_OWORD *)((char *)a1 + 220) = *a7;
    *(_OWORD *)((char *)a1 + 236) = a7[1];
    *((_DWORD *)a1 + 63) = *((_DWORD *)a7 + 8);
    ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
      (ViewWrapperBase *)a1,
      (const struct APPLICATION_VIEW_DATA *)&v22,
      (const struct APPLICATION_VIEW_DATA *)&v25);
    v22 = v25;
    v23 = v26;
    v24 = v27;
  }
  if ( (v13 & 3) != 0 || v18 )
  {
    LOBYTE(v12) = v18;
    LOBYTE(v11) = v16;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 136LL))(a1, v11, v12);
    ViewWrapperBase::PushDesiredPositionToWindow(a1, v13);
    if ( (v13 & 2) != 0 || v18 )
    {
      v20 = a1[24];
      if ( v20 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int128 *))(**(_QWORD **)(a1[22] + 520LL) + 56LL))(
          *(_QWORD *)(a1[22] + 520LL),
          v20,
          a1 + 25,
          &v22);
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
}
