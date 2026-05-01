/*
 * XREFs of ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18030A1B8
 * Callers:
 *     ?Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z @ 0x18014DE50 (-Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z.c)
 *     ?Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z @ 0x180150D90 (-Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z.c)
 *     ?RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@Z @ 0x1801F6A10 (-RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeE.c)
 *     ?RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@Z @ 0x1801F6A50 (-RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroup.c)
 *     ?Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@Z @ 0x18026BAE0 (-Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@P.c)
 *     ?RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x1802869B0 (-RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@.c)
 *     ?RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x1802869F0 (-RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z.c)
 *     ?RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x1802B3F00 (-RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBIL.c)
 *     ?RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerNotification@@PEAK@Z @ 0x1802C3000 (-RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerN.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1800992F8 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1800992FE (__Platform_AcquireSRWLockExclusive.c)
 *     CoCreateInstance_0 @ 0x1800994FD (CoCreateInstance_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x180309D8C (--$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUn.c)
 */

__int64 __fastcall CGITRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  RTL_SRWLOCK *v3; // rsi
  RTL_SRWLOCK v6; // rbx
  int v7; // ebx
  LPVOID v8; // r14
  PVOID v9; // rax
  void *v10; // r8
  PVOID v11; // rdx
  _QWORD *v12; // rdx
  LPVOID Ptr; // [rsp+60h] [rbp+30h] BYREF
  struct IUnknown *v15; // [rsp+68h] [rbp+38h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp+40h] BYREF

  v15 = a2;
  *a3 = 0;
  v3 = this + 1;
  _Platform_AcquireSRWLockExclusive(this + 1);
  v6.Ptr = this->Ptr;
  ReleaseSRWLockExclusive_0(v3);
  if ( v6.Ptr )
    goto LABEL_8;
  ppv = 0LL;
  v7 = CoCreateInstance_0(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
  if ( v7 >= 0 )
  {
    _Platform_AcquireSRWLockExclusive(v3);
    if ( !this->Ptr )
    {
      v8 = ppv;
      if ( ppv )
      {
        Ptr = ppv;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&Ptr);
        Ptr = this->Ptr;
        this->Ptr = v8;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
      }
    }
    ReleaseSRWLockExclusive_0(v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( v7 >= 0 )
  {
LABEL_8:
    v9 = this->Ptr;
    Ptr = 0LL;
    ppv = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CGITCookieObject,IGITCookieObject,IGlobalInterfaceTable *,IUnknown * &>(
           &Ptr,
           (struct IGlobalInterfaceTable **)&ppv,
           &v15);
    if ( v7 >= 0 )
    {
      _Platform_AcquireSRWLockExclusive(v3);
      v11 = this[3].Ptr;
      v7 = 0;
      if ( v11 != this[5].Ptr
        || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                   (__int64)&this[2],
                   (unsigned __int64)v11 + 1,
                   v10),
            v7 >= 0) )
      {
        v12 = (char *)this[2].Ptr + 8 * (__int64)this[3].Ptr++;
        if ( v12 )
        {
          *v12 = Ptr;
          if ( Ptr )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
        }
      }
      ReleaseSRWLockExclusive_0(v3);
      if ( v7 >= 0 )
        *a3 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Ptr + 32LL))(Ptr);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  }
  return (unsigned int)v7;
}
