/*
 * XREFs of ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAKXZ @ 0x18002EC70
 * Callers:
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAKXZ @ 0x1800A8B00 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@St_ea_1800A8B00.c)
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBA@EAAKXZ @ 0x1800A8B10 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@St_ea_1800A8B10.c)
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBI@EAAKXZ @ 0x1800A8B20 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@St_ea_1800A8B20.c)
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WCA@EAAKXZ @ 0x1800A8B30 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@St_ea_1800A8B30.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  unsigned int v3; // edi
  signed __int64 v4; // rtt
  __int64 (__fastcall *v6)(void *); // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(struct Microsoft::WRL::Details::ModuleBase *); // rax

  v2 = *((_QWORD *)a1 + 9);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
      return 2147483646LL;
    v3 = v2 - 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64(a1 + 9, v2 - 1, v2);
    if ( v4 == v2 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v2 + 16),
         (volatile int *)((unsigned __int64)v2 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( a1 )
    {
      v6 = *(__int64 (__fastcall **)(void *))(*a1 + 72);
      if ( v6 == Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`scalar deleting destructor' )
      {
        *a1 = (volatile signed __int64)&Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable';
        *((_QWORD *)a1 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
        *((_QWORD *)a1 + 2) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>'};
        *((_QWORD *)a1 + 3) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,IMarshal>'};
        *((_QWORD *)a1 + 4) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        (*((void (__fastcall **)(_QWORD))a1 + 12))(*((_QWORD *)a1 + 10));
        v7 = *((_QWORD *)a1 + 13);
        if ( v7 )
        {
          *((_QWORD *)a1 + 13) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( *((__int64 *)a1 + 9) < 0 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2LL * *((_QWORD *)a1 + 9));
        v8 = *((_QWORD *)a1 + 7);
        if ( v8 )
        {
          *((_QWORD *)a1 + 7) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        operator delete((void *)a1, (const struct std::nothrow_t *)0x70);
      }
      else
      {
        ((void (__fastcall *)(volatile signed __int64 *, __int64))v6)(a1, 1LL);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v9 = *(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                  + 16LL);
      if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        return 0LL;
      }
      v9(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v3;
}
