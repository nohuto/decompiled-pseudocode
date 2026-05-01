/*
 * XREFs of ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180117028
 * Callers:
 *     ?SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x180114D80 (-SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180114F90 (-SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z @ 0x180115190 (-SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z.c)
 *     ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180115720 (-ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801172D0 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180117368 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  int v15; // esi
  int v16; // eax
  int v17; // r14d
  char v18; // r12
  DWORD v19; // eax
  char v20; // r14
  __int64 v21; // rdx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-51h] BYREF
  __int128 v23; // [rsp+48h] [rbp-41h] BYREF
  __int128 v24; // [rsp+58h] [rbp-31h]
  int v25; // [rsp+68h] [rbp-21h]
  __int128 v26; // [rsp+70h] [rbp-19h] BYREF
  __int128 v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+90h] [rbp+7h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  ViewEventDispatcher::AcquireLockExclusive((RTL_SRWLOCK *)a1[19], SRWLock);
  *((_BYTE *)a1 + 484) = 1;
  v13 = a6;
  if ( (a6 & 1) != 0 )
  {
    if ( *((_DWORD *)a1 + 44) == a2 && *((_DWORD *)a1 + 45) == a3 )
    {
      v13 = a6 & 0xFFFFFFFE;
    }
    else
    {
      v14 = *((_DWORD *)a1 + 45);
      v15 = a3 - v14;
      v16 = *((_DWORD *)a1 + 44);
      v17 = a2 - v16;
      *((_DWORD *)a1 + 44) = v17 + v16;
      *((_DWORD *)a1 + 46) += v17;
      *((_DWORD *)a1 + 47) += v15;
      *((_DWORD *)a1 + 45) = v14 + v15;
    }
  }
  v18 = 0;
  if ( (v13 & 2) != 0 )
  {
    v11 = a5;
    if ( *((_DWORD *)a1 + 46) - *((_DWORD *)a1 + 44) == a4 && *((_DWORD *)a1 + 47) - *((_DWORD *)a1 + 45) == a5 )
    {
      v19 = `IsPPIEdition'::`2'::s_dwProductType;
      if ( !`IsPPIEdition'::`2'::s_dwProductType )
      {
        GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
        v19 = 0;
        `IsPPIEdition'::`2'::s_dwProductType = 0;
      }
      if ( v19 != 119 )
        v13 &= ~2u;
    }
    else
    {
      *((_DWORD *)a1 + 46) = a4 + *((_DWORD *)a1 + 44);
      *((_DWORD *)a1 + 47) = a5 + *((_DWORD *)a1 + 45);
      v18 = 1;
    }
  }
  v20 = 0;
  v23 = *(_OWORD *)((char *)a1 + 196);
  v24 = *(_OWORD *)((char *)a1 + 212);
  v25 = *((_DWORD *)a1 + 57);
  if ( *((_DWORD *)a1 + 58) == 1 )
    DWORD2(v24) = *((_DWORD *)a1 + 59);
  if ( a7 )
  {
    v26 = *a7;
    v27 = a7[1];
    v28 = *((_DWORD *)a7 + 8);
    if ( *((_DWORD *)a1 + 58) == 1 )
      DWORD2(v27) = *((_DWORD *)a1 + 59);
    v20 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *, __int128 *))(*a1 + 128LL))(a1, &v23, &v26);
    *(_OWORD *)((char *)a1 + 196) = *a7;
    *(_OWORD *)((char *)a1 + 212) = a7[1];
    *((_DWORD *)a1 + 57) = *((_DWORD *)a7 + 8);
    ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
      (ViewWrapperBase *)a1,
      (const struct APPLICATION_VIEW_DATA *)&v23,
      (const struct APPLICATION_VIEW_DATA *)&v26);
    v23 = v26;
    v24 = v27;
    v25 = v28;
  }
  if ( (v13 & 3) != 0 || v20 )
  {
    LOBYTE(v12) = v20;
    LOBYTE(v11) = v18;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 136LL))(a1, v11, v12);
    ViewWrapperBase::PushDesiredPositionToWindow(a1, v13);
    if ( (v13 & 2) != 0 || v20 )
    {
      v21 = a1[21];
      if ( v21 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int128 *))(**(_QWORD **)(a1[19] + 448LL) + 56LL))(
          *(_QWORD *)(a1[19] + 448LL),
          v21,
          a1 + 22,
          &v23);
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
}
