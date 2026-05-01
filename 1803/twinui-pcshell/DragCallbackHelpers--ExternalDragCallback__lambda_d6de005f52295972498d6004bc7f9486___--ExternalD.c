/*
 * XREFs of DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1802A44C0
 * Callers:
 *     DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1802A3EB4 (DragCallbackHelpers--CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802A453C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

__int64 __fastcall DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>(a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IExternalDragCallback>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)a1 = off_180344870;
  *(_QWORD *)(a1 + 24) = *a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 32));
  return a1;
}
