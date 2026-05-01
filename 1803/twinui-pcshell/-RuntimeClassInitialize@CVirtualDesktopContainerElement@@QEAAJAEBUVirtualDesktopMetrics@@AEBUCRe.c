/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1802A7D28
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x180295BA8 (--$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1802A7470 (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register_0 @ 0x1802A7BE0 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1802A7BE0.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::RuntimeClassInitialize(
        CVirtualDesktopContainerElement *this,
        const struct VirtualDesktopMetrics *a2,
        const struct Geometry::CRect *a3,
        struct IObservableObjectArray *a4,
        struct IVirtualDesktopElementFactory *a5,
        struct ISwitchThumbnailFactory *a6)
{
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v10; // xmm1
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v19; // [rsp+50h] [rbp+20h] BYREF
  struct IObservableItem *v20; // [rsp+58h] [rbp+28h] BYREF

  v7 = (_OWORD *)((char *)this + 296);
  v8 = 3LL;
  do
  {
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    v7[2] = *((_OWORD *)a2 + 2);
    v7[3] = *((_OWORD *)a2 + 3);
    v7[4] = *((_OWORD *)a2 + 4);
    v7[5] = *((_OWORD *)a2 + 5);
    v7[6] = *((_OWORD *)a2 + 6);
    v7 += 8;
    v10 = *((_OWORD *)a2 + 7);
    a2 = (const struct VirtualDesktopMetrics *)((char *)a2 + 128);
    *(v7 - 1) = v10;
    --v8;
  }
  while ( v8 );
  *v7 = *(_OWORD *)a2;
  v7[1] = *((_OWORD *)a2 + 1);
  v7[2] = *((_OWORD *)a2 + 2);
  v7[3] = *((_OWORD *)a2 + 3);
  v7[4] = *((_OWORD *)a2 + 4);
  v7[5] = *((_OWORD *)a2 + 5);
  v7[6] = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)a3;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 33, (__int64)a4);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
    (__int64 *)this + 34,
    (__int64)a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 30, (__int64)a6);
  v11 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register_0(
          (_QWORD *)this + 35,
          *((_QWORD *)this + 33));
  if ( v11 >= 0 )
  {
    v13 = *((_QWORD *)this + 30);
    v20 = (struct IObservableItem *)0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IObservableItem *, GUID *, char *))(*(_QWORD *)v13 + 104LL))(
            v13,
            0LL,
            v20,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)this + 88);
    if ( v11 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(struct IObservableObjectArray *, unsigned int *))(*(_QWORD *)a4 + 24LL))(
              a4,
              &v19);
      v11 = v14;
      if ( v14 >= 0 )
      {
        v15 = 0;
        if ( !v19 )
        {
LABEL_13:
          *((_BYTE *)this + 825) = 1;
          return 0;
        }
        while ( 1 )
        {
          v20 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
          v16 = (*(__int64 (__fastcall **)(struct IObservableObjectArray *, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)a4 + 32LL))(
                  a4,
                  v15,
                  &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27,
                  &v20);
          v11 = v16;
          if ( v16 < 0 )
            break;
          CVirtualDesktopContainerElement::ItemAddedInternal(this, v20);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
          if ( ++v15 >= v19 )
            goto LABEL_13;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x28,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v14);
      }
      (*(void (__fastcall **)(CVirtualDesktopContainerElement *))(*(_QWORD *)this + 80LL))(this);
      return (unsigned int)v11;
    }
    v12 = 27LL;
  }
  else
  {
    v12 = 26LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
