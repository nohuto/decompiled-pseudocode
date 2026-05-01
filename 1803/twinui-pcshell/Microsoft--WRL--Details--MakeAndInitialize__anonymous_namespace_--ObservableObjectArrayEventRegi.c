/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayEventRegistration_A0x86bda3c3::ObservableObjectArrayEventRegistration_IObservableObjectArrayChanged_____ptr64_&___ptr64_ @ 0x18027B958
 * Callers:
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x18028F780 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register_0 @ 0x1802A7BE0 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1802A7BE0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease @ 0x1800A2398 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalR.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef @ 0x1800A23C0 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalA.c)
 *     ??0?$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChanged@@@EventRegistrationHelpers@@QEAA@XZ @ 0x18027BAA0 (--0-$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChanged@@@EventRegistrati.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayEventRegistration_A0x86bda3c3::ObservableObjectArrayEventRegistration_IObservableObjectArrayChanged_____ptr64_____ptr64_(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    EventRegistrationHelpers::EventRegistration<IObservableObjectArray,IObservableObjectArrayChanged>::EventRegistration<IObservableObjectArray,IObservableObjectArrayChanged>(v5);
    v8 = v6;
    *v6 = off_180321ED0;
    v6[2] = *a2;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
